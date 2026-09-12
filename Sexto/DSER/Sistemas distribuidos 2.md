## Qué los caracteriza
- Concurrencia en sus componentes
- Falla independiente de sus componentes
- Carencia de un reloj global
## Concurrencia de sus componentes
- Ejecución concurrente
	- Programas que se ejecutan al mismo tiempo en la red
- Escalabilidad de recursos
	- Añadir recursos mejora la capacidad de manejo
- Coordinación de recursos
	- Coordinación esencial para compartir recursos eficazmente
## Carencia de un reloj global
- El envío de mensajes a través de la red limita la precisión del tiempo
## Falla independiente de sus componentes
- Fallas de los componentes: Todos los componentes del sistema pueden fallar, por lo que es responsabilidad del diseñador planear las consecuencias de las fallas
- Fallas en la red: Las fallas en la red dan como resultado el asilamiento de una computadora, pero eso no quiere decir que se ha detenido
- Fallas desconocidas: Las fallas en algún lugar del sistema no se conocen inmediatamente por todos los componentes con los que se están comunicando
## Por qué se construyen
- Para compartir recursos:
- Recurso: Son cosas que se pueden compartir de manera útil en una red de computadores.
	- Hardware
	- Software
## Cuáles son los retos de desarrollar este tipo de sistemas
- Heterogeneidad: De todos sus componentes
- Apertura: ¿Cómo hacer sistemas extensibles?
- Seguridad: Protección de recursos y protección de información
- Escalabilidad: Incremento en la carga o número de usuarios
- Manejo de fallas: ¿Qué hacer si un componente falla?
- Concurrencia: Recursos a salvo en un ambiente concurrente
- Transparencia: Algunos aspectos invisibles
- Calidad del servicio: Desempeño, seguridad y disponibilidad
## Tendencias en sistemas distribuidos
- El uso generalizado de tecnologías de red
- La aparición del cómputo ubicuo y la movilidad de los usuarios
- La creciente demanda de servicios multimedia
- La visión de los sistemas distribuidos como _commodity_
## Móviles y sistemas distribuidos
- Integración de dispositivos a los sistemas distribuidos
	- Laptops, handhelds, wearables, dispositivos empotrados, IoT
- Cómputo móvil
	- Consciente de contexto y consciente de localización
- Interoperación espontánea
- Descubrimiento de servicios
## Sistemas commodity
- Los recursos que proveen los sistemas son rentados en lugar de ser propiedad de los usuarios finales
- Incluye tanto recursos físicos como lógicos
	- Físico: Almacenamiento y procesamiento
	- Lógico: Servicios de email, calendarios distribuidos, etc.
- Cloud computing, cluster computing, grid computing