¿Qué pasaría cuando necesites darle mantenimiento o remodelarlo?
- ¿Cómo se arreglan goteras, instalaciones eléctricas, ? A una choza
- A un edificio inteligente

Todo sistema de Software tiene una arquitectura y un diseño, pero no todos tienen un documento sobre estos.

**Diseñar no es hacer diagramas, el hacer diagramas es representar las decisiones de diseño que tomé**

Los componentes son los ladrillos de las arquitecturas.
## ¿Qué aprenderé?

- Conceptualización de estilos arquitectónicos
- Identificación de estilos arquitectónicos
- Elaboración de diseño de la arquitectura
## Bibliografía

- Software Architecture in Practice Fourth Edition (Bass, Clements, Kazman)
- Pattern Oriented Software Architecture A System of Patterns Vol 1 (Buschmann, Meunier, Rohnert, Sommerlad, Stal)
- Designing Software Architectures A Practical Approach Second Edition (Cervantes, Kazman)
- Documenting Software Architectures Views and Beyond Second edition (Clements, Bass, Bachman, …)
- Fundamentals of Software Architecture A Modern Engineering Approach 2nd Edition (Richards & Ford)
- UML Components A Simple Process for Specifying Component-Based Software (Clemens Szyperski)
- Component-Based Software Engineering Putting the Pieces Together
## Qué es el diseño

- **Disciplina**: Aplicación de conocimiento, información e imaginación para definir un sistema que cumpla funciones específicas con máxima eficiencia
- **Procesos**: Procedimientos que se realizan dentro de esa disciplina
- **Resultados**: El producto final resultante de aplicar la disciplina de diseño

Etapa del ciclo de vida: Fase en la que los procesos de diseño producen los resultados esperados

El diseño implica desafíos comunes
- Satisfacer necesidades de los involucrados
- Cumplir con presupuestos y plazos
- Manejar restricciones
- Trabajar con los recursos disponibles

El diseño de Software se realiza en tres etapas
1. **Diseño Arquitectónico**:
	- Diseño de la arquitectura general del sistema de software

2. **Diseño de Alto Nivel**:
	- Diseño orientado externamente del sistema y sus componentes

3. **Diseño Detallado**:
	- Diseño interno, con un enfoque en los detalles que permiten la construcción del sistema

## ¿Qué es la Arquitectura de Software? PE

- La arquitectura de software es el conjunto de estructuras necesarias para razonar sobre el sistema, que incluyen elementos de software, relaciones entre ellos y sus propiedades. Bass et al. (2021)

- ORM es un patrón arquitectónico

## Importancia de la Arquitectura

- Puente entre los objetivos del negocio y el sistema final
- Permite analizar y documentar decisiones de diseño
- Impacta directamente en atributos de calidad
- Existen muchas propiedades de calidad posibles en un sistema

## Atributos de calidad

- Availability -> Disponibilidad

- Capacidad del sistema de estar operativo cuando se necesita, incluso frente a fallos

- Deployability -> Facilidad de despliegue

- Qué tan sencillo y rápido es poner nuevas versiones en producción sin interrumpir el servicio

- Energy efficiency -> Eficiencia energética

- Uso óptimo de recursos energéticos por parte del software y la infraestructura

- Integrability -> Facilidad de integración

- Qué tan fácil es integrar el sistema con otros sistemas, APIs o plataformas externas

- Modifiability -> Facilidad de modificación

- Qué tan fácil es realizar cambios en el sistema (funcionalidades, correcciones, mejoras) sin introducir errores

- Performance -> Rendimiento o Desempeño

- Capacidad de responder dentro de tiempos aceptables bajo distintas cargas

- Safety -> Protección

- Capacidad del sistema de evitar condiciones peligrosas o daños físicos al entorno o a las personas

- Security -> Seguridad (ciberseguridad)

- Protección frente a accesos no autorizados, modificaciones indebidas y ataques

- Testability -> Facilidad de prueba

	- Qué tan fácil es diseñar y ejecutar pruebas para verificar el funcionamiento del sistema

## Arquitectura y Mantenimiento

- La arquitectura no solo organiza, también facilita o dificulta el mantenimiento
- Sistemas con mala arquitectura: cambios costosos, deuda técnica, riesgos en operación.
- Sistemas con buena arquitectura: adaptables, escalables, resistentes a fallas

## Arquitectura vs Diseño

- Arquitectura = decisiones de alto nivel que permiten razonar sobre el sistema (estructuras, relaciones, propiedades)
- Diseño detallado = decisiones locales, implementaciones específicas
- Toda arquitectura es diseño, pero no todo diseño es arquitectura
- El DAO Es más arquitectura que diseño

Arquitectura -> Stratégica

Diseño -> Táctico