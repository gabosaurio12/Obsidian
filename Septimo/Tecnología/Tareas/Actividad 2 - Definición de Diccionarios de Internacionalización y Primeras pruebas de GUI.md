## Descripción de Mastermind

El videojuego **Mastermind: Race For The Code!** está basado en el clásico juego de mesa *Mastermind*, soporta internacionalización (i18n) con dos culturas: Español México (es-MX) e Inglés Estados Unidos (en-US).

En el juego se podrán crear salas en las que se jugará contra otros jugadores, tendrá varios modos y cuatro dificultades.

Los jugadores tendrán un *avatar* que podrán personalizar al subir una imagen.

El juego tiene como objetivo que los jugadores adivinen el *Código Secreto* con ayuda de las pistas que se les da con cada intento. El *Código Secreto* es un código de cuatro colores (los cuales se pueden repetir).
## Culturas objetivo seleccionadas

Se seleccionaron las culturas de Español México (es-MX) e Inglés Estados Unidos (en-US).
## Explicación del proceso de internacionalización

Primero se creó una tabla en un documento excel con los encabezados: **Pantalla, Control, Tipo de elemento, Clave del recurso, Texto base, Traducción, Cultura, Contexto de uso, Observaciones**.

Después fui analizando cada prototipo de cada página y rellenando la tabla con los elementos que identificaba que necesitarían internacionalizarse. En la parte de observaciones anotaba si debían ser cortos, claros, descriptivos, etc. Tampoco usaba traducciones literales para todos, en algunos utilizaba palabras que tenían un significado igual o similar pero tenían más sentido para el dominio.

Una vez que tuve casi todas las páginas terminadas, creé el archivo un .resx en el proyecto para es-MX y en-US y usé la columna de **Clave del recurso, Texto base y traducción** para rellenar los archivos. La cultura base será es-MX.

En el caso de los modales de *SuccessNotificationModal* y *ErrorNotificationModal* es importante tomar en cuenta que pueden cambiar y aumentar para describir mejor el comportamiento de la aplicación.
## Creación de Interfaces Internacionalizadas en WPF

Para cada elemento que debía internacionalizarse de las Páginas, Modales y Ventanas en vez de tener el texto hardcodeado se utilizaba el *Static Resource* para asignar una de las cadenas del archivo Resources.resx.

Pero con eso no es suficiente, en el App.xaml.cs se escribió sección de código para que detectara la cultura actual del Sistema Operativo (SO) y que utilizara el archivo .resx de la misma cultura.

```C#
CultureInfo cultureToUse = DetermineStartupCulture();

System.Threading.Thread.CurrentThread.CurrentUICulture = cultureToUse;
CultureInfo.DefaultThreadCurrentUICulture = cultureToUse;
```

Pero también era importante que el Jugador pudiera cambiar el idioma en cualquier momento, por lo que se implementó un botón en LoginPage, SignupPage y MainPage para cambiar el idioma, al solo tener dos idiomas es de tipo toggle, por lo que si lo presionas cambia a la cultura que no está activa:

![[image 48.png]]
## Pruebas de Internacionalización

Estas son algunas de las interfaces en ambos idiomas.
### LoginPage
**Español**
![[image-1 17.png]]

**Inglés**
![[image-2 7.png]]
### SignupPage
**Español**
![[Septimo/Tecnología/image.png]]

**Inglés**
![[image-1 18.png]]
### MainPage
**Español**![[image-1 19.png]]

**Inglés**![[image 49.png]]
### VerificationCodeModal
**Español**![[image.png|346]]

**Inglés**![[image-1.png|347]]
### MainPage
**Español**
![[image 50.png]]

**Inglés**
![[image-1 20.png]]
### ProfilePage
**Español**
![[image-1 21.png]]

**Inglés**![[image 51.png]]
### UpdateProfilePage
**Español**![[image 53.png]]
**Inglés**![[image-1 23.png]]
### FriendsModal
**Español**![[image-2 8.png|294]]
**Inglés**![[image 52.png|295]]

### FriendRequestsModal
**Español**![[image-2 9.png|301x412]]

**Inglés**![[image-1 22.png|305x421]]
### RoomsPage
**Español**
![[image-4.png]]

**Inglés**
![[image-2.png]]

### CreateRoomPage
**Español**
![[image-5.png]]
![[image-6.png]]

**Inglés**
![[image-3.png]]![[image-7.png]]

## Pruebas automatizadas de SignupPage
![[image-8.png]]