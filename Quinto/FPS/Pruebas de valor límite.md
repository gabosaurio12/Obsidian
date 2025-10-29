## Estrategia de pruebas de valores límite /análisis a la frontera
### Normal
- El programa funciona en los **parámetros que consideramos normalmente aceptados para las variables**
### Robustas
- Considera la operatividad en los **lados "válido" e "inválido" de un límite del valor de una sola variable**
### Peor de los casos
- Se considera **un caso particularmente inválido para una sola variable en particular**
### Robustas peor de los casos
- Considera los **lados "válido" e "inválido" para dos variables de manera simultánea**
## Dominio de validez
Es el rango de valores que están permitidos en una prueba
## Fundamento
Los errores tienden a ocurrir cerca de los valores extremos de un avariable de entrada. Como cuando tenemos un < o <= en un ciclo condicionado.
## Premisa de fallo único
- Solo en raras ocasiones un fallo es producto de la ocurrencia de dos o más fallos simultáneos, esto proviene de la teoría de la fiabilidad.
- Sin embargo **esto es atendido por las pruebas de robustez**
## Implementación para n variables
- Fácil implementación para *n* variables
- Que todas las variables asuman un valor normal
- Valores menos/mas uno:
	- Min: Mínimo
	- Min+: Mínimo +
	- Nom: Normal
	- Max-: Máximo -
	- Max: Máximo
- Hacemos esto para cada una de las variables
## Implementación por rangos
- Depende de la naturaleza (tipo) de las variables, p.e., el caso de los meses que se codifican por una serie numérica del 1 al 12
- Los valoes *min, min+, nom, max-, max*, estarán en función del contexto
- Cuando se valida una dimensión referida a que sea superior a cero, pero o existe claramente un límite superior, el límite estaría dado por el tipo de variable de entrada. Esto no es deseable
- Cuando las entradas son codificadas (por ejemplo letras del alfabeto, en una relación de orden), se puede validar por rango
- El caso de los valores booleanos o discretos, refiere más el uso de otros tipos de pruebas como las tablas de decisión y no valores límite
## Limitaciones del análisis de valores límite
- Funciona bien para probar programas que maneja varias variables independientes que representan cantidades delimitasas
- Los valores que no son de orden, pe la selección 
## Pruebas robustaz de valor límite
- Se analiza qué sucede cuadno los extremos se superan con un valor ligeramente mayor al máximo
- Se analiza qué sucede cuadno los extremos se superan con un valor ligeramente menor al mínimo
- Valores menos/mas uno:
	- Min: Mínimo
	- Min+: Mínimo +
	- Min-: Mínimo -
	- Nom: Normal
	- Max-: Máximo -
	- Max+: Máximo +
	- Max: Máximo
### Reflexionemos
- ¿Qué tan posible es que sólo exista fallo en una variable?
- ¿Cómo crece el número de pruebas con varias variables?
## Pruebas de valor límite en el peor caso y como robustecerlas
- Rechazo a la hipótesis de un solo fallo
- Análisis para casos donde más de una variable falla en sus límites
- Mecánica de generalización similar al análisis de valores límite normal
## Planteamiento del caso
- Considere un programa que cubre el requerimiento de clacular el importe de un descuento con base a dos **variables:**
	- El importante de la compra
	- El porcentaje de descuento
- Los **límites** establecidos en la especificación de requisitos y el dominio para estas variables es:
	- Importe de compra  i > importe <= 100,000
	- Porcentaje de descuento  0.01 > descuento <= 50
## Problemas con las pruebas de valores límite
- Entre más complejo es el algoritmo más combinaciones hay y todo explota
- Hay redundancia de casos
- Lagunas de cobertura