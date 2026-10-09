
Dos soluciones: una para el cliente otra para el servidor.

## Client SLN

- Assets
- Lógica de juego

## Server SLN

- Servicios
- Excepciones
	- hacer un tipo variante de http code errors
	- el servidor manda los códigos, el cliente tiene el significado de esos códigos
- Base de datos
- Manejo de avatares
	- Regla: Las imágenes deben ser bajadas en hilos independientes
		- No debería venir con otros datos (al solicitar los datos de un jugador en un hilo vienen los datos y en otra la imágen)
	- se puede almacenar el path en la bd, ese path es del filesystem
	- se puede tener un servidor de almacenamiento
	- idealmente no deberían pesar más de 100kb
- este sí tendra comentarios de api
- 