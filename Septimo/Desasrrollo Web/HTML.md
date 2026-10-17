El marcado hace referencia a etiquetar cada uno de los componentes que conforman la página web, ya sea: texto, imágenes, enlaces, botones y cualquier otro contenido para mostrarlo en un navegador web.

En la actualidad, HTML no es suficiente para crear una página web que se apegue a esstándares de calidad y usabilidad se combina con otras tecnologías para describir la aparienca/presentacón de los componentes (CSS) y la funcionalidad/comportamiento del lado del cliente (JavaScript)

## Antecedentes

En el añño 1986 se publicó el estándar ISO 8879 también conocido como SGML (Standard Generalized Markup Langauge) el cual define los lineamientos que debe seguir un lengauje de marcado y la forma en la que se debe interpretar dicho lenguaje.

Para que un lenguaje se apegue al estándar, debe de cumplir con los siguientes lineamientos.

- Una declaración SGML
- Una definición del tipo de documento (document type definition, DTD). El DTO define la sintaxis de las estructuras de formato. El DTD puede incluir definiciones adicionales, tales como referencias a entidades de caracteres
- Una especificación que describe la semántica que se debe conferir al código de formato. Esta especificación también impone restricciones de sintaxis que no pueden expresarse dentro del DTD
- Instancias o documentos que contienen datos (contenido) y código (markup). Cada documento contiene una referencia al DTD que debe usarse para interpretarlo

A partir del SGML surgen lenguajes como HtML y XML.

## Versiones

- **HTML 1.0:** La primera versión del lenguaje fue publicada a principios de 1990 como un subconjunto de SGML
- **HTML 2.0:** Se lanzó a finales de 1993 después de varias mejoras a HTML tituladas HTML+
- **HTML 3.0:** El borrador estándar de HTML 3.0 fue propuesto por el recién formado W3C en marzó de 1995. Con él se introdujeron nuevas capacidades; por ejemplo, facilidades para crear tablas, hacer que el texto fluyese alrededor de las figuras y mostrar elementos matemáticos complejos
- **HTML 4.0:** Se publicó en 1997 como una recomendación del W3C, en esta versión se adoptaron muchos elementos específicos desarrollados inicialmente para los navegadores Netscape y Mosaic, pero al mismo tiempo comenzó a limpiar el lenguaje señalando algunos componentes como "obsoletos" (deprecated)
	- Fue la que duró más años en el mercado y aunque tuvo varias revisiones y actualizaciones poco a poco se fue volviendo obsoleta y comenzó a presentar varios problemas de incompatibilidades sobre todo con el surgimiento de navegadores de nueva generación
- **HTML 5.0:** Se publicó en 2014, representa la última versión del lenguaje hasta la fecha e implementó múltiples mejoras respecto a la versión 4
	- Entre las principales mejoras que implementa se encentran:
		- Nuevas etiquetas para el manejo de audio y video
		- Nuevas etiquetas para el manejo de datos como: Datagrid, Details, Menu y Command

## Elementos/Componentes/Etiquetas

La declaración de las etiquetas HTML se puede hacer de 2 formas:
 
**Etiqueta de apertura y etiqueta de cierre:**
- Generalmente se utiliza esta forma en elementos o componentes que sirven como contenedor es decir contienen un valor explícito u otras etiquetas dentro de ellos
Ejemplo:
```
<div class="panel_izquierdo">
</div>
```

Ejemplo 2:
```
<p>
</p>
```

Ejemplo 3 (anidación de etiquetas):
```
<div class="panel_izquierdo">
	<p class="texto">
	
	</p>
	<a target="_blank" href="https://www.facebook.com">
		<i class="fab fa-facebook-square fa-lg">
			<span class="icon-label">
			</span>
		</i<
	</a>
</div>
```

- **Etiquetas vacías Empty Tags:** algunos elementos o componentes de htlm se pueden definir mediante etiquetas "vacías", es decir la etiqueta se abre y cierra en la misma definición sin necesidad de una etiqueta de cierre aparte

Ejemplo:
```
<link type="text/css" href="style.css"/>
```

## Estructura general de un documento

Un sitio web puedo estar formado por varias secciones o páginas, generalmente cada página se encuentra en un archivo .html o .htm

A cada archivo HTML se le conoce como para **documento** y debe seguir una estructura para que pueda ser interpretado de forma correcta por los navegadores web.

La estructura base es la siguiente:
- **DTD**: Define que tipo de documento se está creando, es esencial para indicar al navegador que el documento está escrito en HTML5 y con esto asegurar que se renderice correctamente:

```
<!DOCTYPE html>
```

- **Etiqueta de inicio del documento:** Es la etiqueta que abre el documento html, dicha etiqueta debe tener su correspondiente etiqueta de cierre al final del doc. Dentro de esta etiqueta se pueden especificar algunas características como el lenguaje con el que el navegador debe interpretar la página con "lang" y el SEO (Search Engine Optimization):

```
<html lang="es">
</html>
```

- **Etiqueta de encabezado:** En esta etiqueta se deben agregar las referencias a otros documentos como hojas de estilo, archivos de js, bibliotecas de terceros, el título o algunos metadatos del docuemtno como la codificación de caracteres del contenido o el titulo de la página. En esta sección se debe especificar todos los recursos que requieran ser cargados antes de que se proceso el contenido de la página:

```
<head>
</head>
```

- **Etiqueta del cuerpo:** dentro de esta etiqueta debe ir todo el contenido visible de la página web, como texto, imágenes, enlaces y otros elementos multimedia. Se recomienda organizar el contenido en secciones lógicas utilizando las etiquetas semánticas de HTML5 para mejorar la legibilidad y la estructura del documento.

```
<body>
</body>
```

### Ejemplo de un HTML

```
<!DOCTYPE html>
<html lang="es">
	<head>
		<title>Mi página web</title>
		<meta charset="UTF-8">
		<link rel="stylesheet" href="css/app.css" type="text/css"/>
		<script type="text/javascript" src="js/main.js"></script>
	</head>
	
	<body>
	</body>
</html>
```
