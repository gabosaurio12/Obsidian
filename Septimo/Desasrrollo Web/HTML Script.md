**Ejemplo:**
```js
<script type="text/javascript">
	document.write("<b>Texto inyectado desde Script de JavaScript</b><br><br>");
</script>
```

**Ejemplo:**
```javascript
<srcipt type="text/havascript" src="misscripts.js"></script>
```

**Caracteres especiales:**
- &nbsp
	- **no-break space:** permite introducir en el contenido de tipo texto algunos espacios en blanco (3) sin necsdiad de tener que escribirlos en el documento y sin que se genere un salto de línea

**Otros caracteres especiales**

| Carácter | Representación |
| -------- | -------------- |
| <        | `&it`          |
| >        | `&gt`          |
| á        | `&aacute`      |
| Á        | `&Aacute`      |
| é        | `&eacute`      |
| É        | `&Eacute`      |
| í        | `&iacute`      |
| Í        | `&Iacute`      |
| ó        | `&oacute`      |
| Ó        | `&Oacute`      |
| ú        | `&uacute`      |
| Ú        | `&Uacute`      |
| ñ        | `&ntilde`      |
| Ñ        | `&Ntilde`      |
| TM       | `&#153`        |
| €        | `&euro`        |
| ç        | `&ccedil`      |
| Ç        | `&Ccedil`      |
| ü        | `&uuml`        |
| Ü        | `&Uuml`        |
| &        | `&amp`         |
| ¿        | `&iquest`      |
| ¡        | `&iexcl`       |
| ""       | `&quot`        |
| .        | `&middot`      |
| ø        | `&ordm`        |
| a        | `&ordf`        |
| ¬        | `&not`         |
| ©        | `&copy`        |
| ®        | `&reg`         |

## Encabezados

En las primeras versiones de HTMl se crearon etiquetas que permitían dar cierto formato a un texto como si fueran encabezados de secciones de la página.

Aunque actualmente dichos elementos se pueden omitir utilizando hojas de estilo, las etiquetas siguen vigentes y pueden seguir utilizándose:

| Etiqueta | Ejemplo       |
| -------- | ------------- |
| `<H1>`   | <h1>Hola</h1> |
| `<H2>`   | <h2>Hola</h2> |
| `<H3>`   | <h3>Hola</h3> |
| `<H4`    | <h4>Hola</h4> |
| `<H5>`   | <h5>Hola</h5> |
| `<H6>`   | <h5>Hola</h5> |

## Etiqueta `<a>`

- La etiqueta `<a>`permite agregar enlace hacia otro documento HTML u otro recurso dentro o fuera de nuestro sitio web
- También se les conoce como vínculo o hipervínculo y representan el principal elemento de navegación en los sitios web, aunque actualmente existen nuevas técnicas de *ruteo* entre elementos o páginas siguen siendo de mucha importancia
- Los atributos que puede tener la etiqueta son:
	- href: indica el recurso o elemento al que va a hacer referencia el vínculo
	- target: indica el comportamiento de la página web una vez pulsado el vínculo (opcional - si no se inidica el comportamiento por default es self)
		- `_blank`: abre el documento vinculado en una ventana nueva del navegador
		- `_self_`: abre el documento vinculado en la misma ventana

**Ejemplo:**
```html
<a href="https://uv.mx">Ir a UV</a>
```

**Ejemplo 2:**
```html
<a href="https://uv.mx" target="_blank">Ir a UV en nueva pestaña</a>
```

**Ejemplo 3:**
```html
<a href="mipagina2.html">Mi segunda página</a>
```

## Listas

- Listas `<ul>` y `<ol>`
- estas listas se suelen usar para navegación
- las listas deben tener elementos, que se declaran con la etiqueta `<li>` (list item)

**Ejemplo con ul**
```html
<ul>
	<li>Ingeniería de software</li>
	<li>Tecnologías computacionales</li>
	<li>Redes</li>
</ul>
```

**Ejemplo con ol**
```html
<ol>
	<li>Ingeniería de software</li>
	<li>Tecnologías computacionales</li>
	<li>Redes</li>
</ol>
```

## Formularios `<form>`

- Permite definir una sección dentro de la página que contendrá componentes interactivos para el acceso de datos o elementos de acción como botones
- Los formularios pueden asociarse a una acción que se vincule con una llamada de envío de los datos recabados al servidor o a una función en JS para el procesamiento de los datos

**Ejemplo:**
```html
<form action="registro()">
	<!-- componentes del formulario -->
</form>
```


## Etiqueta `<input>`

- Permite crear un componente de entrada de datos dentro de la página
- Existen distintos tipos de coponentes de datos, todos ellos diferenciados por el atributo type de la etiqueta input. Entre los tipos principales se encuentra:
	- text: caja de texto simple
	- checkbox: casilla de selección
	- color: selector de color en hexadecimal
	- date: caja de textpo para fecha (año, mes y día) con botón para seleccionar desde un calendario
	- email: casilla de texto con validación de correo electrónico
	- file: selector de archivos
	- number: casilla de números con punto flotante
	- password: casilla de texto cuyo valor permanece oculto
	- radio: casilla de selección con soporte para grupos
	- submit: botón de acción dentro de un formulario
	- reset: limpiar todos los campos dentro de un formulario
	- button: botón simple, se requiere programar un comportamiento específico
- Los atributos que puede tener la etiqueta input son variados, pero los más comunes son:
	- id: permite asignar un id al componente, es necesario si se busca acceder al componente desde algún script
	- maxlength: es el tamaño máximo de caracteres que caben en una caja de texto
	- required: campos obligatorios
	- value: almacena el valor que contiene el componente
	- name: permite agregar un nombre al componente, en el caso de los radiobuttons el nombre sirve como agrupador para exluir la selección de 2 o más opciones

## Etiqueta `<label>`

- Permite crear una etiqueta de texto, generalmente vinculada a un componente de entrada de datos dentro de la página
- Los atributos que puede tener la etiqueta label son:
	- for: permite indicar el id del componente de datos al que se vinculará la etiqueta
	- form: permite definir cual es el formulario al que le pertenece la etiqueta, en caso de que solo exista un formulario en la página web este atrubuto se puede omitir

**Ejemplo:**
```html
<label for="nombre">Nombre(s)</label>
<input type="text" id="nombre" required />
```

**Ejemplo 2:**
```html
<label for="fechanac" form="f2">Fecha de nacimiento</label>
<input type="date" id="fechanac" />
```

**Ejemplo 3:**
```html
<input type="submit" id="ejecutar" />
```
