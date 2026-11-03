En esta parte se estudian atributos obtenidos del código fuente y de su estructura. Algunas características se conservan en el programa compilado y otras ayudan principalmente a comprender y mantener el código.

La unidad de medición será el módulo. Su significado depende del lenguaje y del nivel de análisis.

> Ejemplos de módulo: una función en C, una clase en Java o un archivo en Python

Un módulo es una unidad funcional de softweare con una responsabilidad definida. Puede ser una función, clase, archivo, paquete o componente.

Las medidas del sistema pueden agregarse a partir de sus módulos, pero la suma no siempre basta. También importa cómo se relacionan y dependen entre sí.

Ejemplo: cinco funciones de 100 LOC suman 500 LOC, aunque pueden tener complejidades diferentes.

Medimos atributos del software para describir su estado, detectar riesgos, comparar alternativas y dar seguimiento a mejoras.

Cada métrica necesita una definición operacional: qué se cueta, en qué unidad, con qué herramienta.

Las directivas del procesador se resuelven antes de la compilación. En C y C++, instrucciones como `#include` y `#define` pueden insertar o transformar código.

Por ello, debe indicarse si la medición se realiza sobre el archivo original o sobre el código preprocesado. Los resultados pueden cambiar de manera considerable.

## Directivas del preprocesador

Las directivas no deben ignorarse automáticamente. La decisión depende del objetivo.

Para medir el código escrito por el equipo puede usarse el archvio fuente original. Para aproximar el código que recibe el compilador puede utilizarse la salida del preprocesador.

Las variables globales no son directivas: son datos visibles desde varios módulos y se analzian como una fuente de acoplamiento.

**Ejemplo:**

```
int sumar(int a, int b) {
	int resultado = a + b;
	return resultado;
}
```

Según la regla usada:

- 4 líneas físicas
- 2 sentencias ejecutables
- 1 declaraciones de variable
- 0 decisiones

> Una métrica solo es comparable cuando todos aplican la misma definición

## Métricas de estilo y sentencias

El estilo de programación modifica la forma visible del código sin cambiar su comportamiento.

Dos soluciones equivalentes pueden diferir en longitud, nombres, comentarios, formato y cantidad de sentencias.

Por eso, una métrica de estilo debe interpretarse junto con legibilidad, consistencia y facilidad de mantenimiento.

> Compara: el mismo algoritmo en 12 líneas compactas o en 20 líneas legibles ¿Cuál sería más fácil de mantener?

Las métricas de estilo pueden considerar comentarios, longitud de sentencias, profundida de indentación, nombres y consistencia de formato.

También se distingue entre sentencias ejecutables y elementos no ejecutables, como ciertas declaraciones o anotaciones.

El objetivo no consiste en imponer un único estilo, sino en identificar código difícil de comprender o mantener.

La sintaxis de los comentarios depende del lenguaje. En C y C++ se utilizan `//`para una línea y `/* */`para un bloque.

Un comentario puede ocupar una línea completa o aparecer al final de una línea de código. Por ello, conviene diferenciar líneas con comentarios, bloques de comentarios y densidad de comentarios.

Un módulo bien diseñado puede necesitar comentarios. La afirmación de que el buen código no contiene comentarios es incorrecta.

Los comentarios no deben repetir literalmente lo que hace el código, pero deben aclarar el por qué de una decisión, una condición especial o casos explícitos.

LOC significa líneas de código. Es una medida de tamaño, no una de calidad ni productividad.

Pueden contarse como líneas físicas del archivo o lógicas asociadas con sentencias.

Antes de informar LOC debe indicarse si se incluyen comentarios, líneas en blanco y código generado.

Si se cuentan líneas físicas pueden incluirse todas. Una regla más útil separa estas categorías.

Usar LOC para evaluar productividad puede incentivar código innecesariamente largo. También penaliza soluciones más concisas y reutilizables.
LOC ayuda a describir tamaño, pero no necesita contexto.

**KLOC** representa miles de líenas de código. En ISOF se utiliza normalmente 1 KLOC = 1000 LOC.

La convención debe declararse, porque en otros contextos la K suele asociarse con 1024.

