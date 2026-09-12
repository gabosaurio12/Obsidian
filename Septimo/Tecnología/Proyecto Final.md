## Consideraciones técnicas

El proyecto debe contener:
- Definición de artefactos de cada etapa de desarrollo
- Registro de avance en github, gitlab o bitbucket
- Uso de framework de persistencia
	- Entity Framework
- Uso de framework de comunicación en red
	- WCF (Windows Communication Foundation)
- Uso de framework de UI
	- WPF (Windows Presentation Foundation)
- Prácticas seguras de escritura de código
- Seguridad en la BD
	- Usuario en la bd con permisos limitados
	- no entrar como super admin
- Evitar el uso de antipatrones
- Soporte a inglés y español
- Pruebas
	- Código que no se prueba no existe
	- Mínimo 300 pruebas
	- Flujos normales, al menos 3 alternos y todos los flujos de excepción
## Características generales
- Registro de usuarios / jugadores
	- Con verificación por código o email
- Cambio de contraseñas
- Personalización de perfil
	- Los avatares deben tener roaming para que puedan verlas más usuarios
- Inicio de sesión / jugar como invitado
- Invitación de amigos (email/código)
- Lista de amigos
	- Manejar presencia: saber cuándo está conectado o cuando no
- Jugadores expulsados
	- Debe haber ban
	- Puede ser con reportes, hay que checar reglas de reporte/banneo
	- (Propuesta: cuando se bannee poner el audio "PAL LOBBYYY")
- Lobby / sala de espera
- Chat colaborativo (en sala o en partida)
- Unirse a la partida
- Marcadores / tabla de ganadores
- Iniciar juego
- Personalización de reglas / look and feel
- Juego mulitjugador
	- Multi partida
## Mastermind
### Reglas básicas
- 2 jugadores
### Reglas de juego físico
- **Roles:** Un jugador es el codificador y el otro es el descifrador. [[1](https://www.youtube.com/watch?v=KKnGcu8O55w&t=12)]
- **El código:** El codificador oculta una secuencia secreta de 4 o 5 fichas de colores. [[1](https://es.wikipedia.org/wiki/Mastermind), [2](https://www.youtube.com/watch?v=KKnGcu8O55w&t=12)]
- **Los intentos:** El descifrador coloca combinaciones en el tablero para intentar adivinar el código. [[1](https://es.wikipedia.org/wiki/Mastermind), [2](https://www.youtube.com/watch?v=KKnGcu8O55w&t=12)]
	- Suele haber entre 8 y 12 intentos
- **Las pistas:** El codificador responde con clavijas pequeñas:
    - **Negra:** Un color correcto en la posición correcta.
    - **Blanca:** Un color correcto pero en una posición incorrecta. [[1](https://www.tiktok.com/@instaboardgamer/video/7536585862059003141), [2](https://www.youtube.com/watch?v=g2-8iyKt_UY&t=10)]
- **Victoria:** Gana quien logre descifrar el código en la menor cantidad de intentos. [[1](https://www.youtube.com/watch?v=g2-8iyKt_UY&t=10), [2](https://www.sanborns.com.mx/producto/897137/juego-de-mesa-mastermind)]
### Reglas adaptadas (propuestas)
- El código secreto es generado por el servidor y los jugadores compiten por encontrarlo, habrá dos modalidades:
	- El que acabe en menos tiempo gana (deben encontrarlo antes de que se acabe el tiempo)
		- Tener un sistema de compensación de tiempo por el delay de la red
	- El que acabe en menos intentos gana
- La dificultad del juego puede variar por el número de intentos. El tiempo puede llegar a cambiar si es que es muy sencillo, por ejemplo:
	- Fácil: 10-12 intentos / 3 minutos
	- Medio: 8 intentos / 2 minutos
	- Difícil: 6 intentos / 1 minutos
	- Ultra instinto: 3 intentos / 30 segundos
### Puntos de atención
- Información oculta real que debe viajar por WCF:
	- El código secreto NUNCA debe llegar al cliente, ni siquiera en un payload sin mostrar en UI. El DTO que se envía al decodificador no debe contener ese código
- Máquina de estados de la partida:
	- Se deben  manejar las fases explícitamente:
		1. EsperandoCodigo
		2. EnProgresoAdivinanza
		3. RondaTerminada (Cuando uno de los dos jugadores consiga el código o se acabe el tiempo o intentos)