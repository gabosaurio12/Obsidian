La equivalencia de clases, se refiere a determinar de entre un conjunto de casos de pruebas, aquéllos que no aportan una gran diferencia considerando el aspecto a probar
La prueba tradicional de equivalencia de clases
## Mejora de las pruebas de equivalencia de clases
- La clave de la prueba de equivalencia de clases es la elección adecuada de la relación de equivalencia que determina las clases
- Generalmente los valores válidos se toman de manera arbitraria
### Mejora
- La forma de mejorar esto es considerar rangos segmentados para la escala de validez de una variable
- Considerando que F es la función a desempeñar, con base a dos variables X1 y X2, se generarían intervalos dentro de los límites
## Pruebas débiles normales de CDE
Dada la notación de las pruebas de equivalencia mejoradas, una forma débil de aplicación

|     | •   |     |
| --- | --- | --- |
| •   |     | •   |
## Pruebas fuertes normales de CDE

| •   | •   | •   |
| --- | --- | --- |
| •   | •   | •   |
## Débiles robustaz
Las * fuera del límite superior e inferior

| *   |     |     |     |     |
| --- | --- | --- | --- | --- |
|     |     | •   |     |     |
|     | •   |     | •   |     |
|     |     |     |     | *   |
## Fuerte robusta
| *   | *   | *   | *   | *   |
| --- | --- | --- | --- | --- |
| *   | •   | •   | •   | *   |
| *   | •   | •   | •   | *   |
| *   | *   | *   | *   | *   |
## Variante para un solo fallo
|     | *   |     |     |     |
| --- | --- | --- | --- | --- |
| *   |     | •   |     |     |
|     | •   |     | •   | *   |
|     |     |     | *   |     |
