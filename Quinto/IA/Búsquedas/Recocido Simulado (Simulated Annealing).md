## Idea principal
Es una variante del escalado de colina que evita los óptimos locales aceptando, a veces, un movimiento "cuesta abajo" (una solución peor). La probabilidad de aceptar una solución peor **disminuye con el tiempo**.
## Analogía
Un herrero que calienta un metal par que los átomos se muevan libremente y encuentren una estructura de menor ener´gia, y luego lo enf´ria lentamente par a"congelar" la estructura óptima.
- **Optimalidad:** Puede encontrar el óptimo global si el "enfriamiento" se realiza de manera lo suficientemente lenta
- **Flexibilidad:** Es más lento que el escalado de colina, pero mucho más robusto par aencontrar soluciones de alta calidad
## Variables y bucle principal
El algoritmo utilia una "temperatura" que disminye gradualmente para controlar la probabilidad de aceptar soluciones peores
```
FUNCION RecocidoSimulado(Estado_inicial, Temp_inicial)
	Estado_actual = Estado_inicial
	Temperatura = Temp_inicial
	
	MIENTRAS Temperatura > 0 HACER
		Nuevo_estado = GenerarVecinoAleatorio(Estaod_actual)
		delta_E = Costo(Nuevo_estado) - Costo(Estado_actual)
		
	FIN_MIENTRAS
	REGRESA Estado_actual
	
	SI delta_E < 0 O Random() < e^(-delta_E / Temperatura) ENTONCES
		Estado_actual = Nuevo_estado
	FIN_SI
	Temperatura = ReducirTemperatura(Temperatura)
```
- **Decisión de aceptación:** Si el nuevo estado es mejor (∆E < 0), se acepta automáticamente. Si el nuevo estado es pero ∆E ≥ 0), se acepta con una cierta probabilidad controladoa por la temperatura
- **Probabilidad:** La fucion exponencial e^∆E/T permite que el algoritmo tome peores decisiones al principio (cuando la temperatura es alta) y es más estricto al final (cuando la temperatura es más baja). Esta característica ayuda a evitar quedar atrapado en mínimos locales