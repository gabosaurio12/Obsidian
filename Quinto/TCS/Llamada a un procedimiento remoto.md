- En 1984 un artículo de Birrel y Nelson presenta una forma de abordar el problema
	- Se debería permitir a los programas invocar procedimientos localizados en otras máquinas
	- A esto se le llama *llamada a un procedimiento remoto o RPC (Remote Procedure Call)*
## Inconvenientes de RPC
- El procedimiento que realiza la llamada y el que la recibe, se localizan en máquinas diferentes
- Los procesos utilizan espacios de direcciones distintos
- Se debe realizar la transferencia de los resultados y parámetros (complicado si las máquinas son distintas)
## Operaciones básicas de RPC
- Su objetivo es la transparencia en la llamada a un procedimiento remoto de forma similar a un Local Procedure Call
- Funcionamiento de LPC
	- suma(a,b) en un ambinete LPC ¿Qué pasa?
	- El ligador pone la rutina en un programa objeto
	- Se ponen los parámetros en la pila
	- Mediante llamadas a sistema se realizan las operaciones
- RPC, logra la transparencia de una forma análoga a LPC
- El **proxy** se encarga de enviar, serializar y recibir mensajes
## Transparencia de RPC
- Si suma (a,b) es un procedimiento remoto entonces:
	- Se coloca una copia de suma, llamada resguardo del cliente (Client Stub). Para realizar la llamada a esta copia, se realiza de la forma habitual mediante un señalamiento al núcleo
	- A diferencia de la original, NO coloca los parámetros en registros ni le pide al núcleo que le proporcione los datos
	- *Empaca los parametros en un emsnaje* y le pide al núcelo que envíe el mensaje al servidor (serialización)
	- Después de llamar a *SEND*, el resguardo del cliente llama a *RECEIVE* y se bloquea hasta que regrese la respuesta
## Transferencia de parámetros
. Orivkenas eb ka reoresebtacupib de ebteris /cinokenebti a 1 t cinokenebti
- Problemas en la representación de enteros (complemento a 1 y complemento a 2)
- Enumeración de bytes ej. Intel 486 enumeran los bytes de derecha a izquierda (*little endian*), sun SPARC los enumeran en orden contrario (*big endian*)
- **Solución**
	- Diseñan un estándar de red o froma canónica apra representar los distintos tipo de datos y pedir a los emisores que realicen la conversión antes del ordenamiento de los parámetros
## Conexión dinámica (Binding)
- *¿Cómo los clientes se conectan o localizan el servidor?*
- Se pueden optar por varias soluciones:
	- Los servidores se registran en una entidad autoritativa central (CA), los clientes se conectan con la autoridad y ella hace una redirección de servicio (CORBA)
- El cliente conoce la máquina con la que debe contactar y proveer un "demonio" en esa máquian que conozca toda la información de los servidores (RPC y RMI)
## Semántica RPC en presencia de fallas
- El objetivo de RPC es ocultar la comunicación, al hacer que las llamadas a procedimientos remotos se parezcan a los locales
- Aunque este funcionamiento es transparente, RPC no se slava de errores, entre los que encontramos:
	- El cliente no puede localizar el servidor
		- Solución: Manejo de mensajes de error
	- Se pierde el mensaje de solicitud del cliente al servidor
		- Implementar cronómetros
	- Se pierde el mensaje de respuesta
		- Implementar cronómetros
	- El servidor falla antes de recibir una solicitud
		- Esperar a que se levante el servidor y volver a transmitir los datos
		- No hacer nada, no se notifica al cliente que el servidor se cae
	- El cliente falla después de enviar la solicitud
		- En el servidor, se activa una labor de cómputo y ninún padre espera el resultado. A esta labor se le llama **huérfano**
		- ¿Qué podemos hacer con los procesos huérfanos?
			- **Exterminación:** Antes de que el resguardo del cliente envié un mensaje RPC, crea una entrada en el HD indicando lo que va a hacer, en caso de falla cuando el cliente arranque se lee la entrada y el huérfano se elimina
			- **Reencarnación:**
			- **Reencarnación sutil:** Cuando llega un emnsaje de cierta épcoa
## Protocolos RPC
- Algunas implementaciones de RPC, solo permiten un protocolo de transporte, mientras que otras permiten la selección del mismo
- La mayoría de las implementaciones dicen que son independientes al protocolo, pero en realidad solo soportan 1 o 2 (TCP/IP y UDP)