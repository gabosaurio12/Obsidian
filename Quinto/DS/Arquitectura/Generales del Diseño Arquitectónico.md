- El diseño arquitectónico es planificado, intencional y racional
- Una arquitectura de software se define por un conjunto de decisiones de diseño
- Cada decisión impacta en:
	- Estructura (componentes, conectores, vistas)
	- Comportamiento (interacciones)
	- Atributos de calidad
## Principios de diseño
- Alta cohesión, bajo acoplamiento
- Evitar puntos únicos de falla
- Limitar accesos a recursos críticos
- Externalizar estado para facilitar pruebas
	- **Principio general:** decisiones simples que fortalecen calidad y reducen riesgos
## Requisitos significativos para la arquitectura
- No todos los requisitos impactan igual a la arquitectura
- Un ASR es aquel que, si cambia o se omite, podría llevar a otra arquitectura distinta
- Los ASRs suelen provenir de:
	- Atributos de calidad críticos
	- Objetivos de negocio
	- Restricciones tecnológicas
- Primer paso del arquitecto -> conversaciones con stakeholders -> árbol de utilidad
## Elementos de diseño arquitectónico
- Arquitecturas de referencia = plantillas para dominios comunes
- Patrones arquitectónicos = soluciones conceptuales probadas
- Patrones de despliegue = estructuración física del sistema
- Tácticas = decisiones que controlan atributos
- Componentes externos = frameworks, middleware
El objetivo es reducir riesgos y aumentar la calidad con soluciones reutilizables
## Arquitecturas de referencia
- Son arquetipos para aplicaciones comunes
## Patrones arquitectónicos
- Soluciones conceptuales probadas a problemas de diseño recurrentes de diseño recurrentes
- Miles documentados en catálogos. Ejemplos:
	- Layeres = sistemas binarios
	- Microkernel = sistemas operativos
	- Monolito = Linux
	- Microservices = e-commerce escalable
	- Pipeline = procesamientos de datos (ETL)
	- Event-driven = apps reactivas, IoT
- **Ventaja:** Aceleran el diseño, estandarizan soluciones y facilitan comunicación
## Patrones de despliegue
- Orientean como estructurar el sistema desde la perspectiva física
- Ayudan a cumplir requisitos de disponibilidad, escalabilidad y rendimiento
- Ejemplos:
	- Despliegues en 2, 3 o n-niveles
	- Clúster con balanceo de carga
	- Clúster de alta disponiblidad
## Tácticas
- Decisiones que influyen el control en la respuesta de un atributo
- Existen categorías de tácticas por atributos de calidad:
	- Disponibilidad
	- Interoperabilidad
	- Modificacbilidad
	- Rendimiento
	- Seguridad
	- Facilidad de prueba
	- Usabilidad
## Componentes desarrollados externamente
- Estas son soluciones de código reutilizables
	- Middleware, frameworks
- Un framewokr es un elemento de software reuitlizable que proporciona una fucnionalidad genérica y aborda problemas
## Arquitecturas de referencia
- Microsoft Application Architecture Guide (PDF)
## Aplicaciones con clientes ricos
- Los clientes se instalan en las máquinas de los usuarios
- Las interfaces gráficas pueden tener un alto desempeño, ser interactivas y una experiencia de usuario más rica
- Puede operar en modo stand-alone, conectada, ocasionalmente conectada o desconectada
- Cuando está conectada, típicamente se comunica con servicios remotos
- Los clientes pueden ser thin o thick
### Aplicaciones de internet ricas
- Típicamente se eejcutan en un navegador y utilizan código que se ejecuta en él (JavaScript y AJAX)
- También pueden residir en plugins de navegadores
- Son más complejas que las aplicaciones web estándar y soportan interacción con el usuario rica así como lógica de negocio
- Están restringidas respecto al acceso de recursos locales por cuestiones de seguridad
### Aplicaciones móbiles
- Se ejecutan en un dispositivo móvil y usualmente trabaja en colaboración con una infraestructura remota
- Se estructuran utilizando módulos y capas similares a las que se encuentran
### Aplicaciones de servicios
- Son sistemas no interactivos que exponen funcionalidad a través de interfaces públicas (servicios)
- Los servicios se invocan por componentes consumidores remotos o en la misma máquina
- Se estructuran utilizando capas
- Al no ser interactivas no se necesita una capa de presentación
- La reemplaza una capa de servicios que contiene los componentes responsable por exponer los servicios
## Tácticas
- Son decisiones de diseño que influyen en el control de la respuesta de un atributo de calidad
### Objetivos de las tácticasa de disponibilidad
- Una falla ocurre cuando el sistema ya no entrega un servicio consistentemente con su especificación
	- Esta falla es observable por los actores del sistema
## Tácticas e interacciones
- Cada decisión de diseño tiene sus consecuencias positivas pero también negativas
- Las tácticas pueden ser usadas para aliviar las contra de las decisiones de diseño que ya se han tomado
- Una táctica común para detectar fallos es Ping/Echo
	- **Seguridad:** ¿Cómo se previene un ataque de ping flood?
	- **Desempeño:** ¿Cómo nos aseguramos que la carga en el desempeño del Ping/Echo es pequeño?