Aunque los términos suelen emplearse como sinónimos tienen diferencias sutiles entre ellos.

## Aprendizaje Máquina (Machine Learning)

El uso de aprendizaje automático se prefiere en contextos académicos en espeañol, y en contextos técnicos o de ingeniería se usa Machine Learning.

Hay tipos de aprendizaje:
- Aprendizaje supervisado: Tiene clase (nosotros los dirigimos)
- Aprendizaje no supervisado: No tiene clase (se basan en un dataset)
- Aprendizaje semi-supervisado
- Aprendizaje por refuerzo
## Árboles de decisión

Son modelos de clasificación y regresión que representan decisiones y sus posibles consecuencias en forma jerárquica. Cada nodo interno representa una prueba sobre un atributo, cada rama el resultado de la prueba y cada hoja una clase o valor de salida.

### Generar arboles de decisión
#### ID3
El algoritmo ID3 (Iterative Dichotomiser 3) genera árboles de decisión utilizando el principio de la **ganancia de información**. El objetivo es elegir, en cada nodo, el atributo que mejor divida el conjunto de datos en función de su capacidad para reducir la incertidumbre (entropía).

De dónde viene la teoría de la información de Shannon.

##### Entropía

La entropía mide el grado de desorden o incertidumbre en un conuunto de datos. Matemáticamente se define como:

##### Ganancia de información

Mide la reducción en entropía lograda al dividir el conjunto de datos como un atributo. Se define como:


donde Sv es el subconjunto de S para el cual el atributo A toma el valor v

### Ejemplo

Vamos a construir manualmente un AD utilizando el algoritmo ID3 con la base de datos jugar tenis que contiene 14 ejemplos.

El objetivo es predecir si una persona jugará tenis (Sí / No) en función de cuatro atributos:
- Clima (Soleado, nublado, lluvioso)
- Temperatura (calurosa, templada, fría)
- Humedad (alta, normal)
- Viento (débil, fuerte)
La variable de salida es Jugar = Sí / No

## Nai Bayes

## J48
