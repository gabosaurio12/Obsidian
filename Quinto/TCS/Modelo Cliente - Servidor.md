- El modelo cliente - servidor
	- Se supone que el modelo OSI, es una buena forma de organizar la informaión, ya que cuando un emisor envía un mensaje, se realiza un **entubamiento de bits** y se envía un mensaje
	- **¿Qué podría estar mal en  esta forma de comunicación?**
		- Siempre que se quiere enviar un mensaje se tiene que procesar media docena de capas
	- Un servidor no forzosamente es un equipo, es cualquier emisor que brinde un servicio
- El modelo de comunicación
	- La idea principal del modelo Cliente/Servidor es ver a un sistema como un conjunto de procesos llamados **servidores**, que ofrezcan servicios a los usuarios, llamados **clientes**
	- Una máquina puede tener varios procesos que funcionen como servidor o cliente
- Ventajas del modelo cliente - servidor
	- **Sencillez:** El cliente envía un mensaje y se obtiene una respuesta por parte del servidor
	- No se tiene que establecer una conexión sino hasta que se utilice
	- **La eficiencia:** la idea básica del modelo, es que no se ocupen todas las capas como en el modelo OSI. De tal forma que solo se definen 3 capas: la capa física, enlace y solicitud/respuesta
	- Request -> Response: C -> S
	- Solicit -> Response: S -> C
	- One Way: No espera respuesta
	- Notification: Solo le informa al cliente
- Debido a su sencillez, teóricamente el modelo se implementa mediante 2 llamadas al sistema:
	- Para el envío de mensajes
		- **send(dest, &mptr)**
	- Para la recepción de mensajes
		- **receive(addr, &mptr)**
## Direccionamiento
- Antes de que un cliente pueda enviar un mensaje a algún servidor, neesita tomar en cuenta algunos aspectos como:
	- **¿a quién debo mandarle mensaje?**
- El modelo cliente/servidor, implementa algunos mecanismos de direccionamiento
### Integrar machine.number al código del cliente
- *machine:* indica el número de máquina dentro de la red
- *number:* el número de proceso dentro de esa máquina
- **Desventajas:**
	- Este método no posee la transparencia que se busca ya que se está identificando que existen varias máquinas trabajando
		- No es transparente porque necesitas conocer el host y el puerto
	- Si el **servidor** falla, se pierde el servicio pues los programas compilados tienen integrado ese número de máquina para ese servicio. Una variación de este esquema, utiliza **machine.local_id**
### Otra forma de direccionamiento es dejar que los procesos elijan direccionas al azar y localizarlos mediante transmisiones:**
- En una LAN que soporte transmisiones, el emisor puede transmitir un paquete especial de localización con la dirección del proceso destino
- Las máquinas en la red reciben este mensaje y verifican si la dirección es la suya; en caso de que lo sea, regresa un mensaje "aquí estoy" con su dirección en la red (número de máquina)
- El cliente utiliza entonces esa dirección y la captura para uso posterior. Si bien esto cumple con las premisas, genera una carga adicional en el sistema
- **Generar un servidor de nombres:**
	- Cada vez que se ejecute un lciente en su primer intento por utilizar un servidor, el cliente envía una solicitud al servidor de nombres (nombre en ASCII) para pedirle el número de la máquina donde se localiza al servidor
	- Una vez obtenida la dirección se puede enviar la solicitud de manera directa
- **Desventajas**
	- El problema de este método es que es un componente centralizado y si bien se puede duplicar, presenta problemas en el mantenimiento de la consistencia
### Utilizar un hardware especial
Dejando que los procesos elijan su dirección en forma aleatoria
- En vez de localizar un proceso mediante transmisiones en toda la red, los chips de interface de la red se diseñan de modo que permitan los procesos almacenar direcciones de procesos en ellos
- Las tramas usarían direcciones de procesos en vez de direcciones de máquinas. Al recibir cada trama, el chip de interface de la red solo tendría que examinar la trama para saber si el proveso destinado se encuentra en esa máquina. En caso afirmativo, la aceptaría de lo contrario no
## Primitivas
**Con bloqueo y sin bloqueo**
- Las primitivas descritas anteriormente, reciben el nombre de primitivas cn bloqueo (síncronas) y sin bloqueo (asíncronas)
**Primitivas send con bloqueo**
- Mientras que se envía el mensaje el proceso emisor se bloquea
- En algunos casos el receptor puede especificar de quiénes queire recibir el mensaje queda bloqueado 
**Primitivas send sin bloqueo**
- El control se regresa de inmediato al emisor antes de enviar el msg
- Se permite el trabajo paralelo
- El mensaje es depositado en un buffer
- **Desventajas**
	- El cliente no puede utilizar el buffer mientras el mensaje se envía
	- El cliente no sabe a ciencia cierta cuando ha respondido el servidor
- **Solución**
	- Que el núcleo haga copias en un espacio privado, aunque de esta forma se desperdicia tiempo mientras se realiza la copia
- **Otra solución**
	- Cuando el mensaje es enviado, se interrumpe al emisor para informarle que el buffer está disponible (**send sin bloqueo con interrupción**)
	- **Ventajas**
		- Implementación total del paralelismo
	- **Desventajas**
		- Difícil de programar
		- La depuración de un programa que utilice interrupciones, es difícil y en ocasiones imposible
**Primitivas confiables vs No confiables**
- Una primitva es confiable cuando sabemos al 100% que el mensaje fue entregado
- Un mensaje no es confiable cuando no llega a su destino, existen 3 formas de pensar o de concebir este problema
	- El **send** desde un principio no garantiza la entrega del mensaje (analogía o una oficina de correos), se hace lo posible por entregar el mensaje pero no se promete nada
	- Exigir un reconocimiento entre núcleos del sistema. el problema es que se necesitan de 4 mensajes para realizarlo solicitud, reconocimiento, respuesta, reconocimiento
## Sockets