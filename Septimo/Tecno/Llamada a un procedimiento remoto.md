
- El modelo cliente servidor es una forma conveniente de estructurar los programas
- El modelo cliente servidor adolece de algunos problemas:
	- El programador se tiene que preocupar por la transferencia de los mensajes
	- Qué pasa si debo llamar un método en una máquina remota?
- En 1984 Birrel y Nelson se le conoce como Llamada a un procedimiento remoto o RPC (Remote Procedure Call)

## Inconvenientes

- El procedimiento que realiza la llamada y el que la recibe, se localizan en máquinas diferentes
- Los procesos utilizan espacios de direcciones distintos
- Se debe de realizar la transferencia de los resultados y parámetros (complicado si las máquinas son distintas)

## Operaciones básicas

- Objetivo de RPC: Transparencia en la llamada a un procedimiento remoto de forma similar a un LPC (Local Procedure Call)

> El procedimiento que hace la llamada no debe enterarse

- **Transparencia:**
	- Si *suma(a,b)* es un RP entonces
		- Se coloca una copia de *suma*, llamada *resguardo del cliente (Client Stub)*. Para realizar la llamada a esta copia, se realiza de la forma habitual mediante un señalamiento al núcleo
		- A diferencia de la original, no coloca los parámetros en registros ni le pide al núcleo que le proporcione los datos
		- Empaca los parámetros en un mensaje y le pide al núclo que envíe el mensaje al servidor
		- Después de llamar a SEND, el resguardo del cliente llama a RECEIVE y se bloquea hasta que regrese la respuesta

## Transferencia de parámetros

- La función del resguardo del cliente es tomar sus parámetros, empacarlos y enviarlos al resguardo del servidor
- Al empacamiento de parámetros en un mensaje se llama ordenamiento de parámetros

## Conexión dinámica (Binding)

- Cómo los clintes se conectan o localizan el servidor=
- Se pueden optar por varias soluciones:
	- Los servidores se registran en una entidad autoritativa central (CA)
- El cliente conozca la máquina con la que debe conectar y proveer un "demonio" en esa máquina que conozca toda la información de los servidores (técnica de RPC y RMI)
- Java tiene RMI para cómputo distribuido

## Semántica RPC en presencia de fallas

- El objetivo de RPC es ocultar la comunicación, al hacer que las llamadas a procedimientos remotos se parezcan a las locales
- Aunque este funcionamiento es transparente, RPC no se salva de errores entre los que encontramos:
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
	- En el servidor, se activa una labor de cómputo y ningún padre espera el resultado. A esta labor se le llama huérfano
	- Qué podemos hacer con los procesos huérfanos?
		- **Exterminación:** Antes de que el stub del cliente en envíe un mensaje RPC, crea una entrada en el HD indicando lo que va a hacer, en caso de falla cuando el cliente arranque, se lee la entrad ay el huérfano se elimina
		- **Reencarnación:** se divide el tiempo en épocas numeradas de forma secuencial en caso de falla, cuando se levanta el cliente marca el inicio de una nueva época, por lo que los cómputos remotos se eliminan