## Consideraciones técnicas
- El proyecto debe contener:
	- Definición artefactos de cada etapa de desarrollo
		- No hay proyectos sin artefactos de diseño
	- Registro de avance en gitlab o bitbucket (por integrante)
	- Uso de framework de persistencia
		- Mapeo a la base de datos (Microsoft Entity Framework)
	- Uso de framework de comunicación en red
		- WCF (Windows Communication Framework)
	- Uso de framework de UI
		- WPF
	- Prácticas seguras de escritura de código
		- Proyecto inseguro no se recibe
		- Todo código que se escriba debe ser seguro y probado
		- Pruebas de inyección de código en distintos niveles
	- Seguridad en la BD
		- SQL Server authentication
		- Crear una cuenta exclusiva para conectarse a la base de datos con permisos limitados
	- Evitar el uso de antipatrones
	-  Soporte a inglés y español
		- Tiene detección de la cultura
		- Si el SO está en inglés el juego también
	- Pruebas
		- 300 pruebas
		- Pruebas de GUI
## Características generales
- Registro de usuarios / jugadores
	- El registro debe estar ligado a una confirmación de registro vía email
- Cambio de contraseñas
	- Confirmación por email
- Personalización de perfil
	- Avatar del jugador
	- Nickname
	- Datos
		- Nombre y apellidos
	- Correo electrónico
	- Redes sociales
- Inicio de sesión / jugar como invitado
- Invitación de amigos (email/código)
- Lista de amigos
	- Agregar amigos
	- Remover amigos
- Jugadores expulsados
	- Bannear
- Lobby / sala de espera
- Chat colaborativo (en sala o en partida)
- Unirse a la partida
- Marcadores / tabla de ganadores
- Iniciar juego
- Personalización de reglas / look and feel
	- Cada casilla de tesoro tiene una animación personalizada
## Convención de Pruebas
public void TestLoginSuccessful()
public void TestLoginEmptyCredentials()
public void TestLoginNoDatabaseConnection()
# Usuarios de SQL Server
## Usuario Sysadmin
SA
SQLs2411
## Usuario Login
gaboserver
Sqls2411
## Contraseñas
Las contraseñas deberan tener:
- Al menos 8 caracteres
- Al menos una letra **mayúscula**
- Al menos un aletra **minúscula**
- Al menos un **número**
- Al menos un caracter especial **! @ # $ % & _**
## Apartados
- Agregar a reporte de proyecto final, reporte de seguridad en la que los componentes que se usan no identificaron una vulnerabilidad conocida
