Es muy similar a la de Java y C. Las normas básicas  son:
- No se tienen en cuenta los espacios en blanco y las nuevas líneas
- Se distinguen las mayúsculas y minúsculas
- No se define el tipo de las variables
- No es necesario terminar cada sentencia con ;
- Se pueden incluir comentarios
- JS define dos tipos de comentarios: una línea (//) y varias líneas (/* */)

## Variables

- Se crean mediante dos palabras reservadas:
	- **var** permite declarar variables de ámbito GLOBAL
	- **let** declara variables de ámbito LOCAL
- Si se asigna un valor al momento de declarar una variable, se asignará el tipo de dato correspondiente al valor asignado
	- Mientras no se inicialice una variable esta tendrá el tipo de dato UNDEFINED

```javascript
var numero_1;
let numero_2 = 1;
numer_1 = 10;
```

### Numéricos

- Se utilizan para almacenar valores numéricos enteros (int) o decimales (float)
- En este caso, el valor se asigna indicando directamente el número entero o decimal
- Los número decimales utilizan el carácter `.` en vez de `,` 

### Cadenas de texto

- Se utilizan para almacenar caracteres, palabras y/o frases de texto
- Para asignar el valor se encierra en comillas dobles `""`, comillas simples `''` para delimitar su comienzo y su final

```
var mensaje = "Bienvenido a nuestro sitio web";
let nombre_producto = 'Producto ABC'
var letra = 'c'
```

- Se pueden incluir caracteres especiales dentro de una cadena de texto

| Caracter        | Resultado |
| --------------- | --------- |
| Nueva línea     | \n        |
| Tabulador       | \t        |
| Comilla simple  | \'        |
| Comimlla doble  | \"        |
| Barra inclinada | \\        |

### Booleano

- Las variables de tipo boolean o booleano también se conocen con el nombre de variables de tipo lógico
- Almacena `true` o `false`

```
let existe = false;
var ivaIncluido = true;
```

### Operadores relacionales

| Operador | Descripción                                                 |
| -------- | ----------------------------------------------------------- |
| <        | menor que                                                   |
| <=       | menor o igual que                                           |
| >        | mayor que                                                   |
| >=       | mayor o igual que                                           |
| ==       | igual que                                                   |
| !=       | igual que                                                   |
| ===      | igual que (se evalúa tanto el valor como el tipo de dato)   |
| !==      | distinto de (se evalúa tanto el valor como el tipo de dato) |

## Uso en html

```html
<scritp type=text/javascript">
	alert("Un mensaje de prueba");
</script>
```

```html
<script type="text/javascript" src="js/codigo.js"></script>
```

