Su objetivo es mostrar la vista física del sistema, visualizando cómo el software es asignado y operado en hardware específico y la comunicación entre elementes
- **Vista física:** Enfocada a los elementos físicos del sistema, como archivos ejecutables y hardware
- **Sistema:** En este contexto, comprende el software creado y el hardware; y el software que permiten que tu software se ejecute
## Caso de uso principales de los diagramas de despliegue
1. Especificar el despliegue de artefactos de software
2. Especificar la localización de entidades en tiempo de ejecución
## Artefactos
- **Definición -** Un clasificador que representa alguna entidad física, una pieza de información que se utiliza o se produce mediante un proceso de desarrollo de software o mediante la implementación y operación de un sistema
- **Ejemplos**
	- Archivos ejecutables
	- Archivos de biblioteca, como .dlls (o archivos .jar)
	- Archivos fuente como .java o .cpp
### Representación
Clasificador rectangular con el estereotipo para artefacto (puede no llevar el estereotipo)
![[Captura de pantalla 2025-09-08 a la(s) 12.20.20 p.m..png|164x91]]
### Manifestación de un componente como artefacto
- Esta relación se muestra en un diagrama por separado para no tener un diagrama desordenado
## Nodo
- **Definición -** Un recurso computacional disponible durante tiempo de ejecución en el que los artefactos son desplegados para su ejecución
- **Ejemplos**
	- Hardware: Cliente de escritorio, impresora, servidor de procesamiento, servidor de base de datos, otros recursos
	- Entornos de ejecución: SO, Contenedor, servidor web, servidor de aplicaciones
### Representación
Se representa con un cubo con el nobre del nodo
![[Captura de pantalla 2025-09-08 a la(s) 12.23.35 p.m..png|143x142]]
#### Nodo de hardware
![[Captura de pantalla 2025-09-08 a la(s) 12.24.49 p.m..png|142x139]]
![[Captura de pantalla 2025-09-08 a la(s) 12.26.24 p.m..png|159x111]]
#### Nodo de entorno de ejecución
![[Captura de pantalla 2025-09-08 a la(s) 12.25.15 p.m..png|187x136]]
#### Nodos anidados
![[Captura de pantalla 2025-09-08 a la(s) 12.27.34 p.m..png|248x181]]

![[Captura de pantalla 2025-09-08 a la(s) 12.29.02 p.m..png|353x180]]
## Nodos Clases e instancias en UML
- **Nodo Clase:** Tradicionalmente se reefiere a computadoras de una red y es un tipo de recurso de cómputo disponible
	- **Cliente de escritorio:** En el que se ejecuta el componente de la interfaz de usuario
- **Nodo Instancia:** Nodo específico de una clase, etiquetado con el nombre de la instancia y la clase
	- **Instancia de nodo cliente de escritorio:** Utilizado por Jonathan para acceder al sistema de gestión de proyectos
## Caminos de comunicación
- **Definición:** Es una asociación que representa la comunicación genérica entre nodos, permitiendo el intercambio de señales y mensajes
- **Representación:** Se muestran como líneas sólidas entre nodos, sin indicar navegabilidad, asumiendo comunicación bidireccional
- En entornos físicos, representa **conexiones físicas** (por ejemplo, Ethernet)
- En entornos de ejecución representan **protocolos** específicos: Seleccionar el de nivel más alto
![[Captura de pantalla 2025-09-08 a la(s) 12.41.10 p.m..png|369x134]]
