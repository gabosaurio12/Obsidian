- La idea principal es ver a un sistema como un conjutno de procesos llamados servidores, que ofrezcan servicios a los usuarios llamados clientes.
- Una máquina puede ejecutar varios procesos o clientes

## Ventajas

- Sencillez: el cliente envía un mensaje y se obtiene una respuesta por parte del servidor
- No se tiene que establecer una conexión sino hasta que esta se utilice
- La eficiencia

## Llamadas

Teóricamente solo se tienen dos llamadas:
- send
- receive

## Machine number

- machine: indica el número de máquina dentro de la red
- number: el número de proceso dentro de esa máquina

> localhost:3380
> machine: localhost
> number:3380

### Desventajas

- este método no posee la transparencia que se busca ya que se está identificando que existen varias máquinas trabajando
- si el servidor falla, se pierde el servicio
## Broadcasting

- Dejar que los procesos elijan direcciones al azar y localizarlos mediante transmisiones:
	- En una LAn que soporte transmisiones, el emisor puede transmitir un paquete especial de localización con la dirección del procesos destino

### Desventajas
- Es un componente centralizado y presenta problemas de mantenimiento

## Para hardware

Utilizar un hardware especial, dejando que los procesos elijan su dirección en forma aleatoria.

## Primitivas

### Primitivas con bloqueo y sin bloqueo

- Las primitivas descritas anteriormente, reciben el nombre de primitivas con bloqueo (síncorans) y sin bloqueo (asíncronas)

#### Con bloqueo
- El servidor pide algo y espera hasta que reciba una respuesta

#### Sin bloqueo
- El servidor pide algo y deja un segmento para recibir una respuesta pero no se queda esprando
- Como los callbacks
- son asíncronas, pero hay que tener cuidado porque algunas operaciones son secuencias