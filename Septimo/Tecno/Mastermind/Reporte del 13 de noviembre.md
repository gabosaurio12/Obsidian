**Gabriel Antonio González López**
**14 de noviembre del 2026**
## Agenda

- Unirse a salas con código
- Unirse a partida
- Eliminación de salas al escapar ambos jugadores
- Edición de perfil y cambio de contraseña
- Modales de Amigos y Solicitudes de amistad
- Cambios en el estándar

## Unirse a salas con código

Cuando se crea una sala (sea pública o privada) se muestra el código de la sala:

![[image 56.png]]

Este se puede ingresar desde la página de Cuartos (Rooms), en este caso la SalaConCodigo es *privada* por lo que no se muestra en la lista principal:

![[image-1 25.png]]

Pero al seleccionar el botón *"Código"* se abre un modal para ingresar el código:

![[image-2 12.png]]

Y al seleccionar el botón *"Unirse"* entramos a la sala:

![[image-3 3.png]]

## Unirse a partida

Cuando uno de los jugadores está listo se prende su foco:

![[image-4 2.png]]

Y cuando ambos jugadores están listos comienza la cuenta regresiva para iniciar la partida:

![[image-5 2.png]]

Si uno de los dos cancela el contador se detiene:

![[image-6 2.png]]

Finalmente, cuando el contador llega a **0**, se entra a la partida:

![[Septimo/Tecno/imgs/image-7.png]]

(**Nota:** sigo probando cosas para que los botones se vean claros y no se amontonen tanto, la funcionalidad completa está en desarrollo, está más difícil de lo que creí hacer que respondan al color y así)

## Eliminación de sala al escapar ambos jugadores

Supongamos que tenemos la sala *Intento1*:

![[image-1 25.png]]

En este caso, el jugador 1 o *host* es **gabohacker**, realmente solo es el líder/dueño de la sala, mientras que el jugador 2 es **gabosaurio**:

![[Septimo/Tecno/imgs/image-8.png]]

Si **gabosaurio** sale solo desaparece su cartel, es decir, su lugar se libera y puede volver a entrar él o cualquier otro jugador:

![[image-9.png]]

Pero, si el que abandona es el **jugador 1** o *host*, en este caso **gabohacker**, el **jugador 2** pasa a ser el *host*:

![[image-10.png]]

Y si hay solo un jugador en la sala y "Escapa", la sala se elimina:

![[image-11.png]]

(**Nota:** acabo de notar esa scrollbar fea, la quitaré para el próximo sprint de UI)

## Edición de perfil

Cada jugador puede cambiar su nombre, correo electrónico o contraseña desde la página de perfil:

![[image-12.png]]

Al seleccionar *"Actualizar"* se abre el diálogo para editar su nombre y correo:

![[image-13.png]]

El botón de lápiz con engrane que se e debajo del avatar será para subir su avatar en el próximo sprint (ya casi queda), pero por el momento puede cambiar su nombre por ejemplo:

![[image-14.png]]
![[image-15.png]]

Y sus amigos ya pueden ver su nuevo nombre de usuario:

![[image-16.png]]

Para cambiar su contraseña debe seleccionar el texto "Cambiar Contaseña" y aparecerá un modal para que ingrese la nueva:

![[image-17.png]]

Cuando cambia su contraseña se envía un código de verificación a su cuenta de correo:

![[image-18.png]]

Al ingresarlo nos informa que se creó con éxito:

![[image-19.png]]

## Modales de Amigos y Solicitudes de amistad

Aquí es lo que le comentaba de que el callback no está actualizando la pantalla, ya depuré y pareciera que sí se informa al jugador pero no está haciendo nada (intenté solo que abriera un MessageBox y nada). Entonces sigo tratando de ver qué está pasando.

## Cambios en el estándar

Por el momento solo he realizado los siguientes:
- Ahora las excepciones en el servidor se propagan hasta el nivel del servicio, se loggean y se envuelven en un FaultException para enviar al cliente
	- Voy poco a poco actualizando todos los repositorios y servicios
- Para los manejadores de eventos ahora se puede utilizar el sufijo "On" para mejorar el contexto que da el nombre del método:
```
private void OnMessageSent(object sender, string message)
{

}
```

Supongo que la próxima semana que haya un poco más de funcionalidad pesada de la jugabilidad aparezcan nuevas cosas.