- La prueba de software sólo puede gestionarse exitosamente si:
	- **Comprendemos** el proceso de prueba
	- Entendemos el **razonamiento** detrás del proceso de prueba
	- Entendemos los **límites** de la prueba
	- **Estimamos** el esfuerzo de la prueba y la prueba misma
	- Entendemos como **reconocer problemas** en la prueba de manera temprana
## Resistencia a adoptar un proceso de prueba
**La prueba implica una inversión económica y de esfuerzo humano y los resultados pueden ser "embarazosos", muchos de quienes presentan resistencia a implementar este proceso se basan en argumentos poco realistas, como son: **
- No es necesario
- Cuesta mucho
- Toma mucho tiempo
- Nunca termina
- Es muy académico
- No está en el plan
- Demora la liberación del producto
- Nos hace ver mal
## Cosas que nos da la prueba
- Origen y costo de los errores
- Efecto de probar poco y el tiempo para siguiente versión
- Tasa de errores por líneas de código
- Índice de errores descubiertos en la operación
- Sobre tiepo para liberación por el cliente
- Riesgo de liberar el proyecto
- Defectos introducidos y reparados
## Objetivos de la prueba
- Calidad del producto y el proceso
- Cumplimiento de requisito
- Evidencia de la calidad lograda
- Mejora continua
## Error, defecto y fallo
- Error: Naturaleza Humana
	- El humano se equivoca
- Defecto: Dentro del producto
	- Defecto de calidad
	- Bug
- Fallo: Consecuencia
	- Efectos negativos
### Los defectos se amplifican
Se amplifican porque un error o fallo introducido en una etapa temprana no solo se mantiene, sino que crece en impacto y costo de corrección a medida que el proyecto avanza a etapas posteriores. **Como una bola de nieve**
### Propagación de Errores (Multiplicación)
Un error en el **Análisis de Requisitos** o el **Diseño** actúa como una semilla. todo el trabajo posterior se construye sobre esa base defectuosa.
### Costo exponencial de corrección
El factor principal de amplificación es el **costo**. Corregir el defecto en la fase donde se origina es trivial. Si el defecto pasa desapercibido el costo de corregirlo aumenta:
- **En Requisitos:** El costo es *1X* (línea base)
- **En Codificación:** El costo puede ser *6.5X* (hay que modificar código)
- **En Pruebas de sistema:** El costo puede ser *15X* (hay que encontrar el origen, modificar código y volver a probar todo el sistema)
- **En Producción/Mantenimiento:** El costo puede ser *60X* a *100X* (se involucran equipos de soporte, se pierde la confianza del clliente y potencialmente se incurre en pérdidas financieras)
### Retroceso (Rework)
Para corregir un defecto tardío, no solo se modifica el código afectado, sino que a menudo se debe deshacer y **rehacer** parte del trabajo de fases completas (diseño, código y pruebas de regresión). Esta necesidad de **trabajo doble (o triple)** es la mayor manifestación de la amplificación.
## Verificación vs Validación
Verificación -> Revisar que sirva el producto
Validación -> Que estemos verificando correctamente el producto
Revisiones + Pruebas = Menos defectos 
## Amplificación de defectos
![[Captura de pantalla 2025-10-27 a la(s) 2.14.20 p.m..png]]
## Amplificación de defectos sin revisiones
![[Captura de pantalla 2025-10-27 a la(s) 2.15.09 p.m..png]]
## Amplificación de defectos con revisiones
![[Captura de pantalla 2025-10-27 a la(s) 2.15.53 p.m..png]]
## Conclusión
Un defecto es como una bola de nieve, por esto las metodologías modernas promueven el principio de *Shift Left* que mueve las pruebas a las etapas más tempranas.