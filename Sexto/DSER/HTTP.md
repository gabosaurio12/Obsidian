- Es un protocolo de la **capa de aplicación** para _transmitir documentos hipermedia_.
- Base para **solucionar problemas de integracion** y diseño de los sistemas en red y sus componentes.
- Es una de las tecnologías centrales de la web
- Los navegadores realizan múltiples solicitudes HTTP para cargar una página web
- Comenzó como un protocolo simple basado en texto
- Se ha vuelto más complejo, pero el formato básico basado en texto no ha cambiado en los últimos 20 años
- Cifra los mensajes HTTP estándar
- Es un protocolo cliente-servidor
	- Recibe una solicitud (GET /project/1234 HTTP/1.1)
	- Recibe un código de respuesta (HTTP/1.1 200 OK)
	- Carga útil (payload)
		{
			"id": "1234",
			"projectName": "My project"
		}
## Elementos que lo componen
- El **U**niform **R**esource **L**ocator (URL) donde se envía la solicitud
- El método HTTP que informa al servidor cómo el cliente desea interactual con el recurso
- Los encabezados y cuerpo de la solicitud y respuesta
- Un código de respuesta que indica si la solicitud se procesó correctamente o si se encontró un error
### Uniform Resource Locator
https://pokeapi.co:443/api/v2/pokemon?offset=24&limit=50
- https -> protocolo
- pokeapi.co -> hostname
- 443 -> puerto
- /api/v2/pokemon -> ruta
- ?offset=24&limit=50 -> cadena de consulta

**Encabezado**: Da detalles del cliente y sobre la solicitud
- Se compone de campos en formato de nombre:valor
- Los encabezados comunes son:
	- Accept: Informa al servidor qué tipo de contendio soporta el cliente
		- image/gif, image/jpeg, * / *
**Content-type**: Informa al servidor del tipo de contenido del cuerpo del mensaje de la solicitud
**User-Agent**: Cadena de formato libre que indica el tipo de cliente HTTP que realiza la solicitud
- Normalmente indica un tipo y versión de navegador, una biblioteca o herramienta de línea de comandos
**Accept Encoding**: Informa al servidor qué soporte de compresión procesa el cliente.
- Permite al servidor reducir el tamaño de la respuesta. Ej. gzip
**Cuerpo del mensaje**: Provee detalles al servidor cuando se envían datos.
- Pueden ser legibles por el humano o binarios
- Para algunas solicitudes puede estar vacío
### Respuesta HTTP
- Una vez que se recibe una solicitud el servidor la procesa y envía la respuesta
- Está compuesta por (**PE**):
	Código de respuesta - Encabezado - Cuerpo
### Encabezado
- Le dice al cliente detalles sobre el resultado de la solicitud
- Se compone de campos de encabezado en formato _nombre:valor_
- Los encabezados comunes:
	- **Date:** Fecha de la respuesta
	- **Content-Location:** La URL completa de la respuesta. Útil si la solicitud resulta en redirecciones que pudieran requerir que el cliente actualice su URL para el recurso
	- **Content-Length:** Longitud en bytes del cuerpo del mensaje de respuesta
	- **Content-Type:** Informa al cliente el tipo de contenido del cuerpo del mesnaje
	- **Server:** 
	- El cuerpo del mesnaje de respuesta proporciona el contendio al cliente
	- Puede ser una página HTML, una imagen o datos en XML, JSOn o CSV, como se inidica en el encabezado de respuesta **Content-Type**
	- 