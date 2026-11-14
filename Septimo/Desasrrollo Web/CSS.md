## ¿Cómo instertar los estilos?

Cuando un navegador lee una hoja de estilo se dará formato al documento de acuerdo con la información en la hoja de estilos.

Hay tres maneras de insertar una hoja de estilo:
- Hoja de estilos externa (etiqueta link)
- Hoja de estilos interna (etiqueta style)
- Estilo en línea (inline) a nivel de componente (atributo style de cada componente)

### Hoja de estilos externa

Una hoja de estilos externa es ideal cuando se aplica el estilo a muchas páginas. Con una hoja de estilos externa, se puede cambiar el aspecto de un sitio Web completo, cambiando un sólo archivo.

Cada página se deben incluir un enlace a la hoja de estilos con la etiqueta `<link>`. La etiqueta `<link>` va dentro de la sección de `<head>`:

```html
<head>
	<link rel="stylesheet" type="text/css" href="styles.css">
</head>
```

### Hoja de estilos interna

Una hoja de estilo interna se puede utilizar cuando un documento tiene un estilo único y no es necesario reutilizarlo en otro documento. Los estilos internos deben declararse en la sección `<head>` de una página HTML, dentro de la etiqueta `<style>`.

Por ejemplo:
```html
<head>
<style>
	body{
		background-color: linen;
	}
	h1 {
		color: maroon;
		margin left: 40px
	}
</style>
</head>
```

### Hoja de estilos en línea (inline)

Los estilos en línea se definen a nivel del componente HTML, este tipo de estilo debe ser utilizado SOLO en casos muy puntuales ya que por buenas prácticas de desarrollo se recomienda tener una separación clara entre código HTML y código CSS.

Para declarar el estilo se debe utilizar el atributo **style** del componente HTML.

Por ejemplo:
```html
<p style="color:blue;">Texto en color azul</p>
```

## Modelo de cajas

El modelo de cajas o **box model** hace que todos los componentes de las páginas web se representen mediante cajas rectangulares.

Las cajas se crean automáticamente cada vez que se inserta una etiqueta HTML.

El modjelo de cajas de cada componente HTML está compuesto por 6 partes:
- **Contenido (content):** se trata del contenido HTML del elemento (las palabras de un párrafo, una imágen, el texto de una lista de elementos, etc.)
- **Relleno (padding):** espacio libre existente entre el contenido y el borde (opcional)
- **Borde (border):** línea que encierra completamente el contenido y su relleno (opcional)
- **Imagen de fondo (background image):** imagen que se muestra por detrás del contenido y el espacio relleno (opcional)
- **Color de fondo (background color):** color que se muestra por detrás del contenido y el espacio de relleno (opcional)
- **Margen (margin):** separación existente entre la caja y el resto de cajas adyacentes (opcional)

Para definir el tamaño TOTAL de un componente es necesario definir el tamaño de los siguientes elementos:
1. **Contenido (content):** Tamaño del contenido
2. **Relleno (padding):** Tamaño del espaciado interno
3. **Borde (border):** Tamaño o grosor del borde
4. **Margen (margin):** Tamaño del espaciado externo
![[Septimo/Desasrrollo Web/imgs/image-1.png]]
### Tamaño del contenido

- Para definir el tamaño del contenido de cualquier componente HTML, se debe utilizar la propiedad que controla el ancho de la caja **width**, así como la propiedad que controla el alto de la caja **height**.
- Las propiedades **width** y **heigth** no admiten valores negativos.
- Los valores en procentaje se calculan en base al ancho del componente padre / contenedor.

Por ejemplo:
```css
.contenido1 {
	width: 250px;
	height:30px;
	color: white;
	background-color: blue;
}
```

- Aparte de un valor específico para las propiedades **width** y **height** se pueden establecer medidas relativas al contenido o al elemento padre o contenedor
- El valor **auto** (valor por defecto), indica que el navegador debe calcular el ancho del elemento automáticamente

Por ejemplo:
```css
.contenido2 {
	width: auto;
	height: auto;
	color: white;
	background-color: blue;
}
```

- Aparte de un valor específico para las propiedades **width** y **height** se pueden establecer medidas relativas al contenido o al elemento padre o contenedor
- El valor **inherit** indica que la anchura del elemento se hereda de su elemento padre

Por ejemplo:
```css
.contenido3 {
	width: inherit;
	height: inherit;
	color: white;
	background-color: gray;
}
```

- CSS define otras cuatro propiedades relacionadas con el ancho y alto de los elementos:
	- **min-width** y **min-height**, permiten definir el valor mínimo de ancho y alto que puede tomar un componente
	- **max-width** y **max-height**, permiten definir el valor máximo de aanchoy alto que puede tomar un componente

### Tamaño del relleno (padding)

- El relleno o **Padding** es el espacio desde el contenido de la caja hasta el borde de la caja y puede manipularse mediante sus 4 lados: **top, left, right y bottom**

Por ejemplo (padding de 5 mm en todas las direcciones):
```css
.padding1 {
	padding-top: 5mm;
	padding-left: 5mm;
	padding-right: 5mm;
	padding-bottom: 5mm;
	border-color: red;
	border-width: 1px;
	border-style: solid;
	color: white;
	background-color: gray;
}
```

- Para la propiedad padding también es posible aplicar abreviaciones en la definición del estilo, con el objetivo de optimizar el código CSS

Por ejemplo (padding abreviado, todos los padding tienen el mismo valor):
```css
padding2 {
	padding: 10px;
	border-color: red;
	border-width: 1px;
	border-style: solid;
	color: white;
	background-color: blue;
}
```

- Para la propiedad padding también es posible aplicar abreviacioens en la definición del estilo, con el objetivo de optimizar el código CSS

Por ejemplo (padding abreviado superior e inferior a 10mm y derecho e izquierdo a 2 mm):
```css
padding3 {
	padding: 10mm 2mm;
	border-color: red;
	border-width: 1px;
	border-style: solid;
	color: black;
	background-color: yellow;
}
```

- Para la propiedad padding también es posible aplicar abreviaciones en la definición del estilo, con el objetivo de optimizar el código CSS

Por ejemplo (padding abreviado superior 0px, derecho e izuqierdo 20mm e inferior 10px):
```css
padding4 {
	padding: 0px 20mm 10px;
	border-color: red;
	border-width: 1px;
	border-style: solid;
	color: black;
	background-color: cyan;
}
```