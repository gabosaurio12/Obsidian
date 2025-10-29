## Idea principal
Usa una función heruística (h(n)) que estima la cercanía a la meta para guiar la búsqueda, eligiendo siempre el nodo que "parece" mejor
## Analogía
En un mapa eliges la carretera que apunta directamente hacia tu destino, ignorando el tráfico o los desvíos
- **Optimalidad:** No garantiza la ruta más corta
- **Complejidad en timepo:** Generalmente muy rápida
## 1. La preparación
El algoritmo se prepara con una estructura de datos que le permite elegir el mejor nodo en cada paso
```
FUNCION Greedy(Grafo, Inicio, Meta)
	CREAR Cola de Prioridad vacia
	Crear Conjunto Visitados
```
- **Cola de prioridad:** A diferencia de la cola de BFS, esta estructura ordena los nodos según su valor heurístico (h(n)), priorizando los que parecen más cercanos a la meta
- **Conjunto visitados:** Un registro de los nodos ya epxlorados para evitar ciclos
## 2. El bucle principal
El corazón del algoritmo. Mientras haya nodos en la cola, el proceso continúa, siempre eligiendo el nodo más prometedor
```
	MIENTRAS Cola de Prioridad no este vacia HACER
		Nodo = Desencolar(Cola de prioridad)
		Procesar(Nodo)
```
- **Desencolar:** Se toma el nodo con el valor heurístico más bajo, lo que significa que el algoritmo siempre avanza por el camino que "parece" más corto
- **Procesar:** El algoritmo realiza una acción con el nodo, como verificar si es la meta
## 3. La Expansión de Nodos
Después de procesar un nodo, el algoritmo busca sus vecinos y los añade a la cola de prioridad
```
PARA CADA Vecino EN Vecinos(Nodo) HACER
			SI Vecino NO esta en Visitados ENTONCES
				Encolar(Vecino)
				Agregar(Vecino, Visitados)
			FIN_SI
		FIN_PARA
```
- **Verificación:** Se comprueba que el vecino no haya sido visitado para evitar ciclos
- **Añadir a la cola:** El vecino se agrega a la cola de prioridad, que se reorganiza automáticamente para colocarlo según su valor heurístico
## Pseudocódigo
```
FUNCION Greedy(Grafo, Inicio, Meta)
	CREAR Cola de Prioridad vacia
	Crear Conjunto Visitados
	MIENTRAS Cola de Prioridad no este vacia HACER
		Nodo = Desencolar(Cola de prioridad)
		Procesar(Nodo)
		PARA CADA Vecino EN Vecinos(Nodo) HACER
			SI Vecino NO esta en Visitados ENTONCES
				Encolar(Vecino)
				Agregar(Vecino, Visitados)
			FIN_SI
		FIN_PARA
	FIN_MIENTRAS
```
## Actividad: El camino más prometedor
### Objetivo
Aplicar una heurística simple para tomar decisiones de búsqueda
- **Materiales:** Un grafo de ciudades con distancias reales (costo de arista) y heurísticas (distancia en línea recta a la meta)
- **Instrucciones:**
	1. Solo usen la heurística para decidir a qué ciudad ir en cada paso
	2. Traza la ruta que encontraron y calculen el costo total del camino
### Reflexión
¿Fue la ruta que encontraron la más barata? ¿Por qué la heurística, por sí sola, no es suficiente?