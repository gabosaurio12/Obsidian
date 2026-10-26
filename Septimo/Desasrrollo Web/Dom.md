# DOM

## Event-Driven

### Modelo básico de eventos

**¿Qué es un evento?**

En algunos casos un evento también se puede lanzar con acciones realizadas por otros elementos del sistema, desde acciones del sistema operativo o acciones automáticas del propio programa o agente que ejecuta el programa. Por ejemplo:

- Al cargar o liberar un elemento en memoria
- Al terminar de descargar un recurso de red
- Al lanzarse un error inesperado
- Al cargar o terminar un programa
- Etc.

**¿Qué es un escucha o listener?

Una vez que el evento o señal son lanzados, el programa debe implementar los **escuchas o listener** necesarios para manejar cada tipo de evento.
Los escuchas o listeners generalmetne son funciones o métodos de nuestro programa que contienen la lógica de programación que realizarán las acciones necesarias cuando se dispare un evento.

Hay que tener en cuenta que:

- Los eventos o señales SIEMPRE son lanzadas
- Los escuchas o listeners se implementan DEPENDIENDO de la funcionalidad que se desee implementar
- No todos los eventos tienen asociado un escucha o listener

|Evento|Descripción|Elementos para los que está definido|


