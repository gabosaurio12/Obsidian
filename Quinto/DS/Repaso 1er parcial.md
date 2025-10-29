# ¿Qué es la Arquitectura de Software?
**Fuente:** Software Architecture in Practice (4th Edition) Bass et al.
## 1. Concepto de Arquitectura de Software
- **Definición (Bass et al. (2021))**
	*La arquitectura de software es el conjunto de estructuras necesarias para razonar sobre el sistema, que incluyen elementos de software, relaciones entre ellos y sus propiedades.*
- **Claves de la definición:**
	- **Arquitectura = conjunto de estructuras**, no un único diagrama
	- Se centra en la *abstracción*: muestra lo relevante, omite detalles de implementación
	- **Razonar sobre el sistema** significa: poder *predecir, analizar y evaluar* cómo se comportará respecto a atributos de calidad importantes para los stakeholders
		- **Funcionalidad:** qué logra el sistema
		- **Disponibilidad:** cómo se mantienen operativo ante fallos
		- **Modificabilidad:** facilidad o dificultad de realizar cambios
		- **Rendimiento:** capacidad de responder con rapidez
**Idea central:** la arquitectura es valiosa porque permite evaluar y negociar compromisos (trade-offs) entre atributos de calidad antes de implementar
## 2. Arquitectura ≠ Diseño
- La arquitectura es un *tipo de diseño* pero no todo diseño es arquitectónico
- **Diseño arquitectónico:** se preocupa de estructuras de alto nivel, interfaces y decisiones con gran impacto
	- Se centra en *decisiones estructurales y de interacción* que afectan a los atributos de calidad
- **Diseño detallado:** abarca decisiones locales, implementaciones específicas
	- Se centra en detalles de implementación local que pertenecen al diseño de bajo nivel, no a la arquitectura
- Toda arquitectura es diseño, pero no todo diseño es arquitectura*
- El DAO Es más arquitectura que diseño

	Arquitectura -> Stratégico
	Diseño -> Táctico
## 3. Todo sistema de software tiene una arquitectura
- Incluso si nunca se documentó, todo sistema **posee una arquitectura** (porque tiene elementos y relaciones)
- La diferencia es si esa arquitectura está **explícita y documentada**, o solo existe en el código ejecutable
- Importancia de la **documentación arquitectónica** (Cap. 22)
## 4. Categorías de estructuras arquitectónicas
### a) Componentes y conectores (Component-and-Connector)
- Muestra **cómo interactúan los elementos en tiempo de ejecución**
	- Vista **dinámica en tiempo de ejecución**
- **Componentes:** unidades principales de cómputo (clientes, servidores, servicios, filtros)
- **Conectores:** mecanismos de comunicación (llamadas, colas, sincronización, pipes)
- Preguntas que responde:
	- ¿Qué componentes se ejecutan en paralelo?
	- ¿Dónde están los cuellos de botella?
	- ¿Cómo fluye la información?
### b) Módulos (Modules)
- Vista **estática del sistema:** unidades de implementación (clases, paquetes, capas)
	- Partición del sistema en **unidades de implementación**
- Fundamentaales para **razonar sobre modificabilidad**
- Usadas para: asignar trabajo de equipos, razonar sobre **modificabilidad**
- Tipos de estructuras útiles:
	- **Descomposición:** divide módulos en submódulos
	- **Usos:** muestra dependencias "A usa B"
	- **Capas:** organización jerárquica de servicios (ej. UNIX)
	- **Clases (generalización):** relaciones de herencia "es-un"
	- **Modelo de datos:** entidades y relaciones estáticas (ej. Cliente-Cuenta en un banco)
### c) Asignación (Allocation)
- Mapean software a **recursos de no software** (hardware, equipos humanos, archivos)
- Ejemplos:
	- **Despliegue:** mapea procesos a hardware; crucial para analizar rendimiento y seguridad
	- **Implementación:** asigna módulos a directorios/repositorios; clave en gestión de builds
	- **Asignación de trabajo:** asigna módulos a equipos de desarrollo; las decisiones de organización **también son arquitectónicas**
## 5. ¿Qué hace a una arquitectura "buena"?
- No existen arquitecturas inherentemente buenas o malas -> **depende del propósito**
- **Reglas prácticas (heurísticas):**
	1. Liderazgo claro de un **arquitecto o pequeño grupo**
	2. Basarse en **requisitos de calidad** priorizados (no solo funcionalidad)
	3. Documentar usando **vistas arquitectónicas** relevantes
	4. Evaluar tempranamente contra los atributos de calidad
	5. Permitir **implementación incremental** (sistemas esqueléticos)
	6. Uso de **módulos bien definidos**, con ocultamiento de información y separación de responsabilidades
	7. Preferir **patrones conocidos** para asegurar calidad (capítulos 4-13)
	8. Diseñar con **interacciones consistentes** y pocos puntos de contención de recursos
## 6. Relación con otras arquitecturas
- **System Architecture:** integra hardware, software y usuarios (ej. avionics)
- **Enterprise Architecture:** estructura de procesos, información y sistemas de una organización
- La arquitectura de software **vive dentro** de estos marcos
## 7. Ejemplo aplicado
Un sistema de *banca en línea* puede documentarse con:
- **Módulos:** Cliente, Servidor de Autenticación, Base de Datos
- **C&C:** Conexiones HTTPS, colas de mensajes, API REST
- **Asignación:** Cliente móvile en smartphone, servidor en cloud, equipo de seguridad responsable de autenticación
## 8. Preguntas
1. ¿Por qué es importante **documentar** una arquitectura si ya "vive" en el código?
	*Porque la documentación habla por el arquitecto. Aunque la arquitectura viva en el código este solo muestra lo que se implementó, no el por qué se tomaron ciertas decisiones. La documentación facilita el mantenimiento, una buena documentación permite que nuevos empleados la entiendan rápidamente el sistema y les sirve de guía para futuras actualizaciones o refactorizaciones. *
2. ¿Cómo se distinguen las decisiones arquitectónicas de las de diseño detallado?
	*Las decisiones arquitectónicas afectan a los atributos de calidad, se enfocan en estos mientras que el diseño detallado se centra en la implementación de las decisiones arquitectónicas. Por ejemplo, elegir una arquitectura de microservicios es una decisión arquitectónica; elegir qué librería usar para conectarlos es una decisión de diseño detallado.*
3. ¿Qué trade-offs identificas entre **desempeño y seguridad** en un sistema distribuido?
	*A más medidas de seguridad el desempeño del sistema puede bajar, mientras que si buscamos un gran desempeño podríamos dejar vulnerabilidades sin cuidar o quedarnos cortos en medidas de seguridad. Por ejemplo, cifrar todas las comunicaciones en un sistema distribuido mejora la seguridad pero aumenta la latencia.*
4. ¿Cuáles serían las estructuras más relevantes si diseñaras un sistema de videojuegos en línea?
	*La arquitectura cliente-servidor, con un servidor central que se encarga de la lógica del juego y sincronización entre jugadores. Capas de comunicación en tiempo real, servicios de autenticación y seguridad y sistemas de almacenamiento distribuidos para el manejo de sesiones y el estado del juego.*
## Resumen
- La arquitectura es el **puente** entre **objetivos de negocio** y el sistema implementado
- Se expresa en **estructuras** (C&C, módulos, asignación) que permiten razonar sobre **atributos de calidad**
- Una **buena arquitectura** se caracteriza por modularidad, patrones probados, consistencia, evaluaciones tempranas y documentación adecuada
- Una **buena arquitectura** depende de qué tan bien satisface los objetivos del negocio
# ¿Por qué es importante la arquitectura de software?
## 1. Introducción
**"Si arquitectura es la respuesta ¿cuál era la pregunta?"** La respuesta son **13 razones fundamentales**, que abarcan aspectos **técnicos, organizativos y estratégicos**

## 2. Las 13 razones principales
1. **Habilita o inhibe atributos de calidad**
- La arquitectura es el principal determinante de si un sistema alcanzará atributos de calidad como:
	- **Rendimiento:** decisiones como concurrencia, uso de recursos compartidos y patrones de comunicación impactan la latencia y el throughput
	- **Modificabilidad:** una buena asignación de responsabilidades y bajo acoplamiento permite que los cambios afecten solo a pocos elementos
	- **Seguridad:** introducir componentes como mecanismos de autorización y restringir accesos inter-elemento fortalece el perímetro contra ataques
	- **Escalabilidad:** requiere localización del uso de recursos y evitar supuestos rígidos de hardware/software
- *Lo que la arquitectura otorga, la implementación puede quitarlo:* un mal diseño posterior puede degradar una buena base arquitectónica
2. **Permite razonar y gestionar el cambio**
	- Una buena arquitectura favorece cambios **locales** (más fáciles de implementar) y minimiza los cambios **no locales** o **arquitectónicos**, que son más costosos
	- Los cambios se clasifican en:
		- **Locales:** afectan solo un elemento (ej. regla de negocio en un módulo)
		- **No locales:** implican modificar varios elementos, pero sin alterar la arquitectura (ej. nueva regla de negocio -> cambios en BD y UI)
		- **Arquitectónicos:** alteran la forma en que los elementos interactúan (ej. pasar de monohilo a multihilo)
	- Una arquitectura efectiva facilita que la mayoría de cambios sean **locales**
	- Si no se mantiene la integridad conceptual surge la **deuda arquitectónica**, que encarece los cambios futuros y compromete la evolución del sistema
3. **Predice cualidades del sistema**
	- La arquitectura no solo da forma a los atributos de calidad, sino que permite **predecirlos de forma anticipada**
		- A partir del diseño arquitectónico es posible **anticipar** atributos como rendimiento o seguridad sin necesidad de tener el sistema completo
	- Ejemplo: si se elige un patrón de comunicación síncrona, se puede anticipar que el sistema tendrá problemas de latencia en condiciones de alta carga
4. **Mejora la comunicación entre stakeholders**
	- La arquitectura funciona como **lenguaje común** para usuarios, desarrolladores, gerentes y arquitectos, facilitando consenso y negociación
		- Usuarios (quieren disponiblidad y rapidez)
		- Clientes (buscan cumplimiento de plazos y costos)
		- Gerentes (requieren equipos independientes y disciplinados)
		- Arquitectos (velan por calidad, riesgos y trade-offs)
5. **Captura las decisiones de diseño más tempranas**
	- Son las más difíciles de cambiar y definen gran parte del sistema:
		- ¿Será monolítico o distribuido?
		- ¿Se usará comunicación síncrona o asíncrona?
		- ¿Qué protocolo y sistema operativo se adoptará?
	- Un cambio tardío en estas decisiones tiene un **efecto dominó** que puede derivar en rediseño completo
6. **Impone restricciones a la implementación**
	- La arquitectura define **qué elementos existen, cómo interactúan y qué responsabilidades cumplen**
	- Se **limitan las alternativas** de los implementadores pero se garantiza coherencia
	- Ejemplo: asignar presupuestos de rendimiento a cada componente. Los desarrolladores pueden no conocer el total, pero sí su cuota de responsabilidad
7. **Influye en la estructura organizacional**
	- La arquitectura se refleja en la división de trabajo: módulos -> equipos
		- Esto se dconoce como la **Ley de Conway**: *"las organizaciones que diseñan sistemas producen diseño s que reflejan su estructura de comunicación"*
		- Ejemplo: si un sistema se organiza en microservicios, probablemente cada microservicio será gestionado por un equipo autónomo
8. **Facilita el desarrollo incremental**
	- Permite contruir un **esqueleto ejectuable** (walking skeleton) que incorpora infraestructura básica (comunicación, logging, inicialización) y luego se expande con nuevas funciones
	- **MVP (Minimum Viable Product):** versión mínima para validar supuestos y reducir riesgos
	- **Beneficio:** tener un sistema funcional temprano, detectar problemas antes y reducir incertidumbre
9. **Base para estimar costos y tiempos**
	- Las estimaciones más precisas surgen de una combinación
		- **Top-down:** visión general del arquitedto/gerentes de proyecto
		- **Bottom-up:** estimaciones detalladas de los equipos responsables de módulos
	- La arquitectura facilita este consenso al definir la **estructura de trabajo y responsabilidades**
10. **Modelo reusable y transferible**
	- La arquitectura puede servir de base para **líneas de producto** (product lines): familias de sistemas que comparten componentes, pruebas, requisitos y sobre todo arquitectura
	- Esto permite **reutilización sistemática**, reducción de costos y tiempo de salida al mercado
11. **Fomenta la integración de componentes independientes**
	- Facilita el uso de **COTS, open source y servicios externos**, reduciendo tiempo y costos de desarrollo
		- COTS (Commercial Off-The-Shelf)
		- Software open source
		- Servicios externos (APIs, SaaS)
	- **Sistemas abiertos** -> definen estándares que evitan la dependencia exclusiva de un proveedor (vendor lock-in)
12. **Restringe el vocabulario de diseño**
	- Aunque podría parecer limitante, en realidad **canaliza la creatividad** hacia soluciones probadas:
		- **Tácticas:** decisiones locales para lograr atributos (ej. caché para rendimiento)
		- **Patrones:** combinaciones recurrentes de tácticas (ej. MVC, cliente-servidor)
	- Esto reduce complejidad, facilita comunicación y aumenta la predictibilidad
13. **Soporte para capacitación**
	- La arquitectura es la **primera referencia** para nuevos integrantes del equipo:
		- **Módulos:** qué hace cada equipo
		- **C&C:** cómo fluye la ejecución
		- **Asignación:** dónde encaja cada componente en hardware y procesos de desarrollo
## 3. Preguntas
1. ¿Cuál de las 13 razones consideras **más importante** en proyectos actuales de software como apps móviles o servicios en la nube?
2. ¿Qué riesgos observas si un proyecto **no documenta su arquitectura**?
3. ¿Qué riesgos aparecen cuando un proyecto acumula **deuda arquitectónica**?
4. ¿Cómo aplicarías el concepto de **esqueleto ejecutable** en un proyecto académico?
5. ¿En qué casos podría **no ser necesaria** una arquitectura explícita?
## 4. Resumen
- La **arquitectura es el principal determinante de los atributos de calidad** de un sistema
- Impacta en **toda la vida útil del software**, desde diseño hasta mantenimiento
- Tiene un papel técnico (asegura calidad, cambio y predicción) y organizacional (estructura de equipos, costos, comunicación)
- Una buena arquitectura no solo soporta la construcción del sistema, sino también su **evolución, mantenimiento y reutilización**
# Software Basado en Componentes (CBSE)
## Flujo de trabajo: Una secuencia de actividades que produce un resultado de valor observable
### Proceso de desarrollo (visual)
![[Captura de pantalla 2025-10-14 a la(s) 12.43.46 a.m..png]]
Las flechar representan el flujo de **artefactos**: entregables que transportan información entre flujos de trabajo.
![[Captura de pantalla 2025-10-14 a la(s) 12.45.33 a.m..png]]
#### Artefactos
![[Captura de pantalla 2025-10-14 a la(s) 12.45.33 a.m..png]]
#### Evaluación de los artefactos
![[Gabosaurio/DS/Imágenes/Captura de pantalla 2025-10-14 a la(s) 12.48.05 a.m..png]]
#### Flujo de especificación
![[Captura de pantalla 2025-10-14 a la(s) 12.49.25 a.m..png]]
![[Captura de pantalla 2025-10-14 a la(s) 12.50.02 a.m..png]]
### Proceso de desarrollo
- Los proyectos siguen dos procesos
	- El **proceso de gestión** programa el trabajo, planifica las entregas, asigna recursos, evalúa el riesgo y supervisa el progreso
	- El **proceso de desarrollo (PD)** crea software funcional a partir de los requisitos
- El _PD_ se divide en una serie de flujos de trabajo que tienen dependencias pero que realizan de forma iterativa.
- El **flujo de trabajo de requisitos** genera un *modelo de concepto de negocio* y un *modelo de caso de uso*
- El **flujo de trabajo de especificación** se divide en tres etapas:
	1. La *etapa de identificación de componentes* produce una arquitectura de componentes inicial a partir de los requisitos
	2. La *etapa de interacción de componentes* descubre las operaciones necesarias y asigna responsabilidades
	3. La *etapa de especificación de componentes* crea especificaciones precisas de operaciones, interfaces y componentes
- El **flujo de trabajo de aprovisionamiento** es responsable de entregar software conforme a la especificación del componente que se le proporciona
	- Puede ser implementándolo, comprándolo y adaptándolo, o integrando y adaptando el software existente
- El **flujo de trabajo de ensamblaje** vincula los componentes, la intrefaz de usuario y la lógica de la aplicación y el software existente en una aplicación
# CBSE - Identificación de componentes
- **Objetivo:** Crear un conjunto inicial de interfaces y especificaciones de componentes, unidos en una arquitectura de componentes
- **Entradas:** Modelo de conceptos de negocio y el modelo de casos de uso
- **Salida:** *Modelo de tipos de negocio*, un artefacto de especificación importante
	- Se desarrollan los modelos de información de las interfaces a partir de él
## Entradas (salida del flujo de trabajo de requisitos)
- El **modelo de conceptos de negocio** enumera los conceptos importantes en el dominio del problema y muestra las relaciones entre ellos
- Los **casos de uso** aclaran el límite del software, identifican a los actores que interactúan con el sistema y describen esas interacciones
- Los artefactos se refinarán y completarán la especificación y completarán la especificación en flujos subsecuentes
- El énfasis aquí es el descubrimiento:
	- ¿Qué **información** necesita ser manejada?
	- ¿Qué **interfaces** se necesitan para manejarla?
	- ¿Qué **componentes** se necesitan para proveer dicha funcionalidad?
	- ¿Cómo **encajarán** entre sí dichos componentes?
- El sistema se divide en dos:
	- Capa de servicios de sistema
	- Capa de servicios de negocio
![[Captura de pantalla 2025-10-14 a la(s) 1.08.23 a.m..png]]

![[Captura de pantalla 2025-10-14 a la(s) 1.09.58 a.m..png]]
- Tomar en cuenta:
	- Interfaces, sistemas, bases de datos o componentes **existentes**
		- Patrones arquitectónicos, patrones de diseño y principios de diseño
## Identificación de interfaces (del sistema)
- El diálogo del sistema implementa la lógica de Caso de Uso -> su descripción
	- Se separa en pasos, se utilizan para identificar las **operaciones** del sistema
	- En cada paso, el sistema debe proporcionar 0, 1 o n operaciones para cumplir sus responsabilidades
	- **No** es un mapeo uno a uno
- Las **interfaces de sistema** y sus **operaciones** iniciales emergen del **análisis** del modelo de casos de uso
	- Estas especificaciones detallan cómo los usuarios o sistemas externos interactúan con el sistema en desarrollo
	- Están derivados principalmente de los casos de uso
- Recordad que la propuesta se centra en el "lado del servidor" de un sistema
![[Captura de pantalla 2025-10-14 a la(s) 1.14.08 a.m..png]]
- En tiempo de ejecución:
	1. El usuario inicia un CU, la lógica de éste hace que se cree y se muestre la GUI adecuada
	2. El usuario es guiado a través de los pasos del CU por su lógica
	3. Siempre que la lógica del CU necesita información para mostrar o notificar al sistema de una acción del usuario, llama a la operación apropiada en la lógica del paso del CU
	4. Esta operación, a su vez, utiliza operaciones definidas en la lógica de negocio para realizar su función
### ¿Dónde van las interfaces?
![[Captura de pantalla 2025-10-14 a la(s) 1.16.50 a.m..png]]
![[Captura de pantalla 2025-10-14 a la(s) 1.18.05 a.m..png]]
## Identificación de interfaces de negocio
- El **modelo de** *conceptos* **de negocio** nos centra en la información y procesos que el sistema gestionará
	- Visión del mundo -> Punto de vista humano
- El **modelo de** *tipos* **de negocio** es una refinación
	- Se utiliza para desarrollar las interfaces de negocio
	- Visión del mundo -> Punto de vista del sistema
- Las operaciones de componentes realizan su trabajo invocando operaciones de interfaces de negocio
### Modelo de Tipo de Negocio
- El modelo de tipo de negocio contiene información específica que el sistema necesita
- Los tipos de negocio pueden ser físicos (por ej., un producto) o no físicos (por ej., un pedido)
### Identificación de interfaces de negocio
- Son abstracciones de la infomración que debe administrar el sistema
- Proceso:
	1. Producir una copia del modelo de conceptos de negocio y ajustarlo al alcance. Será el modelo de tipos de negocio
	2. Refinar el modelo de tipos de negocio y especificar las reglas de noegocio adicionales con restricciones
	3. Identificar los tipos de negocio principales
	4. Crear interfaces de negocio para los tipos principales y agrégalas al modelo
	5. Rerfinar el modelo para indicar las responsabilidades de la interfaz de negocio
- Deben reflejar las reglas de negocio
- Identificar los tipos «Core»
#### Copia del modelo de coneptos de negocio al modelo de tipos de negocio
![[Captura de pantalla 2025-10-14 a la(s) 1.23.14 a.m..png]]
Se ajusta el alcance del *Modelo de Conceptos de Negocio*
![[Gabosaurio/DS/Imágenes/Captura de pantalla 2025-10-14 a la(s) 1.24.00 a.m..png]]
Da como resultado el *Modelo de Tipos de Negocio*
![[Captura de pantalla 2025-10-14 a la(s) 1.24.41 a.m..png]]
#### Definición de Reglas de negocio
- Es importante tener un Modelo de Tipos de Negocio preciso
- Las reglas de negocio proporcionan una base precisa sobre la cual trabajar
- Las restricciones iniciales se escriben a menudo en lenguaje natural
	- Eventual creación de especificaiones formales en etapas prosteriores
![[Captura de pantalla 2025-10-14 a la(s) 1.26.37 a.m..png]]
### Identificación de Core Types
- Ahora se necesita decidir qué Tipos de Modelo de Tipos del negocio son los centrales
- Los Core Types nos permiten identificar qué información es dependiente y cuál puede permanecer independiente
- Este proceso nos guiará hacia la asignación de responsabilidades de información a interfaces
#### Core Type
- Posee un identificador de negocio, usualmente independiente de otros identificadores
- Existencia independiente: no tiene asociaciones obligatorias excepto con un tipo categorizador
	- Un tipo categorizador es aquel cuyas instancias categorizan o clasifican las instancias de otro tipo
	- No es una asociación de agregación o composición, simplemente una de clasificación
	- Ejemplo: RoomType categoriza a Room, pero Room no es un 'Core Type' debido a su asociación obligatoria con Hotel
- Se les asocia una interfaz
#### Representación en UML
- Se indican en el modelo de tipos de negocio con el estereotipo «Core»
- UML no permite que los elementos del modelo tengan más de un estereotipo por lo que «Core» engloba «type»
![[Captura de pantalla 2025-10-14 a la(s) 1.28.47 a.m..png]]
### Creación de las interfaces de negocio
- Las interfaces de negocio son esenciales para gestionar información de los Core Types y sus tipos dependientes
- Generalmente creamos una interfaz de negocio para cada Core Type en el modelo de tipo de negocio
- Referidas como interfaces de gestión o 'manager interfaces'
![[Captura de pantalla 2025-10-14 a la(s) 1.29.52 a.m..png]]
### Asignación de responsabilidades a asociaciones
- Las asociaciones inter-interfaces se refiere que existe una asociación entre tipos manejados por diferentes interfaces
	- Ej. asociación entre el Customer y la Reservation
- Se debe tomar una decisión donde se regsitrará esta información:
	- ¿Qué interfaz almacenarán la/s referencia(s)?
	- ¿Donde se mantendrá la integridad referencial? ¿Qué componente asumirá la responsabilidad de una referencia determinada?
- En esta etapa nos preocupa más dónde se regristrará la información
- Uno de los objetivos de alto nivel es reducir las dependencias:
	- Construir sistemas  partir de componentes es principalmente un problema de gestión de dependencias
	- Las asociaciones entre interfaces se pueden considerar como una forma específica de dependencia
	- Evitar siempre que sea posible, las referencias bidireccionales entre interfaces
	- Asignar navegabilidad unidireccional a todas las asociaciones entre interfaces
		- Esto nos dice inmediatamente qué interfaz es responsable de almacenar la referencia

Asignar dirección de la referencia
![[Gabosaurio/DS/Imágenes/Captura de pantalla 2025-10-14 a la(s) 1.30.54 a.m..png]]
### Crear especificaciones de interfaz iniciales
- Las interfaces del sistema y sus operaciones que se han creado no forman parte del modelo de tipos de negocio
	- Forman un conjunto inicial de especificaciones de interfaz que se refinarán
- El modelo de tipos de negocio y las interfaces de negocio que se agregaron es un artefacto interno del flujo de trabajo
	- Es un paso para crear especificaciones de interfaces de negocio independientes
- El modelo de tipos de negocio en sí mismo no es un producto principal
	- Decidir descartarlo una vez que haya cumplido su propósito
	- Es posible conservarlo (y mantenerlo) como parte de la documentación de la arquitectura de componentes
- Si estamos satisfechos con el diagrama de responsabilidad de interfaz:
	- Crear un conunto de interfaces de negocio en el paquete especificaciones de la interfaz
		- Cada una con su propio subpaquete
		- También copiamos en el paquete para cada interfaz, todos aquellos tipo s del que lal interfaz es responsable
		- Es una buena base para el modelo de información de interfaz de cada interfaz
![[Captura de pantalla 2025-10-14 a la(s) 1.32.32 a.m..png]]
### Resumen:
- Las interfaces del sistema se crean directamente en la carpeta de especificaciones de interfaz
- Las interfaces de negocio iniciales se crean en el modelo de tipos de negocio
- A continuación, se crean especificaciones de interfaz de negocios duplicadas y separadas en la carpeta de especificaciones de interfaz
- No es necesario conservar el modelo de tipo de negocio, pero se sugiere hacerlo pues brinda una vista integrada
## Interfaces y sistemas existentes
- Hasta el momento se tienen:
	- Interfaces de sistema derivados de los casos de uso
	- Interfaces de negocio iniciales a partir del Modelo de tipos de negocio
- Ahora agregar interfaces adicionales que son parte del ambiente en el que el sistema es desplegado:
	- ¿Hay interfaces que estamos obligados a usar?
	- Hay interfaces a componentes que forman parte de una arquitectura mayor?
## Arquitectura de especificación de componentes
- El componente es la unidad de implementación y reemplazo en un sistema de componentes
- Son lo que construimos o compramos, son las unidades de realización
- Debemos elegir componentes de manera que tenga sentido construir o comprarar esa unidad de funcionalidad
- Se puede actualizar un sistema reemplazando componentes de forma selectiva
- Cuidar de especificar componentes de tal manera que las unidades de recambio sean las que queremos y las que podemos gestionar
- Hay una serie de posibles aportaciones a esta actividad en esta etapa:
	- Las interfaces en el modelo de interfaz
	- Especificaciones de componentes existentes que pretendemos reutilizar
	- Una arquitectura de especificación de componentes existentes que necesitamos adaptar
	- Una selección de patrones de especificación de componentes
- Crear una especificación de componentes separada para cada especificaci´n de interfaz que hemos identificado
- Podemos admitir múltiples interfaces en una sola especificación de componentes den las siguientes circunstancias
	- Los conceptos representados por las diferentes interfaces tienen la misma vida útil (se crean y eliminan al mismo timepo)
		- Es el caso de interfaces con modelos de información de interfaz muy "superpuestos"
- Las interacciones entre las interfaces son complejas, frecuentes o involucran grandes cantidades de datos
- Estamos contentos de que las implementaciones de las interfaces se reemplacen simultáneamente, como una unidad
- Queremos manteer la granularidad de los componentes a un tamaño razonable para la gestión dne proyectos y la organización
![[Captura de pantalla 2025-10-14 a la(s) 1.38.38 a.m..png]]
### Especificación de componentes de negocio
- Para las interfaces de negocio, nuestro punto de partida es la especificación de un componente por interfaz
- Las interfaces de administración se crearon para administrar instancias de «core», tipos de negocio y sus detalles asociados
	- Se preocupan por la información que se administra de forma independiente
	- Se adopta la convención de nombrar a las interfaces de administración como IxxxMgt y a la especificación de componente correspondiente como xxxMgr
![[Captura de pantalla 2025-10-14 a la(s) 1.40.32 a.m..png]]
## En resumen
- Al terminar este flujo se tendrá:
	- Un conjunto inicial de especificaciones de interfaces de sistema, especificaciones de interfaces de negocio y especificaciones de componentes
	- Una arquitectura de componentes inicial
	- Un modelo de tipo de negocio que contiene un conjunto de información de tipos y reglas de negocio
- Esta es la materia prima a partir de la cual se construyen las especificaciones de interfaces
- Algunos de los principios fundamentales son los siguientes:
	- Las interfaces de sistema corresponden a casos de uso y sus operaciones se derivan de los pasos del caso de uso
		- Se desarrolla un modelo de tipos de negocio que representa la visión del sistema del modelo de concepto de negocio
		- Las reglas de negocio se capturan en el modelo de tipo de negocio como restricciones
		- El modelo de tipo de negocio es un artefacto de flujo de trabajo interno, que es útil de matnener
	- Las interfaces de negocio se descrubren identificando tipos básicos en el modelo de tipos de negocio y creando interfaces para administrar a estos tipos y sus detalles
	- Las especificaciones de la interfaz de negocio inicial se crean copoiando las interfaces de negocio del modelo de tipos de negocio en paquetes de interfaz separados
		- El modelo integrado con el que comenzamos se divide en modelos que evolucionan de forma independiente
		- Estas especificaciones de interfaz se perfeccionan en etapas posteriores
- Las especificaciones de los componentes iniciales se definen y forman en una arquitectura de componentes inicial
	- Se toman en cuenta los sistemas y arquitecturas existentes
# ADD
- Los resultados de ADD no pueden ser buenos si las entradas fueron malas
- **REGLA DE ORO:** Se debe comenzar a diseñar si, sin importar el propósito del diseño, restricciones y preocupaciones arquitectónicas iniciales, se han establecido los casos de uso principales y los escenarios de atributos de calidad más importantes.
	- Esto no significa que se tomarán decisiones basadas únicamente sobre esos drivers, aún se deben registrar otros escenarios de atributos de calidad, casos de uso y preocupaciones arquitectónicas, pero estos se pueden tratar más tarde
- Es un método guiado por los *concerns* sobre los atributos de calidad
- Es un método iterativo de diseño
- Provee un conjutno de pasos detallados para el diseño de la arquitectura
	- Permite que el diseño se realice de una forma sistemática y repetible
	- El resultado es predecible
	- Primary Functionality = Casos de uso
 ![[Captura de pantalla 2025-09-04 a la(s) 12.15.26 p.m..png]]