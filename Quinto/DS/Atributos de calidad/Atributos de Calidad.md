Los *atributos de calidad* son las *propiedades medibles o verificables* de un sistema que se utilizan para indicar *qué tan bien éste satisface las necesidades de sus interesados*
- Han sido objeto de estudio por lo menos desde 1970s
- Existe una gran variedad de taxonomías y definiciones cada uno tiene su propia comunidad de investigación y practicantes
- Desde la perspectiva de un arquitecto, existen tres problemas con los atributos del sistema
- Similares a los grupos taxonómicos
## Los atributos de calidad...
- Permiten expresar la calidad de manera objetiva
- Evitan la ambigüedad del término "calidad" en su uso informal
- Requieren ser *elicitados, especificados , priorizados y validados* adecuadamente
- Existen dos categorías de atributos de calidad:
	- Los que describen una característica del sistema en **tiempo** de **ejecución**
		- Como disponibilidad, desempeño o usabilidad
	- Los que describen una **propiedad** del **desarrollo** de sistema
		- Como modificabilidad o verificabilidad (testability)
- En los sistemas complejos, no se pueden aislar y el alcanzar alguno tiene efectos (+/-) en otros
- Las definiciones proporcionadas para un atributo se pueden probar
- La discusión a menudo se centra en el atributo de calidad a la que pertenece una preocupación en particular
- Cada comunidad de atributos ha desarrollado su propio vocabulario
## Fases
### Elicitación
- Identificar y recopilar los atributos de calidad relevantes
	- Para un juego son la *jugabilidad y re-jugabilidad*
### Especificación
- Definir claramente cada atributo con criterios medibles
### Priorización
- Determinar la importancia relativa de cada atributo para guiar el diseño arquitectónico
### Validación
- Verificar que el sistema cumple con los atributos de calidad definidos
## Relación con la Arquitectura de Software
- Son los factores que más fuertemente moldean la arquitectura
- Las decisiones durante el diseño arquitectónico determinan en gran parte si el sistema cumplirá o no con los requisitos de calidad
- La arquitectura es el primer punto en el desarrollo donde se pueden abordar los requisitos de calidad
### Requisitos relevantes para la arquitectura
- **Requisitos funcionales:** Establecen lo que debe hacer el sistema y cómo debe comportarse o reaccionar a los estímulos en tiempo de ejecución
- **Requisitos de calidad:** Son cualidades de los requisitos funcionales o del producto general
- **Restricciones:** Es una decisión de diseño con cero grados de libertad. Es decir, una que y ha sido tomada.
### Más allá de la funcionalidad 
- Las cualidades del sistema incluyen más que solo funcionalidad
	- La funcionalidad suele recibir más atención en el desarrollo
- La funcionalidad es la capacidad básica del sistema, pero las **cualidades** abordan cómo estas **capacidades** se **implementan** y se **perciben**
- **Advertencia:** Priorizar solo la funcionalidad es una visión limitada y puede llevarnos a problemas a largo plazo
## Problemas comunes
- Los sistemas no se rediseñan por deficiencias funcionales
- Se rediseñan porque son difíciles de mantener, portar o escalar; son lentos; o han sido comprometidos
- Falla si no soporta cualidades como mantenibilidad, portabilidad o seguridad