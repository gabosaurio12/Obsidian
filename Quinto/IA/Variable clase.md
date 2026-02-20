En Inteligencia Artificial (IA) y Aprendizaje Automático (Machine Learning), la **variable clase** (target o label) es casi siempre considerada una **variable** **cualitativa** **(o categórica)**.

## 1. ¿Por qué es cualitativa? (Problemas de Clasificación)

En la mayoría de los escenarios de IA, buscamos clasificar datos en grupos o etiquetas predefinidas. 

- **Ejemplos:** "Spam" / "No Spam", "Perro" / "Gato", "Defectuoso" / "Funcional", "Rojo" / "Azul" / "Verde".
- Estas etiquetas representan categorías, cualidades o atributos, no magnitudes numéricas.
- Incluso si la clase se representa con números (ej. 0 para Spam, 1 para No Spam), la naturaleza de la variable sigue siendo **nominal** (cualitativa), ya que el 1 no es "más" que el 0, simplemente es un grupo diferente. 

## 2. ¿Cuándo es cuantitativa? (Problemas de Regresión)

Si el objetivo de la IA es predecir un valor numérico continuo (un número), la variable clase se convierte en **cuantitativa**.

- **Ejemplos:** Predecir el precio de una casa, la temperatura de mañana, o el porcentaje de descuento.
- En este caso, la variable es cuantitativa, usualmente continua.