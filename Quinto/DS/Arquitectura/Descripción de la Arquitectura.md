Todo sistema tiene una arquitectura y diseño, puede no tener un documento
## Principios y conceptos
### Principio central
Todo sistema tiene una arquitectura, se documente o no.
**Elementos clave**
- **Elemento arquitectónico:** Pieza fundamental del sistema
- **Stakeholder:** individuo / equipo / organización
### Propósito de la arquitectura
- Las arquitecturas existen para satisfacer necesidades de los stakeholders
	- Un huésped es un stakeholder, qué necesita para satisfacer sus necesidades
- Una buena arquitectura atiende sus concerns y equilibra conflictos aceptablemente
### Descripción de la Arquitectura (AD)
- **AD:** Conjutno de productos que comunican y demuestran que atiende los concerns
- No bastea con "tener" arquitectura: se requiere **comunicarla eficaz y consistentemente**
### Por qué usar múltiples vistas
- Es imposible capturar funcionalidad y cualidades de un sistema complejo en un único modelo comprensible
- Se describe mejor con un **conjutno de vistas interrelacionadas** que en conjunto, muestran que se cumplen los objetivos
## Vista y Viewpoint
- **Vista:** Representación de aspectos estructurales que muestra cómo la arquitectura atiende ciertos concerns para ciertos stakeholders
- **Regla de oro:** Incluye en cada vista solo lo que ayuda a explicar la arquitectura o a demostrar el cumplimiento de objetivos
- **Viewpoint:** patrones/plantillas/convenios para construir un tipo de vista; define stakeholders, concerns y lineamientos
## Perspectivas y tácticas
- **Perspectiva arquitectónica:** actividades, tácticas y guías para asegurar un **conjunto de atributos de calidad** a través de varias vistas
- **Táctica:** Enfoque probado para apoyar un **atributo de claidad** (p.ej., caché para rendimiento, redundancia para disponibilidad)
## ASR
- Requisitos que por su impacto pueden cambiar o darle forma a la arquitectura, suelen ser requisitos de calidad pero también pueden ser requisitos funcionales
- Identificar ASR guía qué vistas y decisiones deben quedar explícitas en la AD
## Contexto de definición - Modelo de los Tres Picos
- **Requisitos** proporcionan el contexto: alcance, funcionalidad  y cualidades deseadas
- **Definición de arquitectura** revela omisiones/inconsistencias y costes; realimenta a requisitos
- **Construcción** se planifica en incrementos; valida/retroalimenta la arquitectura durante todo el ciclo
## Esquema mínimo de tu AD (entregable de proyecto)
- **Introducción y alcance:** contexto del sistema y objetivos del negocio
- **Stakeholders y concerns:** tabla clara de interesados y sus preocupaciones
- **Principios arquitectónicos:** enunciados que guían decisiones (presentes o estado futuro deseado)
- **Vistas** (una sección por vista):
	- Viewpoint
	- Objetivo de la vista
	- Elementos y relaciones
	- Evidencia
- **Perspectivas (atributos de calidad):** tácticas usadas y su proyección en varias vistas
- **ASR:** lista y trazabilidad a vistas/decisiones
- **Decisiones de diseño:** decisiones clave y su justificación frente a concerns en conflicto
### Convenciones por vista (plantilla sugerida)
Para cada vista incluye:
- Stakeholders y concerns atendidos por la vista
- Viewpoint palicado (patrones/plantillas/reglas)
- Alcance y elementos modelados; relaciones y supuestos
### Checklist de calidad de la AD
- ¿Cada vista aporta **valor** a stakeholders? (evita información irrelevante)
- ¿Los concerns están cubiertos y balanceados? (explica tradeoffs)