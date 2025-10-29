Es un algoritmo de búsqueda local que se mueve continuamente en la dirección de **mejorar el estado actual**, eligiendo el vecino que ofrece la mayor mejora
## Analogía
Una persona que sube una colina y en cada paso, se mueve en la dirección con la pendiente más pronunciada. Siempre sube, pero podría terminar en una colina baja en lugar de en la montaña más alta
- **Optimalidad:** No garantiza encontrar el óptimo global; es propenso a quedarse atascado en óptimos locales
- **Simplicidad:** Es uno de los algoritmos de búsqueda más simples de implementar
## Pseudocódigo
1. Bucle de búsqueda el algoritmo se ejecuta en un bucle simple: genera una solución inicial y busca un vecino que sea mejor que el estado actual
```
FUNCION EscaladoDeColina(estadoInicial)
    estadoActual ← estadoInicial

    MIENTRAS VERDADERO HACER
        vecinoMejor ← encontrarMejorVecino(estadoActual)

        SI vecinoMejor es mejor que estado_actual entonces
            estadoActual ← vecinoMejor
        SINO
            retornar estadoActual
        FIN_SI
    FIN_MIENTRASs
FIN_FUNCION
```
### Objetivo
Visualizar cómo el algoritmo de escalado de colina se detiene en un óptimo local
- **Materiales:** Un tablero con números en cada celda, con un alor más alto en el centro y otros picos más pequeños
- **Instrucciones:**
	1. Se deben colocar en un punto de partida aleatorio
	2. Solo se mueven a una celda adyacente que tenga un número más alto
	3. Continúen moviéndose hasta que no puedan encontrar un valor más alto
### Reflexión
¿El punto donde terminaron fue el valor más alto del tablero? ¿Por qué se detuvieron?