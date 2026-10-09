```table-of-contents
title: 
style: nestedList # TOC style (nestedList|nestedOrderedList|inlineFirstLevel)
minLevel: 0 # Include headings from the specified level
maxLevel: 2 # Include headings up to the specified level
include: 
exclude: 
includeLinks: true # Make headings clickable
hideWhenEmpty: false # Hide TOC if no headings are found
debugInConsole: false # Print debug info in Obsidian console
```

<div class="page-break" style="page-break-before: always;"></div>


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

## OOHDM

Es una metodología OO que porpone un proceso de desarrollo de cinco fases donde se combinan notaciones gráficas UML con otras propias de la metodología.

Inicialmente se utilizaba para el desarrollo de aplicaciones de hipermedia básicas, pero conforme fue evolucionando la web, la metodología se adaptó para apps web más complejas y con mayor interacción entre usuarios como sitios educativos, motores de búsqueda, plataformas de entreteminiento, etc.

OOHDM utiliza modelos especializados como: conceptual, navegación e interfaz de usuario teniendo como objetivo simplificar y hacer más eficaz el diseño de aplicaciones.

Los modelos anteriormente mencionados se enmarcan en 5 etapas de desarrollo que propone la metodología, las cuales son:
- obtención de requisitos
- diseño conceptual
- diseño navegacional

### Obtención de requisitos

Se pueden aplicar varias técnicas de levantamiento de requisitos con el objetivo de conocer los actores y funcionalidades que debe contener la aplicación, posteriormente se deberán extraer y modelar detalladamente los **casos de uso** a desrrollar.

### Diseño conceptual

El diseño conceptual se realiza a través del modelamiento de **diagramas de clases** que contengan las clases, relaciones y subsistemas que intervienen en cada funcionalidad.

### Diseño navegacional

Se utiliza para representar los diferentes caminos que puede ejecutar la aplicación a nivel general o dependiendo del tipo de usuario en caso de que aplique.

Suelen utilizarse diagramas de componentes:
![[Captura de pantalla 2026-10-05 a la(s) 11.25.39 a.m..png]]

### Diseño de interfaz abstracta

Con base en el diseño navegacional, es necesario especificar las interfaces de usuario que se visualizarán en la app web.

Un aspecto muy importante que se debe considerar en esta etapa es cuidar que el diseño de las interfaces de usuario coincidan con el diseño navegacional.
### Implementación

Consiste en realizar la codificación de la página web ya sea de forma nativa o mediante algún gestor de contenido. Durante la implementación se deben respetar los modelos previamente diseñados y se deben incluir etapas de pruebas unitarias, de integración o de sistema (dependiendo la complejidad de la aplicación web).

## SOHDM

Permite capturar las necesidades del sistema proponiendo el uso de escenarios. SOHDM parte de un diagrama donde se identifican las entidades externas capaces de comunicarse con el sistema, es una metodología muy parecida a la metodología OOHDM diferenciadas por la utilización de escenarios.

SOHDM propone el uso de escenarios por cada evento diferente con el fin de conocer cuáles son las necesidades del sistema.

Cada escenario simboliza el proceso de interacción que existe entre el usuario y el sistema, en este proceso se detallan los objetos involucrados, el flujo de actividades y las operaciones realizadas.

A partir de cada escenario se puede obtener el modelo conceptual, el mismo que se refleja en un diagrama de clases.

En cuanto a los procesos de gestión de desarrollo de software o ciclo de vida se divide en 6 fases:
![[Captura de pantalla 2026-10-05 a la(s) 11.40.46 a.m..png]]

### Análisis del dominio

Establece los límites de la aplicación que se desarrollará y se los representa mediante un **diagrama de flujo**. Además, se hace uso de los **SACs** (Scenarios activity charts) que no son más que escenarios donde se determina los requisitos de la aplicación.

### Diseño de las vistas

Se representan las vistas por medio de unidades de navegación, cada vista agrupa información de las clases de la aplicación.

![[Captura de pantalla 2026-10-05 a la(s) 11.53.32 a.m..png]]

### Implementación

Se genera la interfaz de la aplicación, la lógica de negocio y el esquema de bases de datos.

### Construcción

Desarrollo de la aplicación final, la cual cumple con todas las necesidades y requisitos que fueron establecidos inicialmente por los usuarios.

## WAE

Es una extensión de UML que no se enfoca en OO sino en elementos/componentes Web.

Utiliza una serie de estereotipos que constituyen a los elementos WEB, los mismos que pueden ser formularios, enlaces u otras páginas web, entre otros.

Cabe destacar que a pesar de la WAE contribuyó con el modelamiento de las apps web tradicionales, aún requiere estereotipos y relaciones donde se refleje la interactividad, cookies, comunidades móviles, redes sociales y otras notaciones que se aplican hoy en día para las apps web.

### Modelado de negocio

Comprende el flujo de actividades que se realizan dentro de la organización, se describen cuáles son los departamentos, emprelados y la interacción que existe entre ellos, dicho modelo se puede expresar con un **diagrama de flujo de procesos**.

![[Captura de pantalla 2026-10-05 a la(s) 12.12.24 p.m..png]]

### Captura de requisitos

Se deben identificar los requisitos necesarios para el desarrollo de la aplicación, así como los correspondientes casos de uso derivados de los requisitos.

### Análisis y diseño

Con base en los requisitos que se obtuvieron en la fase anterior se deben generar los artefactos necesarios para lograr un entendimiento mucho más claro de lo que se pretende desarrollar en el sistema.

Como productos de esta fase se crean **diagramas de clases**, de componentes, robustez y secuencia.

Los estereotipos que modelan la arquitectura web son:
`<<server page>>, <<client page>>, <<form>>, <<link>>, <<frameset>>, <<builds>>`. 

Permite representar en el diagrama de clases qué páginas se generan en el cliente y cuales en el servidor.

### Implementación

Se lleva a cabo la codificación del sistema, así como se ejecutan las pruebas que garanticen el correcto funcionamiento de la aplicación web.

## IWEB

Es una metodología que se enfoca en la creación de aplicación y sistemas web de alta calidad, basándose en principios científicos de ingeniería. Dichas aplicaciones hacen posible el acceso desde ordenadores remotos.

Define un proceso de desarrollo incremental y evolutivo, generalmente los modelos en las primeras versiones pueden ser modelos abstractos o definidos en papel o un prototipo rápido y durante las últimas iteraciones se producen versiones cada vez más completas del sistema.

Su origen se remonta a principios del año 2000, cuando Roger S. Pressman publicó un libro llamado: "Ingeniería Web: un enfoque práctico". En su libro Pressman establecía los fundamentos de la metodología IWEB tomando en cuenta las características propias de las apliaciones web:
- Cambios frecuentes en requisitos
- Entregas rápidas e incrementales
- Priorización de la usbailidad y la experiencia del usuario
- Integración con diferentes tecnologías y sistemas de terceros o APIs
- Alto volumen de usuarios (las aplicaciones web cada vez se hacían más masivas)

**Fases:**
1. Formulación
2. Planificación
3. Análisis
4. Ingeniería
5. Generación de páginas
6. Pruebas
7. Evaluación del cliente
### Formulación

En esta primera fase se identifican los objetivos, metas, se establece el alcance de la aplicaión y de la entrega a realizar.

También es importante verificar si es necesario o no, e identificar quién la va a utilizar con el objetivo de definir el perfil de usuario.

Los artefactos que se pueden implementar son:
- System Request
- Lista inicial de requisitos
- Diagrama de contexto

### Planificación

Se debe estimar el costo y tiempo general del proyecto, así como también planes de contingencia debido a posibles riesgos, el ámbito y describir la calidad y gestión de la aplicación en cuanto a cambios.

Los artefactos que se pueden implementar son:
- Plan de proyecto que incluye:
	- Cronograma de actividades
	- Recursos humanos o equipo de trabajo
	- Recursos materiales o herramientas de desarrollo
- Plan de riesgos
- Plan de gestión de configuración (control de versiones, repositorios)

### Análisis

Se deben establecer los requisitos de diseño y técnicos, también se analiza el contenido del mismo, su iteración, funcionalida y configuración.

Los artefactos que se pueden implementar son:
- ERS (SRS)
- Casos de uso o historias de usuario
- Diagramas de clases (en queso de que se utilice POO)

### Ingeniería

Es la fase con mayor peso dentro de la metodología, en sí misma se encarga de definir diferentes niveles de diseño.

- **Diseño arquitectónico:** Este diseñ se realiza en paralelo con el contenido, en los cuales se centra en el diseño de la estructura global del sistema, así como en las configuraciones del diseño y planitllas

Los artefactos que se pueden iplementar son:
- Diagrama de Componentes
- Diagrama de Despliegue

- **Diseño del contenido y la producción:** Son tareas que se llevan a cabo por personas no técnicas que se llevan a cabo por personas no técnicas, el propósito de éste, es el de diseñar o adquirir todo el contenido de texto, gráfico, imágenes y video que se van a utilizar en el sistema

Los artefactos que se pueden iplementar son:
- Guía de estilo
- Imágenes o recursos audiovisuales

### 4. Ingeniería

Es la fase con mayor peso dentro de la metodología, en si misma se encarga de definir diferentes niveles de diseño:

- **Diseño de la interfaz:** En este diseño se realizan todos los ajuestes para que la interfaz de usuario sea la ideal, evitando factores como que el usuario abandone el sitio web, el tamaño del texto, etc.
    
    Artefactos que pueden generarse en esta etapa:
    
    - Diseño de interfaz de usuario de alta fidelidad. (Utilizando los recursos generados en la etapa de diseño y producción de contenido)

### Generación de páginas

Se integran los diseños de la etapa anterior a través de herramientas como lenguajes de programación y etiquetado que sirvan como base la construcción de la aplicación Web. También es importante que las páginas ssigan el diseño arquitectónico definido, y representen la navegación sobre todo en la elaboración de webs dinámicas.

Artefactos que pueden generarse en esta etapa:

- Código fuente
- Scriptas de base de datos
- Pruebas unitarias automatizadas
- Documentación técnica del código

### Pruebas

Se debe probar la lógica de negocios aplicada en el sistema, así como las verificaciones de entradas y salidas de datos con el fin de descubrir errores de funcionalidad, comportamiento o rendimiento

Artegactos que pueden generarse en esta etapa:

- Plan de pruebas, que incluya casos de prueba manuales y/o automáticos.
- Matriz de trazabilidad de requerimientos-pruebas
- Resultados de las pruebas.

### Evaluación del cliente

En esta etapa es donde se realizan todas las correcciones y cambios que se detectaron en la etapa de pruebas y se integran al sistema para el siguiente incremento, de tal modo que se asegure la satisfación por parte del cliente, según los requerimientos solicitados

Artefactos que pueden generarse en esta etapa:

- Versión beta/demo funcional
- Informe de retroalimentación del cliente
- Registro de cambios o solicitudes de mejora (En caso de que aplique)
- Acta de aceptación (parcial o total)

### Conclusiones

Es una de las primeras metodologías especializadas en apps web, ofrece un marco de trabajo estructurado y con muchos elementos de diseño y control para garantizar aplicaciones con alta calidad.

SIn embargo, puede resultar compleja de implementar en equipos de trabajo poco experimentado o que tienen recursos limitados (humanos y/o materiales).

Puede ser muy útil en proyectos donde se necesita rigor, calidad y organización, por ejemplo:
- Aplicaciones web empresariales
- Aplicaciones web de alta demanda (banca en línea, comercio electrónico, etc.)
- Aplicaciones web que gestionen recursos críticos (Área de la salud, centrales eléctriccas, sistemas de soporte vital)