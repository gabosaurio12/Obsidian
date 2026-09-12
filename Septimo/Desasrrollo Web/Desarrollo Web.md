Desde el surgimiento de la web en los 90s, hasta nuestros días, han surgido una gran cantidad de tecnologías, frameworks, herramientas y estilos arquitectónicos para desarrollar una aplicación web.

Es fundamental conocer que actualmente existen 2 enfoques con los que se puede desarrollar un proyecto:
- **Creación de webs con sistmeas gestores de contenido** (CMS - Content Management System)
- **Creación de webs con tecnologías de desarrollo**
## Creación de webs con sistemas gestores de contenido

Las páginas web son en escencia sistemas web cuya principal funcionalidad es la publicación de contenido: blogs, páginas personales, páginas de empresas, organismos públicos, tiendas en línea, etc.

Para desarrollar este tipo de sistemas lo más común es utilizar herramientas como CMS. Una de las principales ventajas que ofrecen es el tiempo de desarrollo, el nivel de conocimientos técnicos es básico y la curva de aprendizaje de la mayoría de los CMSs es poco prolongada.
### Desventajas

- Limites en la personalización del sistema o página
	- Nos dan herramientas, plugins, módulos para construir todo, pero si hay algo específico que necesitamos y no hay un plugin o algo así hay que construirlo o cambiar de tecnología
- Los sitios están en constante análisis para hackeos o vulnerabilidades, por lo que se actualizan constantemente
## Creación de webs con tecnologías de desarrollo

- Metodologías de desarrollo
	- Para todo proceso de construcci´no de una solución se recomienda adoptar una metodología formal que permita guiar el proceso desde el aálisis del contexto, el diseño de los elementos involucrados, la codificación y pruebas del sistema a desarrollar
- En el ámbito de desarrollo web, existen metodologías específicas para desarrollar soluciones de forma eficiente y cuidando aspectos de calidad en este tipo de sistemas
- **Arquitectura de sistemas web:**
	- Si bien es cirto que todo sistema web utiliza como arquitectura base Cliente - Servidor, dependiendo del tipo de que tan dinámico necesite ser el sistema se pueden emplear variantes de dicha arquitectura. Dependiendo de la arquitectura utilizada se pueden utilizar diferentes tecnologías.
- **Tecnologías del lado del cliente:**
	- Tecnologías que permiten crear interfaces de usuario, programar cierto comportamiento y establecer la comunicació con el servidor. Los princiales son : HTML, CSS y JS
	- Comúnmente podemos encontrar lenguajes de programación robustos del lado del servidor como C#, Java, Ruby, entre otros aunque también podemos trabajar con lenguajes más "ligeros" como PHP, Python y JS
- **Bases de datos:**
	- La gran mayoría de los sistemas web necesitan guardar 
		1. Oracle
		2. MySQL
		3. Micrososft SQL Server
		4. PostgresSQL
		5. MongoDB
## Arquitecturas de sistemas web

La arquitectura básica de un sistema web es la arquitectura Cliente - Servidor, formada por los siguientes elementos:
- Protocolo HTTP: Es el protocolo basado en TCP/IP que se utiliza para establecer la comunicación entre el cliente y el servidor
- HTML: Es el lenguaje básico de los documentos en la web. Es un lenguaje de marcado textual basado en etiquetas que permite estructurar el contenido de la página
La mayoría de las aplicaciones web actuales son dinámicas tanto en cliente como en servidor, dependiendo del uso que se le de a la programación en JavaScript del lado del cliente, las aplicaciones se pueden dividir en tres tipos:
- JavaScript para efectos gráficos
- JavaScript con peticiones en segundo plano (AJAX)
- Single Page Application con API REST
- JavaScript se puede usar para no tener que recargar completamente la página completa al pulsar un link o un botón. Actualización parcial de contenido.
	- También se puede hacer una petición al servidor web en segundo plano (oculta al usuario) cuando se dispare algún evento (clic en algún lugar del sistema, pasar el mouse por un área determinada, etc.). Y cuando llega el resultado de la petición, actualiza aquellas partes de la página necesarias.
	- **A estea técnica se le conoce como AJAC (Asynchronous JavaScript and XML)**
### Single Page Application con API REST
La integración de AJAX en un sistema web, se puede llevar al extremo y que todo el contenido dinámico se cargue únicamente con JS.
Este tipo de sistemas web, se les conoce como Single Page Application, o aplicaciones de una sola página, ya que al ser dinámico casi todo el contenido, el usuario solo ve una página o vista web donde se actualiza la información que con base en sus acciones.
Generalmente el desarrollo de una SPA, va de la mano con el consumo de una o varias APIs para servir todos los datos dinámicos de la misma.
Para crear un API de servicios, se pueden utilizar varios protocolos, tecnologías y metodologías, sin embargo, las más comunes en la actualidad son SOAP (Simple Object Access Protocol) y REST (REpresentational State Transfer).

## Blog personal - Configuración vhost

En tu servidor apache, configura el siguiente vhost

**blogpersonal.com**

Recuerda los pasos para la configuración:
1. Configuración de archivo httpd-vhosts.conf
2. Creación de carpeta de recursos (debe tener permisos 7)
3. Configuración de tabla DNS en archivo hosts
### Configuración de base de datos

En tu servidor MySQL /MariaDB configura una nueva base de datos con las siguientes característicias:
- Nombre de la base: wp_blogpersonal
- Usuario de acceso: admin_blogpersonal
- Contraseña de acceso: Admin12345
*Asegúrate de asignarle los permisos necesarios al nuevo usuario para que tenga control total sobre la base de datos creada.*
