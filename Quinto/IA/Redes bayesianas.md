Una red bayesiana es un mmodelo probabilístico gráfico que representa variables y sus relaciones de dependencia mediante un grafo dirigido acíclico (DAG).

Permite:
- Modelar dependencias y relaciones causales
- Calcular probabilidades conjuntas y condicionales
- Realizar inferencia incluso con datos faltantes
## Etapas del análisis con redes bayesianas
1. Selección y preparación de datos
2. Aprendizaje de estructura: descubrir el DAG mediante algoritmos basados en restricciones o puntuaciones
3. Aprendizaje de parámetros: estimación de probabilidades condicionales
4. Validación del modelo: cross-validation, split 70-30, métricas
5. Inferencia: responder consultas probabilísticas
## Ejemplo conceptual de red bayesiana

Supongamos un modelo para predecir si una persona compra un producto con base en:
- ingreso
- edad
- publicicdad
La red permite calcular:
- P(Compra | ingreso, edad, publicidad)