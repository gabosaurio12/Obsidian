El código, ese gran conocido

Generalmente, una mejor cobertura de ejecución del código durante la prueba, representa una mejor calidad en la prueba.

## (CFG) Grafo de flujo de control del programa

Una forma común es por medio de los grafos que representan la abstacción de un programa.

Vas por pequeños fragmentos de código para analizar cómo deben ir las pruebas.

### Elementos del CFG
- **Nodo**: Secuencias de declaraciones
	- **Bloque básico**: Una secuencia de declaraciones con solo un punto de entrada y solo un punto de salida (sin bifurcaciones)
	- **Borde:** transferencias de control

**¿Debemos buscar la cobertura de caminos?**

La cobertura de caminos _puede_ puede ser inviable para programas del mundo real