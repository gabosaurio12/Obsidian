![[Captura de pantalla 2026-08-31 a la(s) 11.32.54 a.m..png]]![[Captura de pantalla 2026-08-31 a la(s) 11.37.12 a.m..png]]

![[Captura de pantalla 2026-08-31 a la(s) 11.38.28 a.m..png]]

![[Captura de pantalla 2026-08-31 a la(s) 11.45.02 a.m..png]]

![[Captura de pantalla 2026-08-31 a la(s) 11.47.31 a.m..png]]

![[Captura de pantalla 2026-08-31 a la(s) 11.50.02 a.m..png]]

![[Captura de pantalla 2026-08-31 a la(s) 11.51.50 a.m..png]]
![[Captura de pantalla 2026-08-31 a la(s) 11.57.23 a.m..png]]
![[Captura de pantalla 2026-08-31 a la(s) 11.57.38 a.m..png]]![[Captura de pantalla 2026-08-31 a la(s) 12.04.23 p.m..png]]![[Captura de pantalla 2026-08-31 a la(s) 12.07.43 p.m..png]]![[Captura de pantalla 2026-08-31 a la(s) 12.08.43 p.m..png]]

![[Captura de pantalla 2026-08-31 a la(s) 12.29.11 p.m..png]]![[Captura de pantalla 2026-08-31 a la(s) 12.34.38 p.m..png]]![[Captura de pantalla 2026-08-31 a la(s) 12.36.17 p.m..png]]![[Captura de pantalla 2026-08-31 a la(s) 12.38.58 p.m..png]]

## Ejercicio: 5. Ejecución del contenedor y carga de recursos web

Vamos a ejecutar una instancia de nuestro nuevo contenedro, pero ahora vamos a montar una carpeta con recursos web, para que al ejecutar una petición en el navegador no salga la págian de default de Nginx sino el contenido que querramos.

Crear la carpeta:

> /tmpdocker/miprimerapp

Dentro de esa carpeta crea un archivo index.html. Abrirlo con el editor y añadir el contenido:

```
<!DOCTYPE html>

<html lang="es">

<head>

	<title>Mi primer página web</title>

	<meta charset="UTF-8">

</head>

<body>

	Esta es mi primer página web

</body>

</html>
```

Vamos a ejecutar una instancia de nuestro nuevo contenedor, pero ahora vamos a montar una carpeta con recursos web para que al ejecutar una petición en el navegador no salga la página de default de Nginx sino el contendio que nosotros decidamos.

Ejecutar en terminal:

```
docker run -it --rm --name miservidorweb01 -p 8080:80 -v ~/tmpdocker/miprimerapp:/var/lib/nginx/html/ servidorwebnginx:dsw
```

Parámetros:
- -v permite establecer un punto de montaje ya sea de una carpeta o un archivo, entre el host y el contenedor, en este caso buscamos montar el contenido de la carpeta dsw.mi primerapp.com, en la carpeta de recursos web del servidor nginx ubicada en /var/lib/nginx/html

Levantamos el servidor nginx
```
# nginx
```

Al abrir en el navegador *localhost:8080* ya aparece el nuevo index.html

Cerramos ese contenedor y corremos uno nuevo:

```
docker run -it --rm --name miservidorweb -p 8080:80 servidorwebnginx:dsw
```

En una ventana nueva de terminal ejecutamos:

```
docker commit -c "CMD [\"nginx\", \"-g\", \"daemon off;\"]" miservidorweb servidorwebnginx:dswv2
```

Parámetros:
- -c Permite especificar el contexto o configuración de ejecución de una imagen, en este caso estamos especificando 2 valores:
	- nginx: para que se ejecute al iniciar
	- -g daemon off, para que el servidor nginx debe ejecutarse en primer plano (foreground)

Vamos a ejecutar en una nueva ventana de terminal:

```
docker run -it --rm --name miservidorweb01 -p 8080:80 -v ~/tmpdocker/miprimerapp:/var/lib/nginx/html/ servidorwebnginx:dswv2
```

En el equipo crear:

> /tmpdocker/traveler
> /tmpdocker/ogistic

Levantar 2 instancias con los comandos:

```
docker run -it --rm --name miservidorweb02 -p 8085:80 -v ~/tmpdocker/traveler:/var/lib/nginx/html/ servidorwebnginx:dswv2
```

```
docker run -it --rm --name miservidorweb03 -p 8090:80 -v ~/tmpdocker/ogistic:/var/lib/nginx/html/ servidorwebnginx:dswv2
```
## Ejercicio 6: (Extra) publicación de imagen en Docker Hub

Ya que verificamos que nuestra imagen con el servidor web Nginx funciona correctamente, vamos a subir nuestra imagen al repostiorio de Docker Hub.

En terminal ejecutar:

```
docker tag IMAGEN_LOCAL TU_USERNAME/IMAGEN_REMOTA
```

Ejemplo:

```
docker tag servidorwebnginx:dswv2 gabosaurio05/servidorwebnginx:dswv2
```

Para subirlo a docker hub:

```
docker push TU_USERNAME/IMAGEN_REMOTA
```

Ejemplo:

```
docker push gabosaurio05/servidorwebnginx:dswv2
```