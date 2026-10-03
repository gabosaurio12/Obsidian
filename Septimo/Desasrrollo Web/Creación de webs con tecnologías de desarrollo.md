**Protocolo HTTP:**
- Protocolo utilizado para establecer la comunicación entre el cliente y el servidor
**Metodología de desarrollo web:**
- Metodología que permita establecer los lineamientos adecuados para la construcción del proyecto web
**HTML:**
- Lenguaje de marcado, basado en etiquetas que permite estructurar el contenido de la página web
## Protocolo HTTP

- **Hyper Text Transfer Protocol** (Protocolo de Transferencia de Hipertexto) es un protocolo de la capa de aplicación para transmitir documentos de hipermedia (HTML y multimedia)
- Podría decirse que es la piedra angular de la comunicación en cada transacción de la web
- El protocolo HTTP comenzó como un protocolo simple basado en texto
- HTTP se ha vuelto más complejo, pero el formato básico basado en texto no ha cambiado en los últimos 20 años
- Hay varias herramientas disponibles para enviar y recibir mensajes HTTP, a dichas herramientas generalmente se les conoce como Clientes HTTP o Agentes HTTP
## Protocolo HTTP y HTTPS

HTTPS (Hyper Text Transfer Protocol Secure -Protocolo de transferencia de hipertexto seguro-) es una evolución del protocolo HTTP estándar, cuyo principal objetivo es dotar de una capa adiciconal de seguridad al cifrar los mensajes (peticiones y respuestas) mediante un certificado de seguridad generado con el protocolo SSL (Secure Sockets Layer).

Al ser protocolos de la capa de aplicación ambos deben asociarse a un puerto que "escuche" las peticiones que pueden llegar al mismo. Se establecen como puertos por default los siguientes:
- HTTP -> Puerto 80
- HTTPS -> Puerto 443

El flujo básico de comunicación entre cliente y servidor se puede definir como:
1. Un cliente envía una petición a un servidor mediante una URL
2. El servidor determina si puede servir/procesar la petición con la información dada
3. El servidor retornará una respuesta que incluye:
	- Un código indicando éxito o fracaso
	- Una carga útil (payload) que contiene la información solicitada o detalles sobre el error
## URI

- URI (Unform Resource Identifier "Identificador Uniforme de Recursos)
- Es una secuencia de caracteres, de acuerdo a un formato estándar, que se usa para identificar los recursos de una red de forma unívoca
- Normalmente estos recursos son accesibles en una red o sistema y pueden ser recursos físicos (documentos html, pdf, png, jpg, etc.) o pueden ser recursos abstractos (ruta de un método de un servicio web, una pretty url o alias que encapsula un recurso)
## URI y URL

- Los URI y URL constan de las siguientes partes:
	- **Protocolo:** Identifica el protocolo de acceso al recurso, por ejemplo http:, mailto:, ftp:, etc.
	- **Autoridad o host:** Elemento jerárquico que identifica la autoridad de nombres de dominio (por ejemplo //www.example.com)
	- **Puerto (opcional):** PUerto de escucha asignado de lado del servidor entre el 0 y el 65,535, el puerto solo especifica si se tiene asignado un puerto diferente al default para HTTP y HTTPS (443)
	- **Ruta (opcional):** Información usualmente organizada en forma jerárquica, que identifica al recurso en el ámbito del esquema URI y la autoridad de nombres (e.g. /domains/example)
	- **Consulta (opcional):** Información con estructura no jerárquica (usualmente pares "clave=valor") que identifica al recurso en el ámbito del esquema URI y la autoridad de nombres. El comienzo de este componente se indica mediante el caracter '?'
	- **Fragmento (opcional) (exclusivo para las URI):** Permite identificar una parte del recurso principal, o vista de una representación del mismo. El comienzo de este componente se indica mediante el carácter '#'. Es una secuencia de caracteres, de acuerdo a un formato estándar, que se se usa para identificar los recursos de una red de forma unívoca.
### Ejemplo 1

> https://uv.mx

- Protocolo: https
- Host: uv.mx
- Puerto: 443
- Ruta:
- Consulta:
- Fragmento:

 **Este ejemplo se podría considerar una URL**
### Ejemplo 2

> https://pokeapi.co:8443/api/v2/pokemon?offset=24&limit=50

- Protocolo: https
- Host: pokeapi.co
- Puerto: 8443
- Ruta: /api/v2/pokemon
- Consulta: offset=24&limit=50
- Fragmento:

**Este ejemplo podriá considerarse una URL**
### Ejemplo 3

> https://es.wikipedia.org/wiki/Tecnología#Servicios

- Protocolo: https
- Host: es.wikipedia.org
- Puerto: 8443
- Ruta: /wiki/Tecnología
- Consulta:
- Fragmento: '#Servicios'

**Este ejemplo podriá considerarse una URI**
## Diferencias entre URI y URL

Normalmente podemos confundir URL con URI aunque a nivel funcional sirven para los mismos propósitos localizar o identificar un recuros en la web, la diferencia principal radica en el uso de la sección **fragmento**, la cual solo se encuentra disponible en una URI
## Peticiones HTTP

Las peticiones son el punto de partida para establecer la comunicación entre cliente y servidor, las peticiones están formadas por los siguientes elementos:
- **Línea Inicial:**
	- **Método HTTP:** INforma al servidor el tipo de intereacción que el cliente desea solicitar
	- **Ruta:** Indica la ruta donde se encuentra el recurso
	- **Protocolo y versión:** Indica que protocolo se utilizará (HTTP o HTTPS) así como la versión del mismo. La más común es la 1.1
- **Cabeceras**
- **Cuerpo**
## Métodos HTTP

- **GET:** Devuelve el recurso identificado en la URL pedida
- **HEAD:** Funciona como el GET, pero sin que el servidor devuelva el cuerop del mensaje. Es decir, solo se devuelve la información de cabecera
- **POST:** Indica al servidor que se prepare para recibir información del cliente. Suele usarse para registrar **nuevos recursos**
- **PUT:** Envía el recurso identificado en la URL desde el cliente hacia el servidor. Suele usarse para **actualizar recursos** existentes
- **PATH:** Envía el recurso identificado en la URL desde el cliente hacia el servidor. Suele usarse para actualizar recursos existentes de **forma parcial**
- **DELETE:** Solciita al servidor que borre el recurso identificado con el URL
- **OPTIONS:** Pide información sobre las características de comunicación proporcionadas por el servidor. Le permite al cliente neogociar los parámetros de comunicación
- **TRACE:** Inicia un ciclo de mensajes de petición. Se usa para depuración y permite al cliente ver lo que el servidor recibe en el otro lado
- **CONNECT:** Este método se reserva para uso con proxys. Permitirá que un proxy pueda dinámicamente convertirse en un túnerl. Por ejemplo para comunicaciones con SSL
## Cabeceras HTTP

Las cabeceras (headers) HTTP permiten al cliente y al servidor enviar información adicional junto a una petición o respuesta. Una cabecera de petición está compuesta por:
**Nombre** (no senisble a las mayúsculas) : **Valor** (sin saltos de línea), es posible agregar varios valores a una cabecera, separándolos por el caracter *,* o *;*

*Los espacios en blanco a la izquierda del valor son ignorados*
*La cabecera completa, incluido el valor, ha de ser formada en una única línea y puede ser bastante larga.*

Ejemplo:
**Host:** www.ejemplo.com
**Content-Length:** 345
**Connection:** keep-alive

Algunas de las cabeceras HTTP más importantes:

**Host:** Especifica el nombre de dominio del servidor (para alojamiento virtual) y (opcionalmente) el número de puerto TCP en el que está escuchando el servidor.

> Disponible en la versión de HTTP 1.1 en adelante, en la versión de HTTP 1.0 esta cabecera no existe

**User-Agent:** Contiene un string característico que será examinado por el protocolo de red para identificar el tipo de aplicación, SO, proveedor de software o versión del software del agente de software que realiza la petición.

**Connection:** Controla si la conexión a la red se mantiene activa después de que la transacción en curso haya finalizado, valores posibles (Keep-Alive o Close).

### Cabeceras más importantes

**Keep-Alive:** En caso de utilizar la cabecera Connection con valor keep-alive, es necesario indicar el tiempo en segundos durante el cual una conexión persistente debe permanecer abierta, ejemplo: Keep-Alive: timeout=5

**Content-Type:** indica el tipo de contenido que contendrá el cuerpo de la petición. Paraformar la cavecera se utilizan 3 parámentros (MIMI Type, Charset, Boundary). Por ejemplo:

> Content-Type: text/html; charset=utf-8
> Content Type: mulitpart/form-data; boundary=something

**Content-Length:** Indica el tamaño del cuerpo de la petición, expresado en bytes

**Accept:** Informa al servidor sobre los diferentes tipos de datos que pueden enviarse de vuelta. La especificación del tipo debe ser mediante MIME Type. Por ejemplo:

> Accept: text/html
> Accept: image/*

**Accept-Charset:** Informa al servidor el tipo de set de caracteres que el cliente puede procesar en la respuesta. Por ejemplo:

> Accept-Charset: utf-8

**Server:** Contiene la información acerca del software usado por el servidor original encargado de procesar la solicitud. Por ejemplo:

> Server: Apache/2.4.1 (Unix)

- Se recomienda quitarla o rellenarla de información no muy específica ya que se ha llegado a utilizar para realizar exploits

**Access-Control-Allow-Origin:** Es una cabecera agregada por el servidor que indica si los recursos de la respuesta peuden ser compartidos con el origen dado. Por ejemplo:

> Access-Control-Allow-Origin: * (Cualquier origen puede procesar la respuesta)
> Access-Control-Allow-Origin: https://mipagina.com.mx (solo las peticiones que tengan el origien dado pueden procesar la respuesta, en estos casos se dispara una excepción de la política CORS( Cross-Origin Resource Sharing))

**Access-Control-Allow-Methods:** Es una cabecera agregada por el servidor que inidca qué tipo de métodos son aceptados por el servidor. Por ejemplo:

> Access-Control-Allow-Methods: POST, GET, OPTIONS

En estos casos de que se haga una petición con un método no soportado se dispara una excepción de la política CORS.

Las cabeceras pueden ser agrupadas de acuerdo a sus contextos:

**Cabeceras generales (General Headers):** afectan al mensaje de forma integral (petición y respuesta)

**Cabeceras de petición (Request Headers):** afectan directamente a la petición