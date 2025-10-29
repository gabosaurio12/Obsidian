Fuente: El de Cervantes
- El diseño puede (y debe) ser desarrollado de una forma sistemática
- Las decisiones de diseño deben de justificarse
- Las decisiones de diseño se deben registrar
- Sistemático
	- Se tienen las herramientas para realizar el diseño de la arquitectura de una manera verificable:
		1. Se obtienen los requisitos de la arquitectura (verificables) como escenarios de calidad
		2. Se generan hipótesis (soluciones de diseño potenciales) usando las primitivas de diseño documentadas como patrones, tácticas, frameworks y arquitecturas de referencia
		3. Se pureban las hipótesis mediante análisis de requisitos
## Métodos
- Existen varios métodos de desarrollo de la arquitectura:
	- Viewpoints and perspectives
	- Process of Software Architecting
	- Architecture-Centric Design Method (ACDM)
	- Attribute-Driven Design (Este es el que usaremos)
- La mayoría cubren todo el CV de la arquitectura pero dan pocos detalles sobre cómo desarrollar la actividad de diseño
**"El diseño es una actividad de transformación"**
## Sistema de administración del servidor de tiempo
- Una compañía de telecomunicaciones quiere expandir su red IP para soportar servicios de VOIP
- Un aspecto importante que alcanzar este objetivo es la sincronización de los servidores de VOIP y otros equipos. La sincronización pobre resultará en una QoS baja y clientes insatisfechos
- Para lograr la sincronización, la compañía quiere desplegar una red de servidores  que soporten NTP
- Los servidores de tiempo se conforman en grupos que típicamente corresponden a regiones geográficas
- Dentro de esas regiones, los servidores de tiempo se organizan jerárquicamente en estraton en donde los servidores de timepo colocados en el nivel superior de la jerarquía están equipados con el hardware que proveen el tiempo de manera precisa
- Los servidores de tiempo en los estratos inferiores usan NTP para solicitar el tiempo delos servidores en los niveles superiores de sus pares
- El equipo depende del provisto por los servidores de tiempo así que una prioridad de la compañía es corregir los problemas en los servidores de tiempo tan rápido como sea psoible
- Además de NTP los servidores soportan SNMP el cual provee tres operaciones básicas:
	- set(): Cambiar un valor de configuración
	- get(): Obtener una variable de configuración o datos
	- trap(): Proveer notificaciones de eventos excepcionales como la pérdida o restauración
- Se ha decidido el desarrollo de un sistema de administración de los servidores de tiempo
- Una vez que la red inicial se ha desplegado , la compañía planea extender la red para agregar servidores de tiempo al proyecto en una taza de 100 servidores/año durane los próximos 5 años
- En el futuro se preveé incluir otros modelos de servidores de timepo que soporten otros protocolos diferentes a SNMP
- El sistema debe estar de acuerdo con el modelo FCAPS el cual es un estándar para la administración de redes
	- FCAPS: Marco de trabajo de gestión de redes definido por la Organización Internacional de Normalización (ISO) que abarca cinco funciones principales: Fault (fallos), Configuration (configuración), Accounting (contabilidad), Performance (rendimiento) y Security (seguridad)
## FCAPS
- Un sistema de administración de acuerdo con el modelo FCAPS:
	- Fault Management: Reconocer, asilar, corregir y llevar una bitácora de fallas que ocurren en la red
	- Configuration Management: Incluye reuinr y almacenar configuraciones de quipos de red, simplificando la configuración de dispositivos. Se lleva un rastreo a los cambios hechos en la configuración del dispositivo
	- Accounting: El objetivo es reuinir información del dispositivo. En este contexto estoy incluye llevar un rastreo de las versiones de firmware y hardware, el equipo de hardware, etc.
	- Permormance Management: Se centra en determinar la eficiencia de la red actual. Al recolectar y analziar los datos de desempeño, la salud de la red puede ser monitoreada
	- Security Management: El proceso de controlar el acceso
## Considerando el desempeño
- Los clientes se actualizan cuando se recibe trap durante la operación normal
- trap tiene que ser procesado y almacenado
- 5 segundos es lo máximo que es aceptado
## Restricciones
- Limitan el intervalo de posibilidades cuando se toma una decisión de diseño
	- Existen decisiones en las que se tienen elección
- Antes de iniciar el diseño, las restricciones tienen que ser identificadas y justificadas
- Restricciones técnicas
	- Uso de una DB legado
	- Uso de un IDE específico
## Objetivos de diseño
- Tipo de sistema: De campo verde (green field) en un dominio maduro
- Objetivo: Diseñar para la construcción de un incremento del sistema
- Preocupaciones: Estructura del sistema, organización de la base de código, validación de las entradas, manejo de las excepciones
### Tipos de sistema
- **Sistemas de campo verde en dominios novedosos**
	- Dominios conocidos pero más innovadores
- **Sistemas de campo verde en dominios conocidos**
	- Aplicaciones empresariales tradicionales
	- Dominios bien conocidos, menos innovadores
- **Sistemas de "campo café**
	- Cambios a sistemas existentes
## Casos de uso pricipales
- Son críticos para alcanzar los objetivos de negocio
- Están asociados con un escenario de atributo de calidad importante
- Podría implicar un alto grado de dificultad técnica
- Ejercita varios elementos arquitectónicos
- Representa una "familia" de casos de uso
- Solo el 10-20% de los casos de uso son principales
## Objetivo de la iteración y entradas
- **Objetivo:** Crear la estructura general del sistema
- **Entradas** a considerar: Todas
## Selección de los conceptos de diseño
- Alternativas de arquitecturas de referencia
	- Aplicaciones móviles
	- Aplicaciones de clientes enriquecidos
	- Aplicaciones de internet enriquecidas
	- Aplicaciones de servicios (servidores)
	- Aplicaciones web
- Microsoft Application Architecture Guide
- Alternativas de patrones de despliegue distribuido
	- 2, 3 o 4 tiras
## Frameworks
- Es un elemento reutilizaba de software que provee funcionalidad genérica
- Aborda preocupaciones recurrentes en un grupo de aplicaciones
- Un framework instancia patrones y tácticas
- La selección de un framwork es parte del proceso de diseño
- Algunos consejos:
	- No seleccionar frameworks por "moda" o "hábito"
	- Considerar el conocimeinto del equipo y la curva de aprendizaje
	- Considerar el nivel de madurez del framework y las implicaciones del licenciamiento
	- Considerar las herramientas de soporte
## Decisiones de diseño
- Se seleccionan dos arquitecuras de referencia
- Se selecciona 3-tier como patrón de despliegue
### Actores
- Primario: El que se beneficia y alcanza el objetivo del negocio
- Secundario: El que necesita el sistema para poder llevar a cabo el caso de uso
