## Accuracy (Exactitud o precisión global)
### Qué es
Es el porcentaje de instancias correctamente clasificadas sobre el total
### Cómo se interpreta
Si el modelo tiene un accuracy del 78%, significa que clasificó bien 78% de los pasajeros (tanto sobrevivientes como no sobrevivientes)
### Ejemplo
De 100 personas, predijo bien a 78 => Accuracy 78%
## Precisión sí
### Qué es
¿Qué porcentaje de los positivos predichos son correctos? Es decir, de todas las veces que el modelo dijo que alguien sí sobrevivió ¿cuántas veces acertó?
### Cómo se interpreta
Una precisión de 72.58% para la clase Sí significa que, de todas las personas clasifciadas como sobrevivientes, el 72.58% en realidad sí sobrevivió
### Ejemplo
El modelo dijo que 62 personas sobrevivieron, pero solo 45 sí lo hicieron => Precisión = 45 / 62 = 72.58%
## Recall (Sí) (Sensibilidad)
### Qué es
¿Qué porcentaje de los positivos reales fueron encontrados? De todas las personas que sí sobrevivieron realmente ¿A cuántas el modelo identificó correctamente?
### Cómo se interpreta
Un recall del 90% para la clase Sí indica que, de todas las personas que en realidad sobrevivieron, el modelo encontró al 90%
### Ejemplo
Hubo 50 sobrevivientes reales y el modelo detectó 45 => 45/50 = 90%
# Ejercicio

| Caso | Real | Clasificó |
| ---- | ---- | --------- |
| 1    | Sí   | Sí        |
| 2    | Sí   | Sí        |
| 3    | Sí   | Sí        |
| 4    | Sí   | No        |
| 5    | Sí   | Sí        |
| 6    | No   | Sí        |
| 7    | No   | Sí        |
| 8    | No   | No        |
| 9    | No   | No        |
| 10   | No   | No        |

**Precisión sí:** 4/6 (evalúa respecto a lo que clasificó)
**Precisión no:** 4/5
## Ejercicio 2
**Accuracy (Exactitud)**
Proporción de predicciones correctas
$Accuracy = numero de Aciertos / total de predicciones$
**Revisión**
¿Qué porcentaje de los positivos predichos son correctos?
$Precisión = TP / TP + FP$
**Recall**
¿Qué porcentaje de los positivos reales fueron encontrados?
$Recall = TP / TP + FN$

**Predichos**

|               | Sobrevivió | No sobrevivió |
| ------------- | ---------- | ------------- |
| Sobrevivió    | TP = 45    | FN = 5        |
| No Sobrevivió | FP = 17    | TN = 33       |

$Accuracy = 78 / 100 = 78$
$Precisión = 45 / 45 + 17$
$Recall = 45 / 45 + 5$

