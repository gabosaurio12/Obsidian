## Explorando el vecindario
### Idea principal
- Las búsquedas locales son una categoría de algoritmos de optimización que buscan la solución a un problema **explorando solo los estados cercanos** al estado actual, sin la necesidad de un grafo o árbol de búsqueda completo
### Analogía
- Imagina que estás en un terreno montañoso y tu objetivo es encontrar el punto más alto. Una búsqueda local es como **caminar y siempre subir**, paso a paso. No tienes un mapa completo, solo puedes ver tu alrededor inmediato y decidir cuál es la mejor dirección para subir

### Características de las Búsquedas Locales
- Se definen por sus ventajas y desventajas inherentes:
	- **Eficiencia en memoria:** Solo necesitan recordar el estado actual, lo que los hace ideales para problemas con espacios de búsqueda enormes
	- **Velocidad:** Generalmente son muy rápidos, ya que no exploran todo el espacio de búsqueda
	- **Óptimos locales:** Son suceptibles de quedarse atrapados en un "óptimo local", que es una solución buena pero no la mejor globalmente
	- **No guardan el camino:** A diferencia de otros algoritmos, no te dan la secuencia de passo para lelgar a la solución, solo la solución final