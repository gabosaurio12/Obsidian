## 1. La preparación
El algoritmo comienza definiendo el espacio de búsqueda que cocntiene todas las posibles soluciones
```
FUNCION BusquedaExhaustiva(Problema)
	SolucionesPosibles = GenerarTodasLasSoluciones(Problema)
```
## 2. La verificación
El corazón del algoritmo. Se itera sobre cada solución para verificar si cumple con la condición de la meta
```
	PARA CADA Solucion EN SolucionesPosibles HACER
		SI Probar(Solucion) ES VERDADERO ENTONCES
			Retornar Solucion
		FIN_SI
	FIN_PARA
```
## 3. El resultado
El algoritmo retornará una solución si la encuentra o un valor nulo si ninguna de las opciones funcionó
```
	// SI el bucle termina sin ecnotrar la meta
	Retornar NULO
```
## Garantía
La búsqueda exhaustiva siempre encontrará una solución si existe, ya que prueba cada posibilidad. Sin embargo, su mayor desventaja es la ieficiencia para problemas grandes.
## Pseudocódigo
```
FUNCION BusquedaExhaustiva(Problema)
	SolucionesPosibles = GenerarTodasLasSoluciones(Problema)
	PARA CADA Solucion EN SolucionesPosibles HACER
		SI Probar(Solucion) ES VERDADERO ENTONCES
			Retornar Solucion
		FIN_SI
	FIN_PARA
	// SI el bucle termina sin ecnotrar la meta
	Retornar NULO
```
## Práctica
Visualizar el crecimiento exponencial del tiempo de búsqueda
**Materiales:** Papel y lapiz
**Instrucciones:** 
1. En equipos calculen el número de combinaciones para una cerradura de 4 digitos (10,000)
2. Calculen el número de combinaciones para una de 5, 6 y 7 digitos (10^5, 10^6, 10^7)
### Reflexión
¿Por qué estrategia no se usa para romper contraseñas de 8 caracteres? ¿Cómo cambia el problema si se agrega un solo digito?
