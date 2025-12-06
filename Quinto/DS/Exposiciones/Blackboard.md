## Propósito
- Qué tipo de problema arquitectónico es el que resuelve
	- Problemas donde no existe un algoritmo único o predefinido
- Qué necesidades o atributos de calidad atiende
- En qué contextos o dominios se aplica mejor el estilo
## Estructura y comportamiento
- Estructura y comportamietno dinámica de ese estilo
- Componentes
	- Blackboard: Repositorio de datos central de la arquitectura. Mantiene el estado actual de la solución del problema a medida que vanza el proceso de razonamiento
	- Hipótesis: Los elementos de la solución que se construyen durante el proseo, si se rechazan son eliminadas del blackboard
	- Knowledge sources: Conocimiento especializado y operativo del sistema. Subsistemas separados e independientes, cada uno especializdo
- Conectores
- Flujo de información y control entre esos componentes
- Restricciones que impone ese estilo arquitectónico
## Impacto en los atributos de calidad
- Atributos que favorece
	- Extensibilidad
	- Mantenibilidad
	- Modificabilidad
- Atributos que debilita
	- Rendimiento
	- Confiabilidad
	- Facilidad de prueba/depuración
- Tácticas o decisiones de diseño que suelen acompañar a esos estilos arquitectónicos para equilibrar esos atributos
## Ejemplos reales de esos estilos
- Que sistemas, frameworks y productos utilizan ese estilo arquitectónico
	- IA
	- HEARSAY-II: Reconocimiento de voz (70s)
- Evidencia de la efectidad del estilo
## Variantes y combinaciones de ese estilo arquitectónico
- Hay variantes donde es distribuido
	- porque puede volverse un cuello de botella
### Hexagonal y Clean Arquitecture