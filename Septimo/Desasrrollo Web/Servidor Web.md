Un servidor se encarga de almacenar, alojar o "hostear" los archivos de un sitio web (documentos HTML, imágenes, CSS, JS, etc.).

Es un equipo de cómputo qque está conectado a internet y mantiene el intercambio de datos con otros dispositivos conectados a la red.
## Servidores populares
- Internet Information Services (IIS) 1993. Es un servidor web y conjunto de servicios diseñados para Microsoft Windows que fuer originalmente incluido en su versión NT
- Apache es un servidor básico de código abierto pensado en HTML y PHP
- Tomcat (1999). Una distribución de Apache conocida como Jakarta Tomcat y operar bajo el principio de los servlets (Java)
- Cherokee (2001). Es un servidor web multiplataforma escrito en C, disponible bajo licencia pública general de GNU, de software libre
- Nginx (2004). Un servidor web y Proxy desarrollado por la empresa homónima
## Alojamiento de archivos (hosting)

Un servidor debe almacenar o alojar los recursos de uno o varios sitios o sistemas web y servirlos cuando los clientes soliciten el acceso a los mismos.
Para garantizar la disponibilidad de acceso de los sistemas web alojados, el servidor debe cumplir con las siguientes características:
- Siempre debe estar funcionando
- Siempre tener conectividad a internet
- Conservar la misma IP todo el tiempo
Un servidor web puede configurarse como un servidor dedicado a alojar un solo sitio o sistema web, o puede configurarse para alojar múltiples sitios o sistemas web, cada uno con sus propios recursos, usuarios y políticas de acceso.
Al alojamieto de múltiples dominios se le conoce como Alojamiento Virtual y puede configurarse con tres esquemas:
- Alojamiento virtual basado en IPs
- Alojamiento virtual basado en puertos
- Alojamietno vitual basado en nombres de dominio
### Alojamiento virtual basado en IPs

Bajo este equema de lojamiento, es necesario que el equipo de cómputo que trabaje como servidor web tenga disponibles diferentes IPs, ua para cada servidor web virtual que se desee alojar.
Básicamente, el servidor debe tener varias tarjetas de red configuradas cada una con una IP independiente.
Este esquema de configuración también se suele utilizar bajo entornos de virtualización de servidores, donde cada servidor virtual (sin necesidad de ser específicamente web) tienen una dirección IP diferente aunque sea el mismo equipo físico.
Existen varias herramientas que permiten realizar la virtualización como:
- VMware
- Virtual Box
- Red Hat Virtualization
### Alojamiento virtual basado en puertos

Bajo este esquema lo que se hace es configurar el servidor para que tenga varias instancias, cad aintancia erstaría escuchando en un puerto diferente.
En este esquema no es necesario tener una IP diferente por cada sitio o sistema que se busqeue alojar ya que estarán diferenciados por la instancia del servidor que corra en un puerto diferente.
### Alojamiento virtual basado en puertos

Para la implementación de un alojamiento basado en puertos, se pueden optar pro varias estrategias, desde hacer la instalación de varios instancias de un mismo servidor en un solo equipo, asignándole un puerto diferente a cada uno, hasta implemetar MV o contenedores como Docker.