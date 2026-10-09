## Descripción de Mastermind

El videojuego **Mastermind: Race For The Code!** está basado en el clásico juego de mesa *Mastermind*, soporta internacionalización (i18n) con dos culturas: Español México (es-MX) e Inglés Estados Unidos (en-US).

En el juego se podrán crear salas en las que se jugará contra otros jugadores, tendrá varios modos y cuatro dificultades.

Los jugadores tendrán un *avatar* que podrán personalizar al subir una imagen.

El juego tiene como objetivo que los jugadores adivinen el *Código Secreto* con ayuda de las pistas que se les da con cada intento. El *Código Secreto* es un código de cuatro colores (los cuales se pueden repetir).
## Repositorio

https://github.com/gabosaurio12/TCS-MasterMind

## Explicación de integración con Entity Framework

Se está utilizando un enfoque *DataBase First* por lo que utilizamos el wizard de ADO.NET para generar el .edmx, el cual ya tiene todos los objetos y relaciones de la base de datos.

Para esto creé una clase que está nombrada igual que la generada por Entity Framewokr pero agrego un constructor que me permite generar el connection string mediante los datos guardados en un .env, de esta forma las credenciales e información sensible no queda hardcodeada:

```
using DotNetEnv;
using System;
using System.Data.Entity.Core.EntityClient;
using System.Data.SqlClient;

namespace MasterMind_Client.Data
{
    public partial class MasterMindEntities
    {
        public MasterMindEntities(bool useCustomConnection) : base(BuildConnectionString())
        {
        }

        private static string BuildConnectionString()
        {
            Env.Load();

            var sqlBuilder = new SqlConnectionStringBuilder
            {
                DataSource = @"(localdb)\MSSQLLocalDB",
                InitialCatalog = Environment.GetEnvironmentVariable("DB_NAME"),
                UserID = Environment.GetEnvironmentVariable("DB_USER"),
                Password = Environment.GetEnvironmentVariable("DB_PASSWORD"),
                PersistSecurityInfo = true,
                TrustServerCertificate = true,
                Encrypt = false,
                MultipleActiveResultSets = true
            };

            var entityBuilder = new EntityConnectionStringBuilder
            {
                Provider = "System.Data.SqlClient",
                ProviderConnectionString = sqlBuilder.ConnectionString,
                Metadata = "res://*/Data.MasterMindModel.csdl|res://*/Data.MasterMindModel.ssdl|res://*/Data.MasterMindModel.msl"
            };

            return entityBuilder.ConnectionString;
        }
    }
}
```

También creé unos servicios temporales para manejar toda la información, las llamadas a estos serán reemplazadas por servicios reales con el servidor:

```
FriendshipService.cs
TempAuthService.cs
TempMatchRoomService.cs
TempPlayerService.cs
```

## Evidencia de las actividades en Eminus

![[Captura de pantalla 2026-09-27 a la(s) 7.44.18 p.m..png]]
## Capturas de pantalla

Por unas cuestiones técnicas que tuve con mi computadora, ya no pude tomar las capturas, pero estos son los métodos ya con EF implementados:

### SignupPage
```
private void RegisterBtn_Click(object sender, RoutedEventArgs e)
        {
            if (ValidateFormsData())
            {
                var player = GetFormsData();
                var result = TempAuthService.RegisterPlayer(player);
                switch (result)
                {
                    case PlayerRegistrationResultEnum.Success:
                        pendingPlayerUsername = player.username;
                        var successModal = new SuccessNotificationModal(Properties.Resources.SuccessNotification_Register, true);
                        successModal.ModalClosed += ModalClosed;
                        successModal.Show();
                        break;
                        
                    case PlayerRegistrationResultEnum.UsernameTaken:
                        new ErrorNotificationModal(Properties.Resources.ErrorNotification_UsernameTaken).Show();
                        break;

                    case PlayerRegistrationResultEnum.EmailTaken:
                        new ErrorNotificationModal(Properties.Resources.ErrorNotification_EmailTaken).Show();
                        break;
                }
            }
        }
```

### LoginPage
```
private bool ValidateFormsData(Player player)
        {
            if (string.IsNullOrWhiteSpace(player.username) || string.IsNullOrWhiteSpace(player.password))
            {
                new ErrorNotificationModal(Properties.Resources.ErrorNotification_WhiteInput).Show();
                return false;
            }
            if (!TempAuthService.AuthPlayer(player))
            {
                new ErrorNotificationModal(Properties.Resources.ErrorNotification_WrongCredentials).Show();
                return false;
            }
            return true;
        }

        private void ModalVerificationSucceded(object sender, Player verifiedPlayer)
        {
            CurrentPlayer.Instance.SetCurrentPlayer(verifiedPlayer);

            if (RememberLoginCheck.IsChecked == true)
            {
                Properties.Settings.Default.RememberLogin = true;
                Properties.Settings.Default.SavedUsername = verifiedPlayer.username;
            }
            else
            {
                Properties.Settings.Default.RememberLogin = false;
                Properties.Settings.Default.SavedUsername = "";
            }

            Properties.Settings.Default.Save();
            NavigationService.Navigate(new Uri("Pages/MainPage.xaml", UriKind.Relative));

        }

        private void LoginBtn_Click(object sender, RoutedEventArgs e)
        {
            var player = GetFormsData();
            if (ValidateFormsData(player))
            {
                var modal = new VerificationCodeModal(player.username);
                modal.VerificationSucceded += ModalVerificationSucceded;
                modal.Show();
            }
        }
```

### AuthService
```
using BCrypt.Net;
using log4net;
using MasterMind_Client.Data;
using MasterMind_Client.TempData.Enum;
using System.Data.Entity.Core;
using System.Linq;
using System.Security.Cryptography;

namespace MasterMind_Client.TempData
{
    public static class TempAuthService
    {
        private readonly static ILog logger = LogManager.GetLogger(typeof(TempAuthService));

        private readonly static MasterMindEntities Context = new MasterMindEntities(true);
        const string Digits = "0123456789";


        public static bool AuthPlayer(Player player)
        {

            try
            {
                var authPlayer = Context.Player.FirstOrDefault(p => p.username == player.username);

                if (authPlayer == null)
                {
                    return false;
                }
                try
                {
                    if (BCrypt.Net.BCrypt.Verify(player.password, authPlayer.password))
                    {
                        SendVerificationCode(authPlayer.player_id);
                        return true;
                    }
                }
                catch (SaltParseException ex)
                {
                    logger.Error(ex);
                }
                
            }
            catch (EntityException ex)
            {
                logger.Error(ex);
            }

            return false;
        }

        public static PlayerRegistrationResultEnum RegisterPlayer(Player player)
        {
            try
            {
                if (Context.Player.Any(p => p.username == player.username))
                {
                    return PlayerRegistrationResultEnum.UsernameTaken;
                }
                if (Context.Player.Any(p => p.email == player.email))
                {
                    return PlayerRegistrationResultEnum.EmailTaken;
                }

                player.password = BCrypt.Net.BCrypt.HashPassword(player.password);

                Context.Player.Add(player);
                Context.SaveChanges();

                SendVerificationCode(player.player_id);

                return PlayerRegistrationResultEnum.Success;
            }
            catch (EntityException ex)
            {
                logger.Error(ex);
            }

            return PlayerRegistrationResultEnum.Error;
        }

        public static (bool, Player) AuthVerificationCode(string username, string code)
        {

            try
            {
                var player = TempPlayerService.GetPlayerByUsername(username);
                if (player != null)
                {
                    var authCode = Context.VerificationCode.FirstOrDefault(vc => vc.verification_code == code && vc.player_id == player.player_id);
                    if (authCode != null)
                    {
                        Context.VerificationCode.Remove(authCode);
                        Context.SaveChanges();
                        return (true, player);
                    }
                    return (false, player);
                }
            }
            catch (EntityException ex)
            {
                logger.Error(ex);
            }
            return (false, null);
        }

        private static void SendVerificationCode(int playerId)
        {
            var result = CreateVerificationCode(playerId);
            while (!result)
            {
                CreateVerificationCode(playerId);
            }
        }

        private static string GenerateVerificationCode()
        {
            int length = 5;
            var bytes = new byte[length];
            using (var rng = RandomNumberGenerator.Create())
            {
                rng.GetBytes(bytes);
            }

            var charCode = new char[length];
            for (int i = 0; i < length; i++)
            {
                charCode[i] = Digits[bytes[i] % Digits.Length];
            }

            return new string(charCode);
        }

        private static bool CreateVerificationCode(int playerId)
        {


            string code = GenerateVerificationCode();

            try
            {
                if (Context.VerificationCode.FirstOrDefault(vc => vc.verification_code.Equals(code)) == null)
                {
                    var currentCode = Context.VerificationCode.FirstOrDefault(vc => vc.player_id == playerId);
                    if (currentCode != null)
                    {
                        Context.VerificationCode.Remove(currentCode);
                        Context.SaveChanges();
                    }

                    Context.VerificationCode.Add(
                        new VerificationCode
                        {
                            verification_code = code,
                            player_id = playerId
                        });

                    Context.SaveChanges();

                    return true;
                }
            }
            catch (EntityException ex)
            {
                logger.Error(ex);
            }

            return false;
        }
    }
}
```

## Evidencia de cambio de culturas

Por el mismo motivo técnico tampoco puedo demostrar esto, pero en las actividades anteriores hay evidencia de que ya contaba con estas funcionalidades y no ha cambiado.

Actualmente así se ve la carpeta de Properties:
![[Captura de pantalla 2026-09-27 a la(s) 7.50.01 p.m..png|356]]
## Evidencia de datos consultados en la base de datos

Tampoco puedo demostrar que la base de datos está funcionando mediante consultas.

## Declaración de uso de IA

Utilicé el agente Claude para que me apoyara generando Styles para los elementos con las características que le solicitaba.

También solicitaba continuamente una revisión de la decisión que tomaba y si las críticas que me hacían tenían sentido y relación con el proyecto las aplicaba.

Finalmente le pedía que me explicara patrones que podía utilizar para tener un código limpio durante la construcción del proyecto.

## Summary de SonarCube

![[Captura de pantalla 2026-09-27 a la(s) 7.54.25 p.m..png]]

## Referencias

Adegeo. (n.d.-a). _RadioButton - WPF_. Microsoft Learn. https://learn.microsoft.com/es-es/dotnet/desktop/wpf/controls/radiobutton

Adegeo. (n.d.). _ScrollViewer (Visor de desplazamiento) - WPF_. Microsoft Learn. https://learn.microsoft.com/es-es/dotnet/desktop/wpf/controls/scrollviewer

Refactoring.Guru. (n.d.). _Design patterns_. https://refactoring.guru/design-patterns

_Using WPF styles - The complete WPF tutorial_. (n.d.). https://wpf-tutorial.com/es/92/estilos/using-wpf-styles/