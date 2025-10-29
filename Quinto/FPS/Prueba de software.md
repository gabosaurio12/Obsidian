## Los 7 principios de la prueba
Son directrices fundamentales universalmente aceptadas (estandarizadas por organizaciones como ISTQB) que ayudan a planificar, ejecutar y evaluar el testing de manera efectiva. Son conocidos como los **Siete Principios de las Pruebas de Software:**
1. Muestran la presencia de defectos
	- Las pruebas solo demuestran que existen errores, no que el software está libre de ellos
	- El objetivo de probar es encontrar la mayor cantidad de defectos posibles
2. Pruebas exhaustivas son Imposibles
	- Probar todas las combinaciones de entradas, condiciones y rutas es inviable (excepot en sistemas triviales)
	- Las pruebas deben basarse en el riesgo y la priorización para enfocarse en lo más importante
3. Pruebas tempranas
	- El testing debe empezar lo antes posible en el ciclo de vida del desarrollo (Shift Left)
	- Encontrar y corregir defectos en etapas tempranas (requisitos, diseño) es mucho más barato que hacerlo en etapas tardías o en producción
4. Agrupación de defectos
	-  Un pequeño número de módulos o componentes contiene la mayoría de defectos descubiertos (Principio de Pareto / regla del 80/20)
	- Los esfuerzos de prueba deben concentrarse en las áreas más propensas a fallar (los módulos críticos o con historial de fallos)
5. Paradoja del pesticida
	- Si se ejecutan repetidamente los mismos tests, con el tiempo dejarán de encontrar nuevos defectos
	- Los tests deben ser revisados y actualizados regularmente; se deben crear nuevos casos de prueba
6. Las pruebas dependen del contexto
	- La estrategia de prueba varía según la aplicación y el contexto (el software para un avión no se prueba igual que una app de juegos)
	- Se debe utilizar un enfoque de prueba diferente para cada sistema (métodos ágiles, testing basado en riesgo, testing exploratorio, etc)
7. Falacia de la ausencia de errores
	- Encontrar y corregir todos los defectos noe s suficiente si el sistema construido no satisface las necesidades del usuario
	- El software no solo debe funcionar sin fallos, sino que debe ser usable y cumplir con los requisitos del negocio
## Supuestos
- La prueba de software, supone su ejecución para identificar errores
- Una prueba no puede ser efectiva, si no considera la complejidad del software
- Diseñar pruebas, requiere resolver problemas similares los encontrados a nivel de análisis, diseño y programación de una aplicación
## Qué implica una prueba
- En el ejemplo observamos que al menos tenemos tres casos de prueba:
	1. Dar valores iguales a N1 y a N2
	2. Dar valores donde N1 sea mayor a N2
	3. Dar valores donde N2 sea mayor a N1

	**Ejercicio**
		INICIO
		Leer n1, n2
		SI N1 = N2 ENTONCES
			ESCRIBIR ("Son iguales")
		SINO
			SI N1 > N2 ENTONCES
				ESCRIBIR ("N1 es el mayor)
			SINO
				ESCRIBIR ("N2 es el mayor)
		FIN
		
	- ¿Qué errores faltan por probar?
		- Validar que las entradas sean números
## Casos de prueba
Un **caso de prueba** de software es un documento que detalla un conjunto de condiciones, pasos y entradas que, cuando se ejecutan, permiten verificar si una característica o función específica del software se comporta según los **requisitos establecidos**.
**Es una pregunta estructurada que se le hace al sistema para determinar si funciona correctamente bajo una circunstancia particular.**
## Propósito del Caso de Prueba
- **Validar** que el software cumple con los requisitos funcionales y no funcionales
- **Identificar y documentar** defectos o fallos en el sistema
- Garantizar la **calidad** y **estabilidad** del producto antes de su lanzamiento
## En resumen
- Identificar, modelar y analizar las responsabilidades del sistema bajo prueba
- El diseño de casos de prueba basados en la perspectiva o punto de vista externo al sistema
- Adicionar casos de prueba basados en el análisis del código, suposiciones y heurísiticas
	- Jugar con las condiciones
- Desarrollar los resultados esperados para cada caso de prueba y un esquema de evaluación que indique si la prueba fue "pasada" o no y en qué estado se encuentra el caso de prueba
## Visión general de la prueba
- Modelado de la aplicación de pruebas
	- Qué y cómo probaré
- Diseño de la prueba
	- Con qué probaré
- Aplicación de prueba
	- No se hacen forzosamente las mismas pruebas que en la iteración pasada
	- Debemos corregir los casos de prueba
![[Captura de pantalla 2025-10-27 a la(s) 7.46.49 p.m..png]]
## Pasos típicos de una prueba
- Establecer alcance y diseñar
- Ejecutar prueba y evaluar resultados
- Evaluar cobertura de la prueba
- Pruebas adicionales para alcanzar cobertura
- Detener cuando la cobertura es la esperada y todas las pruebas pasan
### Cobertura de prueba
- Grado en el que el código fuente de un programa ha sido comprobado
- También para la IA hay cobertura (se debe probar todo programa con IA)
## Garantía de calidad
La gestión de calidad es el conjunto de acciones planificadas y sistemáticas, necesarias para dar la confianza adecuada de que un producto o servicio va a satisfacer los requisitos de calidad.
Siempre se debe dar una garantía, es un requisito legal.
El plazo mínimo-recomendado es de un mes o dos meses, ya que los cierren de muchos sistemas son mensuales entonces da tiempo de ver si un sistema funcionó. Otros son anuales.
La gestión de calidad es una actividad de "Protección" que se encuentra a lo largo del proceso de software.
*Las pruebas son el principal mecanismo de medición, evaluación y mejora de la calidad.*
### SQA Para el software
**SQA - System Quality Assurance (Sistema de Gestión de Calidad)**
Abarca:
1. Un proceso de garantía de calidad de software
2. Tareas específicas de asegurameinto y control de calidad
3. Prácticas efectivas de la Ingeniería de Software (IS)
4. Control de todos los productos de trabajo de IS (artefactos) y cambios que se generan
5. Un procedimiento para garantizar concordancia con los estándares de desarrollo de software
6. Mecanismos de medición e informe
#### SQA y mejora continua
![[Captura de pantalla 2025-10-27 a la(s) 8.16.24 p.m..png]]
### Búsqueda de calidad
- En el software se busca minimizar el número de defectos que se liberan en una versión. Tener los menos defectos posibles
- Y también minimizar la varianza en el número de bugs de una liberación a otra. Que una versión posterior tenga menos que la inicial
## Calidad de software
Concordancia:
- Requisitos funcionales
- Requisitos de desempeño explicitados
- Estándares de desarrollo documentados
- Características implícitas de un trabajo profesional
## Resúmen
- La PRUEBA es parte de la Garantía de Calidad, que pretende la SATISFACCIÓN DEL CLIENTE
- "Cuesta 6 veces más conseguir un nuevo cliente que mantener a uno satisfecho"