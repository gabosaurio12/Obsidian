# Sesión de estudio 20-08
## Clean Architecture - Robert C. Martin
The goal of software architecture is to minimize the human resources required to build and maintain the required system
La medida de la cualidad del diseño es simplemente la cantidad de esfuerzo requerido para alcanzar las necesidades del cliente. Si ese esfuerzo es bajo y se mantiene así durante el ciclo de vida del sistema, el diseño es bueno. Si crece con cada nuevo lanzamiento, el diseño es malo.
## Dudas
- **La arquitectura que se menciona en Clean Architecture de Robert C. Martin es la misma que vemos en la clase del Dr Ocharán?** Sirve, no es de los principales pero no está mal
- **Aquí menciona que no hay diferencia con el diseño, que son simplemente una continuación de decisiones que se toman a diferentes niveles de abstracción, tal vez sí son lo mismo.** 
- **¿Es recomendable leer el libro?** Sí
# Code Complete - Steve McConnell
## Capítulos a leer
2 Metáforas para un mejor entendimiento del desarrollo de software ... 9
- **Buscar este capítulo en línea y estudiar todas las metáforas, preguntar al Revo si tiene el libro XD**
8 Programación defensiva ... 187
9 El proceso de programación con pseudo código ... 215
## Metáforas
### Software Penmanship: Writing Code
Una de las metáforas que peor han envejecido, promueve o recomienda escribir el código como si fuera una carta, donde vamos descubriendo lo que queremos hacer en el trayecto, lo que da como resultado una pila de bocetos, esto se traduce en aumento de costos y planeación y diseño pobre
## Pseudocodifica como un Pro
El pseudocódigo nos ayuda a tener un diseño antes de codificar, debemos hacerlo a un alto nivel, pero que no sea tan alto que al momento de codificar sea difícil. Lo ideal es bajarlo hasta que sea más fácil escribir código que pseudocódigo.
El pseudocódigo no debe tener sintaxis de un lenguaje.
### Checklist: El PPP (Proceso de Programación de Pseudocódigo)
- [ ] Los prerequisitos están siendo satisfechos?
- [ ] Definiste el problema que la clase resolverá?
- [ ] El diseño de alto nivel es suficientemente claro como para que la clase y cada una de sus rutinas tengan buenos nombres?
- [ ] Pensaste en cómo probar la clase y cada una de sus rutinas?
- [ ] Tomaste en cuenta la eficiencia sobre todo en términos de interfaces estables e implementaciones legibles o principalmente en términos de cumplir los presupuestos de recursos y de velocidad?
- [ ] Has revisado las bibliotecas estándares y otroas bibliotecas de código para rutinas o componentes aplicables?
- [ ] Has revisado libros con referencias en busca de algoritmos útiles?
# C# Design Patterns A Tutorial - James W. Cooper
# Capítulos a leer
3 Writing Windows C# Programs ... 29-31
11 The Singleton Pattern ... 123
12 The Façade Pattern ... 199
14 The Adapter Pattern ... 157
26 The Memento Pattern ... 301
27 The Observer Pattern ... 313
## Writing Windows C# Programs
### Classes and Namespaces in C#
#### Namespace
Un namespace es un grupo separado de clases y nombres de métodos, los cuales son reconocidos por el compilador después de declarar el método.
El namespace más común es el System namespace, es importado por default sin tener que declararlo. Contiene métodos y clases fundamentales que C# usa para acceder a clases básicas como Application, Array, Console, Exceptions, Objects y objetos standard como el byte, bool y string. Con un programa sencillo podemos escribir un mensaje:

class Hello {
	static void Main(string[] args) {
		Console.WriteLine ("Hello C# World");
	}
}
## Dudas
- Investigar cuándo usar los paréntesis continuos y con saltos de línea en C# (debe ir en el estándar de codificación)

# Artificial Intelligence A Modern Approach - Stuart J. Russel & Peter Norvig
## Capítulos a leer
1.1 What is AI? ... 1
1.3 The History of Artificial Intelligence ... 16
2 Intelligent Agents 32
3 Solving Problems by Searching 59

# Notas
- Buscar un buen libro de redes
	- Fundamentos de Redes - Bruce A. Hallberg
- Repasar la filosofía de Aristóteles y Descartes
	- ¿Qué es el pensamiento?
	- ¿Qué es la inteligencia?
	- ¿Qué es razonar?
	- ¿Cuál es un argumento válido?
# Investigar
- Métodos de evaluaciones de arquitectura

# ### Software Architecture in Practice - Lenn Bass, Paul Clements, Rick Kazman
## Capítulos a leer
1. Introduction
2. Quality Attributes
## Notas
- La arquitectura de software es el conjunto de estructuras que se deben razonar de un sistema. Estas estructuras están compuestas por elementos, las relaciones entre ellos y las propiedades de estos
- La arquitectura consiste en crear estructuras que permitan el razonamiento
- Hay tres categorías útiles en el diseño de arquitectura:
	- Estructuras de componentes y conectores
	- Estructuras de modelo
	- Estructuras de asignación
- Una estructura es arquitectura si permite razonar sobre el sistema y sus propiedades
- La arquitectura es diseño, pero no todo el diseño es arquitectura