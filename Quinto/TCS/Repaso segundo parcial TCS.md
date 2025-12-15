## Frameworks

### Cuestionario de Repaso

1. **¿Cuál es la diferencia fundamental entre un _hot spot_ y un _frozen spot_ en un framework?**
	- Es un punto de flexibilidad de un framework, como una clase o método abstracto que debe ser implementado para personalizar la aplicación
	- El frozen spot (kernel) es una parte ya implementada inmutable que no puede cambiarse fácilmente y que usualmente llama a los hot spots
2. **Explique el concepto de "inversión de control" (inversion of control) en el contexto de la arquitectura de un framework.**
	- Es una característica arquitectónica del framework donde el propio framework determina qué conjunto de métodos de la aplicación se deben invocar
	- Cuando ocurre un evento, el despachador (_dispatcher_) del framework reacciona invocando _hook methods_ en objetos manejadores (_handler_) prerregistrados para realizar el procesamiento específico.
3. **¿Por qué el desarrollo de un framework es generalmente más costoso que el desarrollo de una sola aplicación?**
	- Porque un framework se desarrolla para poder crear múltiples aplicaciones con él, tiene un dominio específico muy amplio ya que debe poder resolver múltiples problemas de el mismo, otra característica es que debe ser arquitectónicamente flexible lo cual implica más esfuerzo y lo vuelve caro
4. **Describa la diferencia principal entre los frameworks de caja blanca (_white-box_) y los de caja negra (_black-box_).**
	- Los de caja blanca se pueden extienden mediante herencia y enlace dinámico, lo que hace que los desarrolladores deban conocer la estructura interna para crear subclases y anular métodos.
	- Los de caja negra se extienden mediante composición de objetos, lo que permite conectar componentes se ajusten a las interfaces definidas, no requieren un conocimiento del framework interno por lo que son más fáciles de usar
5. **¿Qué es el análisis de dominio (_domain analysis_) y cuál es su propósito en el desarrollo de frameworks?**
	- Es la primera etapa del desarrollo de un framework,  su propósito es descubrir todos los requisitos actuales y futuros en un dominio. Se identifican los hot spots y frozen spots
6. **¿Qué son los _hook methods_ y qué papel juegan en la extensibilidad de un framework?**
	- Son métodos que permiten a las aplicaciones extender las interfaces estables de un framework. 
	- Desacoplan sistemáticamente interfaces y comportamientos estables del dominio para que se puedan personalizar nuevos servicios y características
7. **Mencione al menos tres beneficios principales que los frameworks orientados a objetos aportan a los desarrolladores.**
	- Modularidad: Encapsula los detalles de implementación detrás de interfaces estables
	- Reusabilidad: Permite reaplicar componentes genéricos
	- Extensibilidad: Proporciona puntos explícitos (hook methods) para la personalización
8. **¿Qué problema de depuración surge de la interacción entre el código específico de la aplicación y el código del framework?**
	- Un seguimiento de depuración conduce al código del framework y debido a eso, métodos de depuración single-step no son efizaces porque es imposible para el depurador distinguir  ambos tipos de código
9. **¿Cómo se utiliza el framework de pruebas JUnit para gestionar un _test fixture_ (conjunto de objetos de prueba)?**
	- El fixture se gestiona a través de métodos setUp (inicializa variables) tearDown (libera recursos asignados por setUp())
10. **¿Qué son los frameworks de integración de middleware (_Middleware integration frameworks_) y cuál es su función principal?**
	- Se usan para integrar aplicaciones y componentes distribuidos com olos ORB (Object Request Broker).
	- Mejoran la capacidad de modularización, reutilización y extensión en un entorno distribuido
	- Elimina los aspectos tediosos y no portátiles de la creación de aplicaciones distribuidas
<div class="page-break" style="page-break-before: always;"></div>

### Glosario de Términos Clave

| Término                                            | Definición                                                                                                                                                                                                                                                                                                                                                                   |
| -------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Análisis de Dominio (Domain Analysis)**          | La primera fase del desarrollo de un framework, que busca descubrir y capturar los requisitos actuales y futuros de toda una familia de problemas relacionados, en lugar de un solo problema. En esta etapa se identifican los _hot spots_ y _frozen spots_.                                                                                                                 |
| **Callback**                                       | Un mecanismo en el que el código de un usuario de servicio declara que desea ser llamado cuando ocurra un evento determinado. El código del proveedor de servicios realiza la devolución de llamada al código del usuario cuando el evento tiene lugar, caracterizando el enfoque del framework como "código antiguo llama a código nuevo".                                  |
| **Framework**                                      | Una aplicación "semi-completa" y reutilizable que puede ser especializada para producir aplicaciones personalizadas. Actúa como un generador de aplicaciones para un dominio específico, promoviendo la reutilización de diseño y código fuente.                                                                                                                             |
| **Framework de Caja Blanca (White-box Framework)** | Un framework que se extiende principalmente a través de la herencia de clases base y la anulación de _hook methods_ predefinidos. Requiere que los desarrolladores tengan un conocimiento íntimo de la estructura interna del framework. También se conoce como framework impulsado por la arquitectura (_architecture-driven_).                                             |
| **Framework de Caja Negra (Black-box Framework)**  | Un framework que soporta la extensibilidad mediante la definición de interfaces para componentes que pueden ser "conectados" al framework a través de la composición de objetos. Generalmente es más fácil de usar ya que no requiere un conocimiento profundo de los detalles internos del framework. También se conoce como framework impulsado por datos (_data-driven_). |
| **Framework de Caja Gris (Gray-box Framework)**    | Un framework que contiene características tanto de los frameworks de caja blanca como de los de caja negra.                                                                                                                                                                                                                                                                  |
| **Frameworks de Infraestructura de Sistema**       | Frameworks que simplifican el desarrollo de infraestructura de sistema portable y eficiente, como sistemas operativos, frameworks de comunicación e interfaces de usuario. Generalmente se usan internamente en una organización.                                                                                                                                            |
| **Frameworks de Integración de Middleware**        | Frameworks utilizados para integrar aplicaciones y componentes distribuidos, como los ORBs. Su objetivo es facilitar el desarrollo de software que funcione en un entorno distribuido.                                                                                                                                                                                       |
| **Frameworks de Aplicaciones Empresariales**       | Frameworks que abordan dominios de aplicación amplios como telecomunicaciones, finanzas o manufactura. Son la piedra angular de las actividades de negocio de una empresa y soportan directamente el desarrollo de aplicaciones para el usuario final.                                                                                                                       |
| **Frozen Spot**                                    | Puntos de inmutabilidad en un framework; son piezas de código ya implementadas que no pueden ser alteradas fácilmente. Constituyen el _kernel_ o núcleo del framework y llaman a uno o más _hot spots_.                                                                                                                                                                      |
| **Hook Methods**                                   | Métodos explícitos proporcionados por un framework que permiten a las aplicaciones extender sus interfaces estables. Sirven como puntos de extensión para personalizar el comportamiento del framework.                                                                                                                                                                      |
| **Hot Spot**                                       | Puntos de flexibilidad de un framework, típicamente clases o métodos abstractos, que deben ser implementados por el desarrollador para crear una aplicación específica. Son los puntos que se personalizan para cada instancia del framework.                                                                                                                                |
| **Instanciación (Framework Instantiation)**        | El proceso de generar un sistema de software ejecutable a partir de un framework. Esto se logra implementando el código específico de la aplicación para cada uno de los _hot spots_ del framework.                                                                                                                                                                          |
| **Inversión de Control (Inversion of Control)**    | Una característica de la arquitectura de un framework en la que el flujo de control es gestionado por el framework en lugar de la aplicación. El framework invoca métodos específicos de la aplicación (callbacks) en respuesta a eventos externos.                                                                                                                          |
| **JUnit**                                          | Un framework de pruebas simple y bien diseñado para JAVA, utilizado como ejemplo para ilustrar la arquitectura y el funcionamiento de los frameworks.                                                                                                                                                                                                                        |
| **Kernel**                                         | La parte constante y siempre presente de cada instancia de un framework. Es sinónimo de _frozen spots_ y constituye el núcleo inmutable del framework.                                                                                                                                                                                                                       |
| **Object Request Broker (ORB)**                    | Un tipo de framework de integración de middleware que facilita la comunicación entre objetos locales y remotos, eliminando aspectos tediosos de la creación de aplicaciones distribuidas.                                                                                                                                                                                    |
| **Test Fixture**                                   | En el contexto de las pruebas (como en JUnit), se refiere a la infraestructura para ejecutar dos o más pruebas en conjuntos de objetos similares o idénticos. Se gestiona con los métodos `setUp()` y `tearDown()`.                                                                                                                                                          |
<div class="page-break" style="page-break-before: always;"></div>

## Seguridad

### Cuestionario

1. ¿Qué es la seguridad?
	- Es la protección brindada a un sistema de información automatizado para alcanzar los objetivos aplicables de preservar la CIA de los rescursos (HW, SW, FW, información/datos y telecomunicaciones)
2. ¿Qué es la CIA?
	- **C**onfidencialidad: Se refiere a que la información no esté disponible para usuarios no autorizados
		- Privacidad: Individuos controlan quienes pueden ver y/o almacenar su información o para quienes está dirigida
	- **I**ntegridad: Se divide en dos
		- Integridad de datos: asegura que los datos y programas sean modificados solo con autorización y de una forma específica
		- Integridad del sistema: asegura que un sistema realiza su función prevista de una forma intacta, libre y deliberada
	- **A**-Disponibilidad: El sistema funciona adecuadamente y el servicio no es negado para usuarios autorizados
3. ¿Cuál es el top 10 de OWASP?
		A1-2017 - Injection
		A2-2017 - Broken authentication
		A3-2017 - Sensitive data exposure
		A4-2017 - XML external entities
		A5-2017 - Broken access control
		A6-2017 - Security misconfiguration
		A7-2017 - Cross site scripting
		A8-2017 - Insecure deserialization
		A9-2017 - Using components with known vulnerabilities
		A10:2017 - Insuficient logging & monitoring
4. Menciona al menos 2 recomendaciones para la inyección
	- Validar entradas
	- Limpiar valores
	- Consultas parametrizadas
	- Utilizar herramientas y frameworks en vez de crearlo todo manualmente
5. ¿Qué es el análisis estático de código?
	- Es el proceso de evaluar el código sin ejecutarlo
6. ¿Qué hace una herramienta de análisis estático?
	- Puede explorar varios excenarios "what if"
	- Proveen una forma consistente y detallada de la evaluación de código
7. ¿Por qué la programación defensiva no es suficiente?
	- Porque no garantiza la seguridad
8. ¿Cuáles son las ventajas del análisis estático?
	- Verificación completa sin discriminar secciones (a diferencia de un programador, una herramienta no lo hace)
	- Ofrece un punto específico que origina un problema sin experimentar los síntomas
	- Puede encontrar errores en desarrollo
9. ¿Cuáles son las desventajas del análisis estático?
	- Falsos positivos
	- Falsos negativos
10. ¿Qué aspectos se revisan en el análisis estático?
	- Verificación de tipos
	- Verificación de estilo
	- Verificación de propiedades
	- Búsqueda de defectos
	- Revisión de seguridad
<div class="page-break" style="page-break-before: always;"></div>

| Término                    | Definición                                                                                                                                                                                                                                                                                       |
| -------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **CIA**                    | Es un marco de seguridad basado en los tres pilares: Confidenciality, Integrity & Avalability. Su objetivo es ayudar a las organizaciones a establecer políticas y controles de seguridad para proteger los datos contra el acceso no autorizado, la manipulación y la interrupción del servicio |
| **Inyección**              | Es un ciberataque en el que un atacante inserta código malicioso en un programa vulnerable para que sea interpretado y ejecutado por este                                                                                                                                                        |
| **OWASP**                  | Es un proyecto de código abierto dedicado a determinar y combatir las causas que hacen que el software sea inseguro. La Fundación OWASP es un organismo sin ánimo de lucro que apoya y gestiona los proyectos e infraestructura de OWASP                                                         |
| **Programación defensiva** | Programar asumiendo con lo peor, tiene un impacto en la eficiencia del programa. Se practica no escribiendo código con un buen estilo, manteniéndolo simple, no confiando ni en tu sombra y usando un buen estilo de codificación                                                                |
