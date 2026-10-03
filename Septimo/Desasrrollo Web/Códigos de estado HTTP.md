**Gabriel Antonio González López**
**30 de septiembre del 2026**

---

## Códigos de estado HTTP

| Código  | Nombre                                                            | Clase | ¿En qué circunstancia o situación el servidor devolvería este código?                                                                                                                                                                         |
| ------- | ----------------------------------------------------------------- | ----- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **100** | Continue (Continuar)                                              | 1xx   | El cliente envió el encabezado `Expect: 100-continue` y el servidor está dispuesto a recibir el cuerpo de la petición. Es una respuesta intermedia que evita que el cliente envíe datos pesados si la petición acaba siendo rechazada.        |
| **101** | Switching Protocols (Cambio de protocolo)                         | 1xx   | El cliente pidió migrar a otro protocolo con el encabezado `Upgrade` y el servidor acepta el cambio. Desde ese momento la comunicación ya no es HTTP.                                                                                         |
| **102** | Processing (Procesando)                                           | 1xx   | El servidor recibió la petición pero todavía no tiene un resultado final; la procesa en segundo plano y mantiene la conexión abierta para que el cliente no la reintente. Definido en la RFC 2518 (WebDAV) y actualmente obsoleto.            |
| **103** | Early Hints (Pistas tempranas)                                    | 1xx   | El servidor envía pistas **antes** de la respuesta final mediante encabezados `Link`, para que el navegador empiece a precargar CSS, scripts o fuentes mientras se prepara la respuesta principal.                                            |
| **200** | OK (Correcto)                                                     | 2xx   | La petición se procesó correctamente y el cuerpo de la respuesta contiene el resultado esperado. En `GET` incluye el recurso; en `HEAD` solo los encabezados; en `POST`/`PUT`, el resultado de la acción.                                     |
| **201** | Created (Creado)                                                  | 2xx   | La petición fue exitosa y además **se creó un recurso nuevo**. Es la respuesta habitual tras un `POST` (alta de usuario, registro, artículo) y suele acompañarse del encabezado `Location` con la URL del recurso creado.                     |
| **202** | Accepted (Aceptado)                                               | 2xx   | La petición fue recibida y es válida, pero **aún no se ha ejecutado**. Se usa cuando otro proceso, una cola o un worker se encargará de procesar la tarea en segundo plano.                                                                   |
| **203** | Non-Authoritative Information (Información no autoritativa)       | 2xx   | El cuerpo se devuelve correctamente, pero los metadatos fueron alterados u obtenidos de una copia local, espejo o caché de un tercero, por lo que no coinciden exactamente con los del servidor de origen.                                    |
| **204** | No Content (Sin contenido)                                        | 2xx   | La operación fue exitosa **pero no hay nada que devolver**: la respuesta va sin cuerpo. Típico en `DELETE` o en actualizaciones que solo necesitan refrescar la caché de metadatos del cliente.                                               |
| **205** | Reset Content (Restablecer contenido)                             | 2xx   | El servidor pide explícitamente al navegador que **restablezca la vista** del documento que originó la petición (por ejemplo, tras enviar un formulario: limpia los valores de los campos).                                                   |
| **206** | Partial Content (Contenido parcial)                               | 2xx   | El cliente pidió **solo un fragmento** del recurso mediante el encabezado `Range` (carga reanudable, streaming de vídeo, descarga de un archivo grande) y el servidor entrega ese segmento con `Content-Range`.                               |
| **300** | Multiple Choices (Múltiples opciones)                             | 3xx   | El recurso tiene **varias representaciones posibles** y no hay forma estandarizada de elegir una automáticamente. Se usa en la negociación de contenido dirigida por el agente; es raro en la práctica.                                       |
| **301** | Moved Permanently (Movido permanentemente)                        | 3xx   | La URL del recurso cambió **de forma definitiva**. El servidor envía la nueva URL en `Location` y el cliente (y los buscadores) memoriza la redirección para futuros accesos.                                                                 |
| **302** | Found (Encontrado)                                                | 3xx   | El recurso está **temporalmente** en otra URL. El cliente debe seguir la redirección ahora, pero en futuras peticiones volverá a usar la URL original, ya que la ubicación puede cambiar de nuevo.                                            |
| **303** | See Other (Ver otro)                                              | 3xx   | Tras completar la acción (típicamente un `POST` de un formulario), el servidor manda al cliente a **otra URL y lo obliga a usar `GET`**. Se usa para evitar que el navegador reenvíe el formulario al pulsar «Actualizar».                    |
| **304** | Not Modified (No modificado)                                      | 3xx   | El cliente ya tiene una copia en caché e incluye `If-Modified-Since` o `If-None-Match`; el servidor comprueba que el recurso **no ha cambiado**, así que responde sin cuerpo para ahorrar transferencia.                                      |
| **307** | Temporary Redirect (Redirección temporal)                         | 3xx   | Como el `302`, pero el cliente **debe conservar el método y el cuerpo original**. Si la petición era `POST`, la redirección se hace con `POST`; útil para mover un endpoint temporalmente sin romper APIs.                                    |
| **308** | Permanent Redirect (Redirección permanente)                       | 3xx   | Redirección **definitiva** que, como el `301`, obliga al cliente a memorizar la nueva URL, pero **sin permitir el cambio de método**: un `POST` sigue siendo `POST` en el destino.                                                            |
| **400** | Bad Request (Petición incorrecta)                                 | 4xx   | El servidor no puede o no quiere procesar la petición por un error del cliente: sintaxis mal formada, JSON inválido, parámetros corruptos o una petición que viola la gramática del protocolo.                                                |
| **401** | Unauthorized (No autorizado)                                      | 4xx   | El servidor requiere **autenticación** y no la ha recibido, o las credenciales son inválidas. Semánticamente significa «no autenticado». Suele enviar `WWW-Authenticate` indicando cómo autenticarse.                                         |
| **402** | Payment Required (Pago requerido)                                 | 4xx   | Se creó para sistemas de pago digital, pero **no existe un estándar cerrado**: cada proveedor lo usa con su propia semántica (cuota vencida, suscripción expirada, saldo insuficiente).                                                       |
| **403** | Forbidden (Prohibido)                                             | 4xx   | El servidor **sí sabe quién es el cliente** y entiende la petición, pero se niega a darle acceso por permisos insuficientes, rol inadecuado o reglas de negocio. Autenticarse otra vez no ayudará.                                            |
| **404** | Not Found (No encontrado)                                         | 4xx   | El servidor no encuentra el recurso solicitado: la URL no existe o el registro fue borrado. También se usa para **ocultar deliberadamente** la existencia de un recurso a un cliente no autorizado.                                           |
| **405** | Method Not Allowed (Método no permitido)                          | 4xx   | El servidor reconoce el verbo HTTP (por ejemplo `POST` o `DELETE`) pero **el recurso concreto no lo admite**. El encabezado `Allow` indica qué métodos sí son válidos.                                                                        |
| **406** | Not Acceptable (No aceptable)                                     | 4xx   | Tras negociar el contenido, el servidor **no puede ofrecer ningún formato** que cumpla lo pedido en los encabezados `Accept`, `Accept-Encoding` o `Accept-Language` del cliente.                                                              |
| **407** | Proxy Authentication Required (Autenticación de proxy requerida)  | 4xx   | El que exige credenciales no es el servidor final sino el **proxy intermedio**. Es el equivalente del `401`, pero generado por el proxy.                                                                                                      |
| **408** | Request Timeout (Tiempo de espera agotado)                        | 4xx   | El servidor cerró la conexión porque el cliente **tardó demasiado en completar** el envío de la petición (cero bytes de datos durante el tiempo de espera). También se usa para terminar conexiones inactivas.                                |
| **409** | Conflict (Conflicto)                                              | 4xx   | La petición es válida pero **choca con el estado actual del servidor**: por ejemplo, crear un recurso que ya existe, o borrar algo que se está eliminando.                                                                                    |
| **410** | Gone (Ido)                                                        | 4xx   | El recurso fue **eliminado de forma permanente y sin URL de reemplazo**. Se diseñó para contenido con fecha de caducidad. El cliente debería borrar su caché y sus enlaces; los buscadores lo respetan más que con un `404`.                  |
| **411** | Length Required (Longitud requerida)                              | 4xx   | El servidor rechaza la petición porque **falta el encabezado `Content-Length`** y necesita conocer el tamaño del cuerpo para procesarla (habitual en `PUT` y `POST`).                                                                         |
| **412** | Precondition Failed (Precondición fallida)                        | 4xx   | El cliente envió una **petición condicional** (`If-Match`, `If-Unmodified-Since`) cuya precondición el servidor no cumple: el recurso cambió desde la última lectura.                                                                         |
| **413** | Payload Too Large (Carga útil demasiado grande)                   | 4xx   | El cuerpo de la petición supera el **límite de tamaño configurado** por el servidor (por ejemplo, el máximo de subida de archivos). Puede incluir el encabezado `Retry-After`.                                                                |
| **414** | URI Too Long (URL demasiado larga)                                | 4xx   | La URL solicitada es **más larga de lo que el servidor está dispuesto a interpretar**, normalmente por ser un `GET` con demasiados parámetros o datos incrustados.                                                                            |
| **415** | Unsupported Media Type (Tipo de medio no soportado)               | 4xx   | El formato del cuerpo enviado **no está soportado**. Por ejemplo, un `POST` con `Content-Type: application/xml` contra una API que solo acepta `application/json`.                                                                            |
| **416** | Range Not Satisfiable (Rango no satisfacible)                     | 4xx   | El cliente pidió un fragmento con `Range` que **no existe**: por ejemplo, un rango de bytes que empieza más allá del tamaño total del archivo, o un recurso que no admite rangos.                                                             |
| **417** | Expectation Failed (Expectativa fallida)                          | 4xx   | La expectativa declarada en el encabezado `Expect` del cliente **no puede cumplirse**. Aparece cuando se envía `Expect: 100-continue` y el servidor rechaza la petición antes de recibir el cuerpo.                                           |
| **418** | I'm a teapot (Soy una tetera)                                     | 4xx   | **Es una broma del protocolo** (RFC 2324, April Fools' Day): el servidor se niega a preparar café con una tetera. En la práctica se usa como señal de "no implementado" o como joke en APIs.                                                  |
| **422** | Unprocessable Entity (Entidad no procesable)                      | 4xx   | La petición está **bien formada sintácticamente** pero es semánticamente incorrecta: el JSON es válido pero falta un campo obligatorio o falla una validación de negocio (email inválido, saldo insuficiente).                                |
| **425** | Too Early (Demasiado pronto)                                      | 4xx   | El cliente está **reintentando una solicitud TLS** sobre un servidor que aún no ha olvidado la clave de la sesión, y el servidor rehúsa procesarla por riesgo de reenvío.                                                                     |
| **426** | Upgrade Required (Se requiere actualización)                      | 4xx   | El servidor se niega a atender la petición con el protocolo actual y **exige que el cliente se actualice** (por ejemplo, pasar a una versión superior de TLS). Indica el protocolo requerido en el encabezado `Upgrade`.                      |
| **428** | Precondition Required (Precondición requerida)                    | 4xx   | El servidor obliga a que la petición sea **condicional** (incluir `If-Match` o `If-Unmodified-Since`). Existe para evitar el problema de la «actualización perdida»: un cliente que sobrescribe cambios hechos por terceros mientras editaba. |
| **429** | Too Many Requests (Demasiadas solicitudes)                        | 4xx   | El cliente ha superado el **límite de peticiones** permitido por unidad de tiempo (*rate limiting*). Suele acompañarse del encabezado `Retry-After` indicando cuándo reintentar.                                                              |
| **431** | Request Header Fields Too Large (Cabeceras demasiado grandes)     | 4xx   | Las **cabeceras de la petición son demasiado grandes** (cookies gigantes, demasiados tokens, token base64 muy largo). El cliente debe reducir el tamaño de las cabeceras antes de reintentar.                                                 |
| **451** | Unavailable For Legal Reasons (No disponible por razones legales) | 4xx   | El recurso solicitado **no puede servirse por motivos legales**: bloqueo regional, copyright o una orden judicial. Suele acompañarse del encabezado `Link` con la explicación.                                                                |
| **500** | Internal Server Error (Error interno del servidor)                | 5xx   | El servidor encontró una **situación inesperada** que no sabe manejar: una excepción no controlada, un fallo de conexión a la base de datos o un bug. Es el error genérico.                                                                   |
| **501** | Not Implemented (No implementado)                                 | 5xx   | El servidor **entiende el método HTTP pero no lo soporta**. Solo tiene obligación de admitir `GET` y `HEAD`; cualquier otro verbo puede devolver este código.                                                                                 |
| **502** | Bad Gateway (Puerta de enlace incorrecta)                         | 5xx   | Un servidor que actúa como **gateway o proxy** recibió una respuesta inválida o inesperada del servidor de origen al intentar atender la petición.                                                                                            |
| **503** | Service Unavailable (Servicio no disponible)                      | 5xx   | El servidor **no está listo** para atender peticiones: está en mantenimiento, saturado o tiene una dependencia crítica caída. Es temporal, suele enviar `Retry-After` y no debería cachearse.                                                 |
| **504** | Gateway Timeout (Tiempo de espera de la puerta de enlace agotado) | 5xx   | El gateway o proxy **no recibió respuesta del servidor de origen a tiempo**. El cliente no puede distinguir si el origen está lento o completamente caído.                                                                                    |
| **505** | HTTP Version Not Supported (Versión de HTTP no soportada)         | 5xx   | La **versión del protocolo HTTP** de la petición no es compatible con el servidor. Por ejemplo, un cliente que envía `HTTP/2.0` contra un servidor que solo habla HTTP/1.1.                                                                   |
| **506** | Variant Also Negotiates (La variante también negocia)             | 5xx   | **Error de configuración interna**: durante la negociación de contenido, la variante elegida está configurada para negociar por sí misma, generando una referencia circular al construir la respuesta.                                        |
| **507** | Insufficient Storage (Almacenamiento insuficiente)                | 5xx   | El servidor **no tiene espacio** para guardar la representación necesaria para completar la petición (cuota de disco llena). Definido en WebDAV (RFC 4918).                                                                                   |
| **508** | Loop Detected (Bucle detectado)                                   | 5xx   | El servidor detectó un **bucle infinito** al procesar la petición, típicamente por un enlace simbólico que apunta a sí mismo dentro de una estructura WebDAV.                                                                                 |
| **510** | Not Extended (No extendido)                                       | 5xx   | El cliente declara en su petición una **extensión HTTP** (RFC 2774) que debería usarse para procesarla, pero el servidor **no soporta esa extensión**.                                                                                        |
| **511** | Network Authentication Required (Autenticación de red requerida)  | 5xx   | El cliente necesita **autenticarse para tener acceso a la red**. Lo usan los portales cautivos de redes WiFi de hoteles, aeropuertos y redes corporativas para forzar el inicio de sesión antes de navegar.                                   |

---

## Resumen por clase

| Prefijo | Clase | ¿Quién tiene el problema? | Acción típica del cliente |
|---|---|---|---|
| **1xx** | Respuesta provisional | — | Esperar a la respuesta final |
| **2xx** | Éxito | — | Procesar el resultado |
| **3xx** | Redirección | — | Seguir el encabezado `Location` |
| **4xx** | Error del cliente | El cliente | Corregir la petición y reintentar |
| **5xx** | Error del servidor | El servidor | Esperar y reintentar más tarde |

---

## Diferencias entre los códigos de redirección

| Código | ¿Cambio permanente? | ¿Puede cambiar el método HTTP? |
|---|---|---|
| **301** | Sí | Sí (puede convertirse en `GET`) |
| **302** | No | Sí (puede convertirse en `GET`) |
| **303** | No | Sí, **siempre** a `GET` |
| **307** | No | **No**, conserva el método original |
| **308** | Sí | **No**, conserva el método original |

---

## Códigos que suelen confundirse entre sí

| Par | Diferencia clave |
|---|---|
| **401** vs **403** | `401` = «no sé quién eres, autentícate». `403` = «sé quién eres, pero no tienes permiso». |
| **403** vs **404** | `403` revela que el recurso existe. `404` se usa para ocultarlo a usuarios no autorizados. |
| **400** vs **422** | `400` = la petición está mal formada (JSON roto). `422` = está bien formada pero los datos no tienen sentido. |
| **404** vs **410** | `410` significa «eliminado para siempre»: es una señal más fuerte para que navegadores y buscadores borren la caché. |
| **500** vs **502** | `500` = el fallo está en el propio servidor. `502` = el servidor funciona, pero el origen al que hace de proxy falló. |
| **503** vs **504** | `503` = el servicio está caído o saturado. `504` = el servicio vive, pero tarda demasiado en responder. |

---

> **Notas sobre la lista:** la especificación base es la **RFC 9110**. Los códigos más recientes (103, 425, 451, 506 y 511) están definidos en RFCs complementarias, y el 418 es una broma intencional de la RFC 2324.
