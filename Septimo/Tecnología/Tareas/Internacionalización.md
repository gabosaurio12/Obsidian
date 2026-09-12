3 de septiembre del 2026
Gabriel Antonio González López
## Impacto de un mercado global en el desarrollo de software

Es importante que un producto de software no solo cambie el idioma, sino que esté construido para soportar varios idiomas o alfabetos. En el texto se menciona un ejemplo donde se realiza una validación donde una entrada se acepta si sus caracteres están entre la A y la Z, el problema es que si un Danés realiza la entrada puede ir con otros caracteres como *æ, ø, y å* que están después de la Z entonces ahí la validación fallaría.

Al ver este ejemplo nos damos cuenta de que la internacionalización es muy necesaria e importante no solo por accesibilidad sino por seguridad y funcionabilidad del software.
## Cuáles aspectos culturales influyen en el desarrollo de software

Algunos aspectos son:
- Alfabetos
- Formatos de fechas
- Calendarios
- Simbologías
	- El número 13 en USA es de buena suerte
	- El número 7 en Hong Kong es de mala suerte
- Sensibilidad de imágenes
	- Algunas imágenes pueden ser ofensivas
- "Jerga" local de cada región
## Qué significa localización y cómo influye en el desarrollo de software

Es una pieza de software que ya ha sido internacionalizada, debe ser adaptada (*localizada*) a un mercado específico. Usualmente los productos se localizan primero en el mercado en el que el software es desarrollado.

La *Localización (L10N)* solo envuelve la traducción de archivos de texto externos y la creación de imagenes y bitmaps *locales* especificos.
## Qué significa Globalización y cómo influye en el desarrollo de software

La *Globalización (G11N)* usualmente se usa como sinónimo de la internacionalización. Sin embargo, usualmente engloba Internacionalización y Localización.

La *Globalización* se refiere al proceso de desarrollo de software completo, desde diseño hasta implementación y localización para la venta en los mercados de interés.
## Que se entiende por Locale y cómo influye en el desarrollo de software

Un *Locale* es una configuración que combina un idioma con una región o contexto cultural específico. Esta configuración determina cómo se debería representar la información de acuerdo a las convenciones utilizadas en esa región.

Por ejemplo, el *locale* fr-CA representa el francés utilizado en Canadá en regiones como Quebec. Además del idioma, un *locale* puede determinar aspectos como el formato de fechas, números, monedas, horas, unidades de medida o reglas de ordenamiento del texto.

En resumen, un *Locale* ayuda a identificar el idioma y la región que determinan las reglas de presentación de la información, algunos ejemplos son:

> es-MX -> Español México
> en-GB -> Inglés de Reino Unido
> fr-CA -> Francés de Canadá
> ja-JP -> Japonés de Japón

En esta página se pueden encontrar varios locales e información interesante:

> https://unicode.org/cldr/charts/49/supplemental/language_territory_information.html?utm_source=chatgpt.com