- Sistemas Operativos
- Middlewares
	- Comunicación
		- Alto
			- GRPC
			- HTTP
		- Bajo
			- TCP/IP
			- TCP/UDP
## Principios de las Redes
- Protocolos en Capas
	- Estructura jerárquica para la comunicación
- Enrutamiento
	- Determinación de la mejor ruta para los datos
- Conmutación de Paquetes
	- División de datos en paquetes para transmisión
- Transmisión de Datos
	- Proceso de envío de datos a través de la red
### Técnicas de interconexión
- Permiten integrar redes heterogéneas
	- Se utilizan casi unversalmente universalmente en sistemas distribuidos.
	- Los esquemas de direccionamiento y enrutamiento utilizados en internet han resisitdo el impacto de su enorme crecimiento.
	- Se revisan para adaptarse al crecimiento y para cumplir con los nuevos requisitos de movilidad, seguridad y calidad de servicio.
- Internet es el principal ejemplo.
## Sistemas en red
- Se debe considerar:
	- Arquitectura de red
		- **Protocolos de comunicación de datos:** Las reglas que rigen la transmisión de datos
		- **Topología:** La disposición física o lógica de los nodos y enlaces
		- **Componentes y funcionalidad:** Los elementos de hardware y software que componen la red
		- **Formatos de datos:** Las estructuras utilizadas para organizar y presentar datos
		- **Tipo:** La clasificación de la red según su alcance y propósito
		- **Servicios soportados:** Las aplicaciones y funciones que la red puede proporcionar
### Subsistema de comunicación
- Colección de componentes de hardware y software que proporcionan las facilidades de comunicación pra un sistema distribuido
- **Nodo:** Cualquier computadora o dispositivo de _conmutación_ conectado a una red.
- **Host:** Las computadoras y otros dispositivos que usan la red para fines de _comunicación_.
## Comunicación inter-computadoras
- Se refiere a la _transferencia de datos_ entre dos o más dispositivos de computación interconectados en una red de computadoras.
- Sin memoria compartida las computadoras se necesitan comunicar.
- Los enlaces directos no escalan, por lo que no son prácticos.
## Topologías de red
### Topología de anillo
- Cada nodo está conectado exactamente a otros dos fomrando una ruta única para los datos.
- En la topología básica los mensajes viajan en una sola diracción (un nodo como host o retransmisor [relay]):
	- Como host, cada nodo envía mensajes a otros nodos y recibe mensajes dirigidos a él.
	- Como un relay, cada nodo envía los mensajes dirigidos a otros nodos al siguiente nodo del anillo.
- Su principal problema es la confiabilidad, si se pierde un enlace se impide la comunicación entre ciertos nodos.
- Anillos dobles = + confiabilidad y + costo.
- Ejemplos: Protocolo Token Ring (IEEE 802.5).
### Topología de estrella
- Cada nodo está conectado a un dispositivo central o hub el cual puede ser un hub de red, un switch o un router.
- Más robusta que la topología de anillo:
	- Si se pierde un enlace, solo el nodo conectado a dicho enlace pierde conexión y sin consecuencias para el resto de nodos.
- Existe un único punto de falla y de costo de despliegue y mantenimiento.
- Las tecnologías inalámbricas abaten el costo de mantenimiento.
### Topología de bus
- Se utiliza un enlace como backbone para conectar todos los dispositivos en una red con el resto.
- Los host compiten para acceder al backbone y transmitir datos.
- Cuando un host gana el acceso al medio, manda el mensaje el cual es recibido por todos los nodos aunque solo uno reaccionará a este (el resto lo descartan).
- Su rendimiento se ve afectado por el número de nodos - baja escalabilidad.
- Ejemplos: Protocolo Token Bus (IEEE 802.4), Fiber Distributed Data Interface (RFC 1188).
### Topología de árbol
- Combinación de las topologías de estrella y bus.
- Un hub conectado a nodos y hubs conectados entre sí.
- Los mensajes viajan por el árbol hasta alcanzar su destino.
- Mejor soporte a la escalabilidad.
### Topologías Ad-Hoc
- No dependen de una infraestructura de red en particular.
- Los host se comunican a través de caminos dinámicos establecidos y administrados por ellos mismos.
- Los mensajes viajan por "saltos" hasta alcanzar su destino.
- La topología cambia de forma dinámica con el tiempo.
## Componentes de red
- Enlaces
- Nodos
- Software
- Un conjunto de estos elementos se pueden definir como sub-sistemas de comunicación de un sistema distribuido
### Tipos de enlaces de acuerdo al medio físico
- Pares trenzados
- Cables coaxiales
- Fibra óptica
- Ondas de radio
- Microondas
- Ondas infrarrojas
- Ondas de luz visible
![[Captura de pantalla 2026-02-10 a la(s) 4.35.58 p.m..png]]

### Nodos
- Repetidores
![[Captura de pantalla 2026-02-10 a la(s) 4.37.38 p.m..png]]

- Routers
![[Captura de pantalla 2026-02-10 a la(s) 4.38.25 p.m..png]]

- Gateways
![[Captura de pantalla 2026-02-10 a la(s) 4.38.54 p.m..png]]