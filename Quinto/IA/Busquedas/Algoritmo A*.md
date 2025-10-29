## Idea principal
Combina el costo del camino recorrido (g(n)) con la heurística (h(n)) para encontrar el camino óptimo
f(n) = g(n) + h(n)
## Analogía
Un GPS que considera la distancia recorrida y la distancia restante para elegir la mejor ruta
 - **Optimalidad:** Garantiza encontrar la ruta más barata si la heurística es admisible (nunca se sobreestima el costo)
 - **Uso:** Es uno de los algoritmos de búsqueda más utilizados en juegos, robótica y sistemas de navegación
## 1. La preparación
El algoritmo se prepara con las herramientas necesarias para medir el costo total de los caminos
```
FUNCION A_estrella(Grafo, Inicio, Meta)
	Crear Cola de Prioridad vacia
	Crear Conjunto Visitados
	Inicializar Costos_g (costo desde el inicio)
```
- **Cola de prioridad:** Los nodos se ordenan por su valor f(n) = g(n) + h(n). Los de menor valor son los más prometedores
- **Conjunto visitado:** Para no explorar nodos repetidamente y evitar ciclos
- **Costos g(n):** Un mapa o tabla para registrar el costo acumulado desde el nodo de inicio hasta cualquier otro nodo
## 2. El Bucle Principal
El algoritmo expande el nodo con el costo f(n) más bajo, balanceando el costo recorrido y la distancia estimada
```
	MIENTRAS Cola de prioridad no este vacia HACER
		Nodo_actual = Desencolar(Cola de Prioridad)
		
		Si Nodo_actual ES Meta ENTONCES
			Retornar el camino
		FIN_SI
		
		Agregar(Nodo_actual, Visitados)
```
- **Desencolar:** Se toma el nodo con el valor más bajo de f(n) garantizando una exploración eficiente
- **Condición de Meta:** Si el nodo actual es la meta, el algoritmo ha encontrado el camino óptimo y finaliza
## 3. La Expansión de Nodos
Por cada vecino, se calcula un nuevo costo y se actualiza si se encuentra un camino más corto
```

```
## Pseudocódigo
```
FUNCION A_estrella(Grafo, Inicio, Meta)
	Crear Cola de Prioridad vacia
	Crear Conjutno Visitados
	Inicializar Costos_g (costo desde el inicio)
	MIENTRAS Cola de prioridad no este vacia HACER
		Nodo_actual = Desencolar(Cola de Prioridad)
		
		Si Nodo_actual ES Meta ENTONCES
			Retornar el camino
		FIN_SI
		
		Agregar(Nodo_actual, Visitados)
		
		PARA CADA Vecino EN Vecinos(Nodo_actual) HACER
			SI Vecino NO esta en Visitados ENTONCES
				Nuevo_costo_g = Costo_g(Nodo_actual) + Costo(arista)
				SI Nuevo_costo_g < Costo_g(Vecino) O Vecino no en Cola ENTONCES
					Actualizar(Costos_g, Vecino, Nuevo_costo_g)
					Apilar(Vecino, Cola de Prioridad, f(Vecino))
				FIN_SI
			FIN_SI
		FIN_PARA
```
