- El **flujo de trabajo de requisitors** genera un modelo de concepto de negocio y un modelo de caso de uso
- El **flujo de trabajo de especificación** se divide en tres etapas:
	1. La etapa de identificación de componentes produce una arquitectura de componentes inicial a partir de los requisitos
	2. La etapa de interacción de componentes descubre las operaciones necesarias y asigna responsabilidades
	3. La etapa de especificación de ocmponentes crea especificaciones precisas de operaciones, interfaces y componentes
- El **flujo de trabajo de aprovisionamiento** es responsable de entregar software conforme a la especificación del componente que se le proporciona
	- Puede ser implementándolo, comprándolo y adaptándolo o integrando y adaptando el software existente
- El **flujo de trabajo de ensamblaje** vincula los componentes, la interfaz de usuario, la lógica de la palicación y el software existente en una aplicación
	- **Objetivo:** Crear un conjunto inicial de interfaces y especificaciones de componentes, unidos en una arquitectura de componentes
	- **Entradas:** Modelo de coneptos de negocio y el modelo de casos de uso
	- **Salida: Modelo de tipos de negocio**, un artefacto de especificación importante
		- Se desarrollan los modelos de información de las interfaces a partir de él
## Entradas (salida del flujo de trabajo de requisitos)
- El **modelo de conceptos de negocio** enumera los conceptos importantes en el dominio del problema y muestra las relaciones entre ellos
- Los **casos de uso** aclaran el límite del software identifican a los actores que interactúan con el sistma y describen esas interacciones
- Los artefactos se refinarán y completarán la especificación en flujos subsecuentes
- El énfasis aquí es el descubrimiento:
	- ¿Qué **información** necesita ser manejada?
	- ¿Qué **interfaces** se necesitan para manejarla?
	- ¿Qué **componentes** se necesitan para proveer dicha funcionalidad?
	- ¿Cómo **encajarán** entre sí dichos componentes?
- El sistema se divide en dos
	- Capa de servicios de sistema
	- Capa de servicios de negocio
## Identificación de interfaces (del sistema)
- El diálogo del sistema implementa la lógica de casos de uso -> su descripción
	- Se separa en pasos, se utilizan para identificar las **operaciones** del sistema
	- En cada paso, el sistema debe proporcionar 0, 1 o n operaciones para cumplir sus responsabilidades
	- **No** es un mapeo uno a uno
- Las **interfaces de sistema** y sus operaciones iniciales emergen del análisis del modelo de casos de uso
	- Estas especificaciones detallan cómo los usuarios o sistemas externos interactúan con el sistema en desarrollo
	- Están derivados principalmente de los casos de uso
	- Recordar que la propuesta se centra en el "lado del servidor" de un sistema
- En tiempo de ejecución
	1. El usuario inicia un CU, la lógica de éste hace que se cree y muestre la GUI adecuada
	2. El usuario es guiado a través de los pasos del CU por su lógica
	3. Siempre que la lódiga del CU necesita información para mostrar o notificar al sistema de una acción del usuario, llama a la operación apropiada en la lógica del paso del CU
	4. Esta operacón, a su vez, utiliza operaciones definidas en la lógica de negocio para realizar su función

- El **modelo de conceptos de negocio** nos centra en la información y procesos que el sistema gestionará
	- Visión del mundo -> Punto de vista humano
- El **modelo de tipos de negocio** es una refinación
	- Se utiliza para desarrollar las interfaces de negocio
	- Visón del mundo -> punto de vista del sistema
- Las operaciones de componentes realizan su trabajo invocando operaciones de interfaces de negocio
## Modelo de tipos de negocio
- El modelo de tipo de negocio (Business Type Model) contiene información específica que el sistema necesita
- Los tipos de negocio pueden ser físicos (por ej, un producto) o no físicos (ej. un pedido)
## Identificación de interfaces de negocio
- Son abstracciones de la infomración que debe administrar el sistema
- Proceso:
	1. Producir una copia del modelo de conceptos de negocio y ajustarlo al alcance. Será el modelo de tipos de negocio
	2. Refinar el modelo de tipos de negocio y especificar las reglas de noegocio adicionales con restricciones
	3. Identificar los tipos de negocio principales
	4. Crear interfaces de negocio para los tipos principales y agrégalas al modelo
	5. Rerfinar el modelo para indicar las responsabilidades de la interfaz de negocio
- Deben reflejar las reglas de negocio
- Identificar los tipos «Core»
## Definición de reglas de negocio
- Es importante tener un "Business Type Model" preciso
- Las reglas de negocio proporcionan una base precisa sobre la cual trabajar
- Las restricciones iniciales se escriben a menudo en lenguaje natural
	- Eventual creación de especificaiones formales en etapas prosteriores
## Identificación de Core Types
- Ahora se necesita decidir qué Tipos de Modelo de Tipos del negocio son los centrales
- Los Core Types nos permiten identificar qué información es dependiente y cuál puede permanecer independiente
- Este proceso nos guiará hacia la asignación de responsabilidades de información a interfaces
## Core Type
- Posee un identificador de negocio, usualmente independiente de otros identificadores
- Existencia independiente: no tiene asociaciones obligatorias excepto con un tipo categorizador
	- Un tipo categorizador es aquel cuyas instancias categorizan o clasifican las instancias de otro tipo
	- No es una asociación de agregación o composición, simplemente una de clasificación
	- Ejemplo: RoomType categoriza a Room, pero Room no es un 'Core Type' debido a su asociación obligatoria con Hotel
- Se les asocia una interfaz
### Representación en UML
- Se indican en el modelo de tipos de negocio con el estereotipo «Core»
- UML no permite que los elementos del modelo tengan más de un estereotipo por lo que «Core» engloba «type»
## Creación de las interfaces de negocio
- Las interfaces de negocio son esenciales para gestionar información de los Core Types y sus tipos dependientes
- Generalmente creamos una interfaz de negocio para cada Core Type en el modelo de tipo de negocio
- Referidas como interfaces de gestión o 'manager interfaces'
## Asignación de responsabilidades a asociaciones
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
## En resumen
- Las interfaces del sistema se crean directamente en la carpeta de especificaciones de interfaz
- Las interfaces de negocio iniciales se crean en el modelo de tipos de negocio
- A continuación, se crean especificaciones de interfaz de negocios duplicadas y separadas en la capreta de especificaciones de interfaz
- No es necesario conservar el modelo de tipo de negocio pero se sugiere hacerlo pues brinda una vista integrada
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