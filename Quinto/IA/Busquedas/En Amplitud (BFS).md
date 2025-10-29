BFS (Breadth-First Search) explora el espacio de búsqueda nivel por nivel. Primero visita todos los nodos a un paso del inicio, luego todos los nodos a dos pasos y así sucesivamente
Piensa en una onda que se expande desde el centro de un lago. Explora todas las orillas más cercanas antes de llegar a las que están más lejos
- **Optimalidad:** Garantiza encontrar la ruta más corta en términos de números de pasos
- **Complejidad en espacio:** Puede ser muy costoso en memoria si el ancho del árbol de búsqueda es grande
¿Por qué el primer camino que encuentra BFS es el más corto?
	Porque como va por conexiones entre nodos, el más largo requerirá hacer más de estas y se espera que se llegue a la meta antes

## Pseudocódigo
### Idea principal
- BFS utiliza una estructura de datos llamada cola para explorar los nodos de manera ordenada, garantizando que los nodos más cercanos al origen sean visitados primero
### Variables clave
- Cloa: FIFO, para almacenar los nodos por explorar
- Visitados: Un conjunto o lista para evitar ciclos y no visitar el mismo nodo dos veces
### 1. Preparación
Antes de comenzar el algoritmo necesita crear las herramientoas para su búsqueda
```
	FUNCION BFS(Grafo, Inicio)
		Crear Cola vacia
		Crear conjunto visitados
```
Cola: Funciona como una lista de espera. Los nodos se añaden al final y se retiran del principio (FIFO).  Esto asegura que exploremos los nodos en el orden en que los encontramos, de los más cercanos a los más lejanos
Conjutno visitados: Un registro de todos los nodos que ya hemos explorado. Su propósito es evitar ciclos y no procesar el mismo nodo másd e una vez, lo que podría hacer la búsqueda infinita
### 2. El bucle principal
El corazón del algoritmo. Mientras haya nodos por explorar en la cola, el proceso continúa.
```
MIENTRAS Cola no este vacia HACER
	Nodo = Desencolar(Cola)
	Procesar(Nodo) //Ej: imprimirlo
FIN_MIENTRAS
```
Desencolar: Se toma el primer nodo de la cola. Este es siempre el nodo más antiguo y el más cercano al inicio de la búsqueda, lo que garantiza el comportamiento "en amplitud"
Procesar: En este punto, el algoritmo realiza alguna acción con el nodo (por ejemplo, gerificar si es la meta, imprimir su nombre, etc)
### 3. La expansión de Nodos
Después de procesar un nodo, el algoritmo busca sus vecinos para continuar la exploración
```
PARA CADA vecino EN Vecinos(Nodo) HACER
	SI Vecino NO esta en Visitados ENTONCES
		Encolar(Vecino)
		Agregar(Vecino, Visitados)
	FIN_SI
FIN_PARA
```
Verificación: Para cada vecino del nodo actual, se verifica si ya ha sido visitado. Si no lo ha sido, se considera un nuevo nodo a explorar.
Añadir a la cola: El nuevo vecino se añade a la cola. Esto asegura que se procesará en un futuro, pero solo después de que todos los nodos de su mismo nivel de distancia hayan sido explorados

## Pseudocódigo completo
```
	FUNCION BFS(Grafo, Inicio)
		Crear Cola vacia
		Crear conjunto visitados
		MIENTRAS Cola no este vacia HACER
			Nodo = Desencolar(Cola)
			Procesar(Nodo) //Ej: imprimirlo
		FIN_MIENTRAS
		PARA CADA vecino EN Vecinos(Nodo) HACER
			SI Vecino NO esta en Visitados ENTONCES
				Encolar(Vecino)
				Agregar(Vecino, Visitados)
			FIN_SI
		FIN_PARA
```