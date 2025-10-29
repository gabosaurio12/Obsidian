## Ejemplo 1 - Tidal
**Entrada**
Clic en una canción
**Procesamiento**
El sistema descarga la canción en la calidad configurada y la reproduce
**Salida**
La canción termina
**Retroalimentación**
La canción vuelve al inicio pero se queda en pausa
**Ciclo**
- Si está activado el modo de reproducción en bucle la canción se vuelve a reproducir
- Si está activado el modo de reproducción aleatoria se reproduce una canción similar
## Ejemplo 2 - Vim
**Entrada**
Tecleamos una tecla para entrar en algún modo desde el modo normal
**Procesamiento**
Dependiendo de la tecla que presionemos es lo que sucede:
- i: podemos escribir
- v: entramos al modo de selección
- esc: volvemos al modo normal
- R: entramos al modo de reemplazo
**Salida**
No hay como tal una salida
**Retroalimentación**
Cambia el cursor y el estado de vim (se muestra en la barra)
**Ciclo**
- El modo no cambia hasta que se presione la tecla esc y se regrese al modo normal
## Ejemplo 3 - Shortcat
**Entrada**
Tecleamos la combinación super (usualmente cmd + opt + R)
**Procesamiento**
Shortcat analiza la pantalla y le asigna un identificador a cada elemento de interacción en ella
**Salida**
Se muestra sobre los elementos interactivos el identificador que se les asignó
**Retroalimentación**
Se muestra toda la pantalla con los identificadores
**Ciclo**
Cada vez que se selecciona un elemento hay que volver a iniciar shortcat para que actualice los elementos