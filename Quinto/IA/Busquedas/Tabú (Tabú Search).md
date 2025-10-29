Es una metaheurística que mejora la búsqueda local añadiendo una "memoria". Mantiene una **lista de los últimos estados visitados (lista tabú)** para evitar ciclos
## Analogía
Un explorador en un laberinto que lleva un registro de los últimos 5 cruces que ha tomado para evitar volver a ellos de inmediato
- **Robustez:** Al evitar ciclos, puede escapar de óptimos locales al explorar áreas del espacio de búsqueda que de otro modo ignoraría
- **Complejidad:** Requiere más memoria que el escalado de colina debido a la lista tabú
## 1. Variables y bucle principal
El algoritmo utiliza una lista tabú, que almacena los estados recientes, para guiar la búsqueda
```
FUNCION BusquedaTabu (Estado_inicial, Tamaño_lista_tabu)
	Estado_actual = Estado_inicial
	Mejor_solucion = Estado_actual
	Lista_tabu = [Estado_inicial]
	
	MIENTRAS CriterioDeParada NO CUMPLE HACER
		Vecinos = GenerarVecinos(Estado_actual)
		Vecinos_validos = FiltrarVecinos(Vecinos, Lista_tabu)
		
		Mejor_vecino = SeleccionarMejor(Vecinos_validos)
		SI Mejor_vecino ES MEJOR QUE Mejor_solucion ENTONCES
			Mejor_solucion = Mejor_vecino
		FIN_SI
		
		Estado_actual = Mejor_vecino
		Agregar(Estado_actual, Lista_tabu)
		SI Tamaño(Lista_tabu) > Tamaño_lista_tabu ENTONCES
			Eliminar_mas_antiguo(Lista_Tabu)
		FIN_SI
		
	FIN_MIENTRAS
	Retornar Mejor_solucion
```
- **Filtrado:** El algoritmo solo considera los vecinos que no están en la lista tabú, lo que previene los movimientos repetitivos
