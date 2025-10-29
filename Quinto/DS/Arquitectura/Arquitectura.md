"Architecture is about the important stuff…whatever that is" Ralph Johnson

"All architecture is design, but not all design is architecture" Grady Booch

"La arquitectura de software de un sistema es el conjunto de estructuras necesarias para razonar acerca de un sistema, que comprenden los elementos de software, las relaciones entre ellos y las propiedades de ambos." Software Architecture in Practice
### Elemento Arquitectónico
- Definición:
	- Un elemento arquitectónico es una unidad fundamental en la arquitectura de un sistema
	- Puede ser un componente, un conector o un módulo, entre otros
- Tipos de Elementos Arquitectónicos
	- **Componentes**: Partes principales de un sistema que realizan funciones específicas. Ejemplo: Un servicio en una arquitectura de microservicios
	- **Conectores**: Mecanismos de comunicación entre componentes. Ejemplo: Un bus de datos o una API REST
	- **Módulos**: Agrupaciones lógicas de componentes y conectores que forman una unidad más grande del sistema. Ejemplo: Un subsistema o un paquete de software.
### La arquitectura es…
Un conjunto de estructuras de software
- La arquitectura involucra múltiples estructuras de software
- Una estructura = conjunto de elementos ´una relación
- Ninguna estructura única define toda la arquitectura
- Categorización de estructuras:
	- Componentes y conectores
	- Módulos
	- Asignación
- No todas las estructuras son Arquitectónicas:
	- Ej: Líneas de código fuente con la letra "z" (no es arquitectura)
- Criterios para Estructuras Arquitectónicas:
	- Soportan el razonamiento sobre el sistema
	- Relevantes para las preocupaciones (concerns)
### La arquitectura es una abstracción
- **Composición de la Arquitectura**
	- Estructuras = Elementos + Relaciones
	- Arquitectura = Elementos de Software y cómo se relacionan
- **Omisión Intencional**
	- Se omiten detalles no útiles para el razonamiento sobre el sistema
- **Arquitectura como Abstracción**
	- Selecciona ciertos detalles y suprime otros
### Interfaces y división
- **Interacción de elementos**
	- A través de interfaces que dividen detalles en públicos y privados
- **Enfoque Arquitectónico:**
	- Se centra en los detalles públicos
	- Los detalles privados no son parte de la arquitectura 
## Abstracción en Arquitectura
- **Esencial para:**
	- Manejar la complejidad del software
	- Maximizar nuestra capacidad cognitiva limitada
- **Con esto la arquitectura**
	- Facilita la comprensión del sistema sin necesidad de conocer cada detalle

**Vistas**
- **Analogía con la Naturaleza:**
	- Diferentes especialistas tienen distintas perspectivas sobre las estructuras del cuerpo humano (neurología, ortopedia, dermatología, etc.)
	- Estas perspectivas juntas describen lal "arquitectura" del cuerpo humano
- Analogía con la Construcción:
	- Profesionales como electricistas y plomeros se enfocan en diferentes estructuras de un edificio
### Tres Tipos de Estructuras Arquitectónicas
- **Estructuras de componentes y Conectores (C&C):**
	- Se enfocan en la interacción de los elementos en tiempo de ejecución para realizar las funciones del sistema
	- Componentes: Unidades principales de computación con comportamiento en tiempo de ejecución (servicios, clientes, servidores, etc.)
	- Conectores: Vehículos de comunicación entre componentes (llamadas sincronización, pipes, etc.)
	- Preguntas clave:
		- ¿Cuáles son los principales componentes en ejecución y cómo interactúan?
		- ¿Cómo progresa la información a través del sistema?
		- ¿Qué partes pueden ejecutarse en paralelo?
		- ¿Puede cambiar la estructura del sistema durante la ejecución?

- **Estructuras de Módulos:**
	- Dividen el sistema en unidades de implementación llamadas módulos. Ejemplos: Clases, paquetes, capas.
	- **Características de los Módulos:**
		- Muestran cómo el sistema se estructura en unidades de código o datos
		- Asignación de responsabilidades computacionales específicas
		- Base para asignaciones de trabajo en equipos de programación
	- **Relaciones entre Módulos:**
		- Tipos: "Usa", generalización (herencia), "es parte de"
	- **Preguntas clave:**
		- ¿Cuál es la responsabilidad funcional principal de cada módulo?
		- ¿Qué otros elementos de software puede usar un módulo?
		- ¿De qué otros módulos depende?

- **Estructuras de Asignación:**
	- Mapean estructuras de software a estructuras no relacionadas con software (organización, entornos de desarrollo, etc.)
	- **Características de las Estructuras de Asignación:**
		- **Mapeo a Infraestructura Física:**
			- Relacionan componentes de software con hardware específico (por ejemplo, procesadores o servidores)
		- **Mapeo a Estructuras Organizacionales:**
			- Asignan módulos a equipos de desarrollo o localidades físicas
		- **Mapeo a entornos de Desarrollo**
			- A qué ambientes su desarrollo, prueba y construcción están destinados en particular

	- **Preguntas clave:**
		- ¿En qué procesador(es) se ejecuta cada elemento de software?
		- ¿Cómo se asignan los elementos de software a los equipos de desarrollo?
		- ¿Qué impacto tiene el entorno de ejecución en el rendimiento del sistema?
### Fenómeno Big Ball of Mud
Hay que evitar una **Big Ball of Mud**, al cual se llega cuando no se pasa por un diseño de arquitectura
### Ley de Conway
"Cualquier organización que diseña un sistema producirá un diseño cuya estructura es una copia de la estructura de comunicación de la organización". Melivn E. Conway (1967)

"La estructura de cualquier sistema diseñado por una oranización es isomórfico a la estructura de la organización". Yourdon & Constantine (1979)

"Si tienes cuatro grupos trabajando en un compilador, obtendrás un compilador de cuatro pasos". Eric S. Raymon (1996)

"Si las partes de una organziación no reflejean escencialmente las partes de un producto, o si las relaciones entre las organizaciones no reflejan las relaciones entre las partes del producto, entonces el producto estará en problemas… Por lo que hay que asegurarse de que la organización es compatible con la arquitectura del producto"
### Reflexión
- Al estructurar o reestructurar equipos, considera cómo esta estructura puede influir en la arquitectura del software que producen
- Aprovecha la Ley de Conway en lugar de luchar contra ella