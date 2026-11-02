## 1. Identificación y clasificación de los elementos

Código analizado:

```c
int calcularTotal(int precio, int cantidad) {
int subtotal = precio * cantidad;
int descuento;

if (cantidad >= 5) {
descuento = subtotal * 0.10;
} else {
descuento = 0;
}

for (int i = 0; i < cantidad; i++) {
subtotal = subtotal + 2;
}

return subtotal - descuento;
}
```

|Elemento|Clasificación|¿Es ejecutable?|Justificación|
|---|---|---|---|
|`int calcularTotal(int precio, int cantidad)`|Declaración de función|No, bajo el criterio adoptado|Define la función y sus parámetros; no es una sentencia ejecutable del cuerpo.|
|`int subtotal = precio * cantidad;`|Declaración, inicialización y operación aritmética|Sí|Declara la variable y calcula su valor inicial.|
|`int descuento;`|Declaración|No|Reserva el nombre de una variable, pero no le asigna un valor.|
|`if (cantidad >= 5)`|Decisión|Sí|Evalúa una condición para seleccionar una rama.|
|`descuento = subtotal * 0.10;`|Asignación y operación aritmética|Sí|Calcula y asigna el descuento.|
|`else`|Alternativa de decisión|No, por separado|No realiza una operación independiente; introduce la rama alternativa.|
|`descuento = 0;`|Asignación|Sí|Asigna el valor cero a la variable.|
|`for (int i = 0; i < cantidad; i++)`|Operación de ciclo|Sí, como estructura de control|Controla la repetición mediante inicialización, condición y actualización.|
|`int i = 0`|Declaración e inicialización|Sí, según el criterio adoptado|Declara e inicializa la variable de control del ciclo.|
|`i < cantidad`|Condición|Sí|Se evalúa para determinar si continúa el ciclo.|
|`i++`|Actualización|Sí|Incrementa el valor de la variable de control.|
|`subtotal = subtotal + 2;`|Asignación y operación aritmética|Sí|Suma dos al subtotal y guarda el resultado.|
|`return subtotal - descuento;`|Retorno y operación aritmética|Sí|Calcula el resultado final y lo devuelve.|

**Criterio utilizado:** se considera ejecutable una sentencia u operación que participa en el cálculo, la asignación, la evaluación de condiciones, el control de ciclos o el retorno de un resultado. Las declaraciones sin inicialización no se cuentan como ejecutables. La clasificación puede variar según la regla específica establecida en clase.

## 2. Elementos que cuentan como sentencias ejecutables

Siguiendo el criterio anterior tenemos los siguientes elementos:
1. `int subtotal = precio cantidad;`
2. `if (cantidad >= 5)`
3. `descuento = subtotal 0.10;`
4. `descuento = 0;`
5. `for (int i = 0; i < cantidad; i++)`
6. `int i = 0`
7. `i < cantidad`
8. `i++`
9. `subtotal = subtotal + 2;`
10. `return subtotal - descuento;`

Nota: Para el conteo estático se toman en cuenta todas las sentencias que aparecen en el código (sin importar si en una ejecución concreta se ejecutan o no). En el caso de la estructura `for` se evita el doble conteo de sus componentes (inicialización, condición y actualización).
## 3. Conteos solicitados
### 3.1. Número de líneas físicas
El código mostrado tiene 17 líneas físicas (cada línea se cuenta aunque sean líneas en blanco).
Si no contamos las líneas en blanco tenemos 14 líneas de código.
### 3.2. Número de sentencias ejecutables estáticas
Tenemos 10 elementos que son ejecutables (siguiendo el criterio de nuestro apartado anterior):
• 1 inicialización (subtotal)
• 1 decisión (if)
• 2 asignaciones alternativas (descuento)
• 1 estructura de ciclo (for)
• 1 inicialización (i)
• 1 condición (del ciclo)
• 1 actualización (i)
• 1 asignación (del ciclo)
• 1 retorno
También podemos ver que la estructura de ciclo (for) es una estructura de control añadida. Dependiendo de la regla que se aplique en clase puede ser o no contada. Por ejemplo, si sólo se cuentan las sentencias simples y sus componentes (y no se cuenta la estructura for) tenemos 9 elementos.
### 3.3. Número de decisiones
En el código hay 2 expresiones condicionales:
1. `cantidad >= 5` (if)
2. `i < cantidad` (condición del for)
Por lo tanto tenemos 2 decisiones.
Si en clase utilizamos la métrica de complejidad ciclomática también tenemos 2 puntos de decisión (if y for). En este caso la complejidad ciclomática sería:

$$ V(G) = 2 + 1 = 3 $$

### 3.4. Operadores y operandos de `subtotal = precio cantidad;`

La sentencia es:
```c
subtotal = precio * cantidad;
```
Operadores:
• `=` (asignación)
• `` (multiplicación)
Número de operadores distintos: 2.
Operandos:
• subtotal
• precio
• cantidad
Número de operandos distintos: 3.
Por lo tanto:
• Número de operadores distintos: 2.
• Número de operandos distintos: 3.
• Total de apariciones de operadores y operandos: 5.
Si utilizamos la métrica de Halstead tenemos:
• \(n_1 = 2\) (operadores distintos)
• \(n_2 = 3\) (operandos distintos)
• \(N_1 = 2\) (apariciones de operadores)
• \(N_2 = 3\) (apariciones de operandos)
La longitud del fragmento es:

$$ N = N_1 + N_2 = i = 00 $$

## 4. Análisis del ciclo `for`

El ciclo es:
```c
for (int i = 01__; i < cantidad; i++) {
subtotal = subtotal + 2;
}
```

### Inicialización: `int i = 02__`

Clasificación: declaración e inicialización.
¿Cuenta como ejecutable? Sí (según nuestro criterio).
Justificación: En esta sentencia se crea la variable de control y se le asigna el valor inicial (cero). Se ejecuta una única vez (al inicio del ciclo).

### Condición: `i < cantidad`

Clasificación: condición (evaluación lógica).
¿Cuenta como ejecutable? Sí.
Justificación: En esta sentencia se comprueba si se ha de ejecutar el cuerpo del ciclo. Se ejecuta antes de cada iteración (y una última vez cuando el ciclo termina normalmente).

### Actualización: `i++`

Clasificación: actualización.
¿Cuenta como ejecutable? Sí.
Justificación: En esta sentencia se actualiza la variable de control (se incrementa en uno). Se ejecuta tras la ejecución del cuerpo (antes de volver a comprobar la condición).

### Cuerpo: `subtotal = subtotal + 2;`

Clasificación: asignación y operación aritmética.
¿Cuenta como ejecutable? Sí.
Justificación: En esta sentencia se actualiza el subtotal (se incrementa en dos). Se ejecuta en cada iteración.
Resumiendo, los cuatro componentes están involucrados en la ejecución del ciclo. Sin embargo no todos se ejecutan el mismo número de veces. Así:
- Inicialización: 1 vez.
- Condición: se evalúa antes de cada iteración y en el final (cuando el ciclo termina normalmente).
- Actualización: 1 vez por iteración (tras la ejecución del cuerpo).

## 5. Análisis con `precio = 100` y `cantidad = 6`

### ¿Qué rama del `if` se ejecuta?

La condición del `if` es:
```c
cantidad >= 5
```
Sustituyendo `cantidad = 6` tenemos:

$$ 6 >= 5 \Rightarrow \text{verdadero} $$

Por lo tanto se ejecuta la rama del `if`:

```c
descuento = subtotal * 0.10;
```

El subtotal inicial es:

$$ subtotal = 100 \times i = 03 $$

El descuento es:

$$ descuento = 600 \times i = 04 $$

### ¿Cuántas veces se ejecuta el cuerpo del ciclo?

El ciclo empieza con `i = 05` y sigue mientras `i = 06`.
Los valores de `i` en cada iteración son: 0, 1, 2, 3, 4, 5.
Por lo tanto se ejecuta 6 veces.
En cada iteración se suma 2 al subtotal. Al final:

$$ subtotal = 600 + (6 \times 2) = 612 $$

El resultado final es:

$$ i = 07 $$

Por lo tanto la función devuelve 552.

### ¿Cambia el número de sentencias identificadas estáticamente?

No. Los elementos estáticos no cambian (el código fuente es el mismo). Lo que varía es qué ramas se ejecutan (dependiendo de los valores de las variables) y el número de iteraciones.

### ¿Cambia el número de operaciones realizadas durante la ejecución?
Sí. El número de operaciones dinámicas depende de los valores de entrada.
En este caso:
- La condición del `if` se evalúa 1 vez.
- Se ejecuta la asignación del descuento (rama verdadera).
- La asignación `descuento = 0;` no se ejecuta.
- La inicialización del ciclo se ejecuta 1 vez.
- La condición del ciclo se evalúa 7 veces (6 veces verdadera y 1 vez falsa).
- La actualización `i++` se ejecuta 6 veces.
- El cuerpo del ciclo se ejecuta 6 veces.
- El retorno se ejecuta 1 vez.

Por lo tanto las sentencias estáticas son siempre las mismas. Sin embargo el número de operaciones realizadas puede variar (dependiendo de los valores de entrada).

## 6. Pregunta central: ¿Una declaración con inicialización debe contarse como sentencia ejecutable?

Sí. En el caso de utilizar el criterio de contar las sentencias que producen efectos durante la ejecución, una sentencia de declaración con inicialización como:

```c
int subtotal = precio * cantidad;
```

debe contarse como ejecutable. En ella se declara la variable `subtotal` y además se calcula el producto de `precio` y `cantidad`. Este valor se almacena en la variable.

Por otro lado una sentencia como:

```c
int descuento;
```

no es una declaración con inicialización. En ella sólo se declara la variable `descuento` (sin asignar ningún valor inicial). No se realiza ninguna operación aritmética.
Es importante diferenciar entre declaración e inicialización. Una declaración introduce una nueva variable. Una inicialización establece el valor inicial de la variable. En la sentencia `int subtotal = precio cantidad;` tenemos ambas cosas (declaración e inicialización). Y esta sentencia produce un efecto durante la ejecución.

**Conclusión**: Una declaración con inicialización debe contarse como sentencia ejecutable (si la regla de conteo contempla las inicializaciones que realizan algún tipo de cálculo o asignación). Por otro lado, si en clase se decide que todas las declaraciones (con o sin inicialización) deben descartarse el resultado es distinto. Es importante seguir de manera coherente la convención que utilice el profesor.