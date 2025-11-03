
| #    | Clase de equivalencia                                                             | Criterio de Cobertura      | Comportamiento Esperado              | Valor de Prueba    |
| ---- | --------------------------------------------------------------------------------- | -------------------------- | ------------------------------------ | ------------------ |
| CP01 | **Válida** - se probará el rango de valores de la insignia de Bronce [1000-9999]  | 1000 ≤ Puntuación ≤ 9999   | Recompensa baja (Insignia de Bronce) | Puntuación = 5000  |
| CP02 | **Válida** - se probará el rango de valores de la insignia de Plata [10000-25000] | 10000 ≤ Puntuación ≤ 25000 | Recompensa media (Insignia de Plata) | Puntuación = 18250 |
| CP03 | **Válida** - se probará el rango de valores de la insignia de Oro [25001-50000]   | 25001 ≤ Puntuación ≤ 50000 | Recompensa alta (Insignia de Oro)    | Puntuación = 32000 |
| CP04 | **Inválida** - se probará el rango de valores inferiores (∞ - 999]                | Puntuación ≤ 999           | No se da ninguna recompensa          | Puntuación = 237   |
| CP05 | **Inválida** - se probará el rango de valores superiores [50001 - ∞]              | Puntuación ≥ 50001         | No se da ninguna recompensa          | Puntuación = 72341 |
### ¿Qué nivel de suficiencia en la prueba, representan los valores planeados? Y ¿Por qué?
Tiene un nivel medio-alto porque si bien probamos valores que representan cada una de los posibles inervalos incluyendo los válidos (en los que se recibe una recompensa) y los inválidos (en los que no recibe una recompensa o se ignora la puntuación).