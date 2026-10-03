Las metodologías de desarrollo de software surgen como una alternativa y marco de trabajo a partir de la complejidad que conlleva realizar un software, así como una respuesta ante los problemas que se presentaban en cada etapa de desarrollo, los cuales pueden ocasionar la construcción de software deficiente que no cumplía con estándares de calidad.

Actualmente exsiten un gran número de metodologías de desarrollo de software, cada una de ellas fue creada para solucionar un tipo de desarrollo o cubrir un determinado grupo de problemáticas presentadas, una forma de categorizarlas es con base en tu tipo de implementación, como se muestra a continuación:
- Metodologías tradicionales
- Metodologías ágiles
- Metodologías híbridas

---
## Metodologías tradicionales

Aparecieron en la década de los 60s, debido a un desarrollo de software totalmente manual con la necesidad de optimizar los procesos y objetivos propuestos en los proyectos de desarrollo, "se centran especialmente en el control del proceso, estableciendo rigurosamente las actividades involucradas, los artefactos que se deben producir, y las herramientas y notaciones que se usarán".

Algunos ejemplos son:
- Metodologías en cascada
- Metodologías de prototipos
- Metodología iterativa e incremental

## Metodologías ágiles

Las metodologías ágiles tienen como principal característica el ser flexibles y que puedden ser fácilmente modificadas en el caso que el equipo desarrollador o el proyecto lo requiera.

Estas metodologías permiten subdividir el proyecto en pequeñas fracciones y mediante esto ser desarrollado de manera autónoma en un corto lapso de tiempo estimado entre dos a seis semanas.

Son adaptables a los cambios de los requisitos por parte del cliente, entregan prototipos constantemente de tal manera que se garantiza un mejor producto. Fomenta el trabajo en equipo considerando al cliente parte del mismo.

Sin embargo, si no se presta suficiente atención al control, se puede llegar a sacrificar aspectos como la documentación formal y el análisis y diseño.

Algunos ejemplos de este tipo de metodologías son:
- Scrum
- Kanban
- XP (eXtreme Programming)

## Metodologías híbiridas

De sin número de metodologías que existen, ya sean ágiles o tradicionales, surgen las híbridas, como una combinación de ambas, pero en este caso rescatando las prioridades que se destacan las metodologías mencionadas con el propósito de crear un método **firme** y **flexible** que se adapte a todo tipo de proyectos para el desarrollo de software.

Como uno de los principales exponentes de estas metodologías se encuentra:
- Proceso Unificado esenciales, o "EssUP", es una metodología híbrida que compina RUP (Proceso Unificado de Rational) con SCRUM

---

## Metodologías web

Las metodologías para apps Web contienen fases para el desarrollo de software que pueden aumentar o disminuir dependiendo del método que utilicen, la mayoría de los métodos coinciden en las siguientes etapas:
- Diseño Conceptual: en esta sección se abarca temas relacionales a la especificación del dominio del problema, a través de su definición y las relaciones que contrae
- Diseño Navegacional: está enfocado en lo que respecta al acceso y forma en la que los datos son visibles
- Diseño de la presentación o diseño de la interfaz: se centra en la forma en la que la información va a ser mostrada a los usuarios, cabe mencionar en esta sección intervienen mayormente el cliente definiendo los requisitos y los usuarios definiendo cómo quieren interactuar con el sistema
- Implementación: es la construcción del software a partir de los artefactos generados en las etapas previas

Algunos ejemplos para proyectos muy pequeños (un solo cliente, o empresas con un sitio de pocos módulos, basicamente todo lo que se puede hacer en un CMS):
- WSDM (Web Site Design Method) - Método para el diseño de sitios web
- UWE (UML-BASED Web Engineering) - Ingeniería web basada en UML

Algunos ejemplos para proyectos ya de buen tamaño:
- **SOHDM (Scenario-Based Object-Oriented Hypermedia Design Methodology)** - Metodología de diseño de hypermedia basada en escenarios y orientada a objetos
- **OOHDM (Object Oriented Hypermedia Design Methodology)** - Metodología de diseño hypermedia orientada a objetos
- **WAE (Web Application Extension)** - Extensión de UML para Aplicaciones Web
- **IWEB (Ingeniería Web)**

## WSDM

Es una metodología netamente para apps web, hoy en día las apps deben desarrollarse en un lapos corto de tiempo siguiendo su estructura semántica del contenido y funcionalidad.

Es por esto que se le considera apropiada para apps web sencillas. SIn embargo, no es recomendada para la gestión de proyectos extensos o complejos, para lo cual se debe utilizar una metodología adicional que facilite el ciclo de vida del software.

### Fases

1. **Modelado de usuario:** Sirve para identificar a los posibles usuarios de la aplicación y la información que ellos requerirían de este sitio.
2. **Diseño conceptual:** Se desarrolla el modelado conceptual, organiza la información, se clasifica a los usuarios, se modela los objetos, se crea diagramas **entidad-relación** y crea el **diseño navegacional**. 
	- Cada diseño de navegación en el sitio web será diferente por cada perfil de usuario y por ende tendrá su propia perspectiva. Los entrgables de esta fase son el **modelo conceptual y diseño navegacional**.
3. **Diseño de implementación:** Se crea un diseño en base a los requisitos del usuario, este prototipo de interfaz del sitio web deberá tener una apariencia agradable, ser eficiente y seguro, así mismo aquí se especifican las restricciones de diseño, según lo que se estableció en el diseño conceptual.
4. **Implementación:** Se realiza la selección del entorno de desarrollo, construcción de la arquitectura, codificación y verificación de la funcionalidad total de la app web.

## UWE

UWE se define como una extensión de UML y es considerada como una extensión ligera, ya que solo incluye en su definición tipos, etiquetas de valores y restricciones para las características específicas del diseño web.

Las funcionalidades que cubren UWE abarcan áreas relacionadas con la web como la navegación, presentación, los procesos de negocio y los aspectos de adaptación.

**Modelo de contenido:** es un modelo conceptual para el desarrollo de contenido, generalmente se expresa en un *modelo relacional de datos* y tiene como objetivo definir qué datos se van a administrar o mostrar con el sistema web.

![[Septimo/Desasrrollo Web/imgs/image.png]]

**Modelo de usuario:** es modelo de navegación, en el cual se incluyen modelos estáticos y modelos dinámicos. Generalmente expresado como un *diagrama de clases*.

En este modelo es importante expresar qué usuario o usuarios interactúan con determinada información.

**Modelo de estructura:** en el cual se encuentra la presentación del sistema y el modelo de flujo de navegación. Este modelo se puede crear con un *modelo de componentes* que expresn la navegación entre las páginas o módulos del sistema.

Al ser una extención a nivel de modelado UWE se puede combinar también con metodologías más robustas que permitan establecer un flujo de trabajo como una metodología tradicional adoptando las fases de Requisitos, Análisis, Diseño, Codificación y Pruebas. O con metodologías ágiles como Scrum, donde la organización del flujo de trabajo se da con base en los Sprints.