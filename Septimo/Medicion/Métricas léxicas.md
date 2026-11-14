El análisis léxico transforma el código fuente en una secuencia de tokens. Un token es una unidad reconocida por el lenguaje, como un identificador, operador, palabra reservada o literal.

Las métricas de Halstead agrupan los tokens relevantes en operadores y operandos.

> Reto de 30 segundos: identifica los tokens de x = y + 2;

## Métricas léxicas

Las métricas básicas de Halstead distinguen cuatro cantidades:

N1: número total de operadores
N2: número total de operandos
n1: operadores distintos
n2: operandos distintos

Los comentarios se excluyen porque no participan en las operaciones del programa.

Para contar operadores y operandos se necesita una convención consistente.

Ejemplo: total = precio * cantidad + envío;

> total = precio * cantidad + envío;

**Operadores**
> = *  + ;
> N1 = 4, n1 = 4

**Operandos**
> total precio cantidad envio
> N2 = 4, n2 = 4

N cuenta usos totales; n cuenta elementos distintos

Aplicando la convención del ejemplo:

Operadores: =, *, +,

Con una clasificación mutuamente excluyente, cada token contado pertenece a operadores o a operandos. Entonces N = N1 + N2.

Las llamadas a funciones requieren una regla. Puede contarse el nombre como operador de llamada o como identificador, pero nunca duplicarlo sin explicarlo.

La consistencia importa más que una convención única.

**Reto rápido**

```
if (edad >= 18)
	acceso = acceso + 1;
```

- lista los operadores y calcula N1 y n1
	- N1 = 3
	- n1 = 3
- Lista los operandos y calcula N2 y n2
	- N2 = 2
	- n2 = 2
- Si en la última línea cambiamos 1 por 2 ¿cuál de las cuatro métricas cambia?
	- Ninguna