Analizar el desempeño de diferentes modelos de clasificación a partir de sus matrices de confusión, calculando métricas relevantes y proporcionando una interpretación enfocada en la toma de decisiones de negocio.

Escenario general

Eres analista de datos en una empresa de suscripción de servicios en línea (por ejemplo, una plataforma de streaming o software). Se han aplicado tres modelos para predecir si un cliente cancelará su suscripción en los próximos 30 días.

Cada modelo ha sido entrenado con los mismos datos y se evaluó con una muestra de validación. Los resultados se resumen en las siguientes matrices de confusión.

### Resultados de los Modelos

 Modelo 1: Árbol de decisión

| Arbol de decisión      |     |     |
| ---------------------- | --- | --- |
| **Real: Cancelará**    | 90  | 10  |
| **Real: No cancelará** | 20  | 80  |
$Accuracy = 170/200 = 85$%
$Precisión = 90/90 + 20 = 90/110 = 81.81$% 
$Recall = 90/90 + 10 = 90 / 100 = 90$%

Modelo 2: Naive Bayes

| Naive Bayes            |     |     |
| ---------------------- | --- | --- |
| **Real: Cancelará**    | 75  | 25  |
| **Real: No cancelará** | 15  | 85  |
$Accuracy = 160/200 = 80$%
$Precisión = 75/75 + 15 = 75/90 = 83.33$% 
$Recall = 75 / 75 + 25 = 75 / 100 = 75$%

Modelo 3: Red Bayesiana

| Red Bayesiana          |     |     |
| ---------------------- | --- | --- |
| **Real: Cancelará**    | 85  | 15  |
| **Real: No cancelará** | 30  | 70  |
$Accuracy = 155/200 = 77.5$%
$Precisión = 85 / 85 + 30 = 85/115 = 73.91$% 
$Recall = 85/85 + 15 = 85 / 100 = 85$%

1. **Calcular para cada modelo:**

	- Precisión
	- Recall (sensibilidad)
	- Exactitud (accuracy)

2. **Interpretar los resultados**:

	- ¿Qué modelo tiene mejor balance entre precisión y recall? 
		Red Bayesiana
	- ¿Cuál sería mejor si tuviéramos recursos limitados para contactar a clientes (Por ejemplo: campañas de retención costosas)?
		Naive Bayes
	- ¿Cuál sería mejor si el costo de perder clientes es muy alto?
		Naive Bayes

3. **Toma de decisiones**:

	- Si tu empresa solo puede hacer llamadas de retención a 100 clientes por mes, ¿con qué modelo priorizarías?
		Naive Bayes
	- ¿Qué pasa si tu empresa puede automatizasr un correo de retención a todos los clientes con bajo riesgo? ¿Qué modelo usarías?
		Árbol de decisiones
	- ¿Qué modelo usarías si el objetivo es simplemente entender mejor el perfil de los canceladores para diseñar campañas generales?
		Naive Bayes