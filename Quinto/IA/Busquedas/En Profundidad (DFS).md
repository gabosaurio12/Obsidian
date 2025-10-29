Depth-First Search explora un camino **tan profundo como sea posible** antes de retroceder y explorar otra rama
## Analogía
Un explorador de cuevas que sigue un solo túnel hasta el final. Si no encuntra lo que busca, regresa al úlitmo cruce para tomar otra dirección
- **Optimalidad:** No garantiza la ruta más corta
- **Complejidad en espacio:** Es muy eficiente en el uso de memoria
### La preparación
Antes de comenzar el algoritmo necesita crear las herramientas para su búsqueda
```
FUNCION DFS(Grafo, Inicio)
	Crear Pila vacia
	Crear Conjunto Visitados
```
- **Pila:** Funciona como una pila de platos. Los nodos se añaden y se retiran del mismo lugar (LIFO). Esto asegura que la búsqueda se adentre lo más posible en una sola rama antes de retroceder
- **Conjunto de visitados:** Un registro de todos los nodos que ya hemos explorado. Su propósito es evitar ciclos y no procesar el mismo nodo más de una vez
### El bucle principal
El corazón del algoritmo. Mientras haya nodo por explorar en la pila, el proceso continúa
```
MIENTRAS Pila no esté vacía HACER
	Nodo = Desapilar(Pila)
	Procesar(Nodo)
```
- **Desapilar:** Se toma el nodo que se añadió más recientemente a la pila. Esto garantiza que el algoritmo continúe explorando en profundiad a lo largo de la rama actual
- **Procesar:** En este punto, el algoritmo realiza alguan acción con el nodo (por ejemplo, verificar si es la meta, imprimir su nombre, etc.)
### La Expansión de Nodos
Después de procesar un nodo, el algoritmo busca sus vecinos para continuar la exploración
```
PARA CADA Vecino EN Vecinos(Nodo) HACER
	SI Vecino NO esta en Visitados ENTONCES
		Apilar(Vecino)
		Agregar(Vecino, Visitados)
	FIN_SI
FIN_PARA
```
- **Verificación:**