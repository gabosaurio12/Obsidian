- Herramienta comúnmente usada en sistemas en los cuales las funciones del sistema son de gran importancia y son más complejas que los datos que éste maneja
- Se utilizaron por primera vez como notación para el estudio del diseño
- La notación se tomó prestada de la teoría de grafos y sigue siendo utilizada en la creación de modelos de **procesos**
- No sólo se pueden usar para modelar sistemas de proceso de información sino tmabién para **modelar organizaciones** enteras
## Para qué son útiles
- Para describir un flujo de trabajo
- Describir un proceso de negocio
## Por qué crearlos
- Analizar la situación actual con la meta de identificar obstáculos y mejorar la eficiencia
- Presentar y discutir un proceso con alguien
- Proponer un proceso de negocio antes de desarrollarlo en detalle e identificar problemas potenciales
- Identificar, documentar y comunicar a los interesados lso requerimientos de un proyecto
- Las personas pueden señalar en el diagrama al discutir un proceso o flujo en lugar de usar palabras para describir lo que quieren decir
## Proceso
- También llamado burbuja, función o transformación
- Represnta la parte del sistem aque transforma las entradas en salidas
- Se nombra o describe con una sola palabra, frase u oración sencilla
	- CALCULAR IMPUESTOS DE VENTAS
## Flujo
- Se representa gráficamente con una flecha que entra o sale de un proceso
- Se usa para describir el movimiento de bloques o paquetes de información de una parte del sistema a otra
- Para muchos sistemas complejos de l mundo real los flujos corresponden a materiales y datos
- **Muestran dirección**
## Almacen
- Se emplea para modelar una colección de datos en reposo
- **No** se trata de una **base de datos**, archivo o trabla de base de datos, es una colección de datos que pudiera ser también física
- Se conectan mediante flujos a los procesos
## Proceso para construir DFD
1. Escoger nombres con significado para los procesos, flujos, almacenes y terminadores
	- Recordar que un proceso en un DFD representa una función que se está llevando a cabo
	- Identificar roles y actividades que llevan a cabo las personas pra nombrar terminadores y burbujas (evitar nombres de personas)
	- Utilizar verbos y nombres de objetos para nombres de procesos
	- Los nombres de procesos deben provenir de un vocabulario que tenga significado para los interesados
	- Evitar utilizar verbos como "hacer", "manejar" y "procesar" normalmente es un indicador de que el analista-diseñador no está seguro de la función que se está desarrolalndo (Ej. "Procesar solicitud")
	- Los nombres deben provenir del dominio , no utilizar terminología técnica como "procesar" o "subistema"
2. Numerar los procesos
	- No implican una secuencia, solo son un ID
	- Recordar que son procesos asíncronos
	- Ser consistente en la aplicación de la numeración
3. Redibujar el DFD tantas veces como sea necesario estéticamente
	- Ningún diagrama va a quedar finalizado en el primer intento
	- Procurar que se lea:
		- De izquierda a derecha
		- De arriba a abajo
	- Mejorarlo estéticamente par amejorar la comprensión
	- Recordar que se dirigen a un público que podría o no incluír al autor
4. Evitar los DFD excesivamente complejos
	- No crear un DFD con demasiados procesos, flujos., almacenes y terminadores
	- Una DFD debería poder representarse en una hoja carta
	- Preferentemente menos de una 
	- Ver DFD Por niveles
5. Asegurarse de que el DFD sea internamente consistente y que también lo sea con cualquier DFD relacionado con él
	- Evitar sumideros infintios (solo reciben información)
	- Evitar burbujas de generación espontánea (producen datos de la nada)
	- Tener cuidado con los flujos y procesos no etiquetados
	- Tener cuidado con almacenes de "sólo lectura" o "sólo escritura"
## DFD Por niveles
- Sistemas sencillos 2-3 niveles, medios 3-6 niveles y complejos 5-8 niveles
- Recordar que el número de burbujas crece exponencialmente
- Si cada diagrama tiene 7 burbujas, para el nivel 3 serán 343, para el quinto 16,807 y para el noveno 40,353,607
- Habrá partes del sistema más complejas que otras, pero todas se tienen que partir al mismo nivel de detalle
