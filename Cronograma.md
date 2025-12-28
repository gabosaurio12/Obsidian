**Domingo**
- [x] Verificar cuenta
	- [x] GUI Verificar token
	- [x] verificar cuenta (update)
	- [x] Probar verificación CU
		- [x] Flujo normal (soleado)
		1. crear cuenta
		2. ingresar código token
		3. cuenta verificada
		- [x] Flujo token incorrecto
		1. crear cuenta
		2. ingresar código token incorrecto
		3. cuenta no verificada
		4. ingresar el correcto
		5. cuenta verificada
		- [x] Flujo verificar después (se envía nuevo código)
		1. crear cuenta
		2. no ingresar código token
		3. cuenta no verificada
		4. iniciar sesión
		5. seleccionar verificar
		6. se envía un nuevo código de verificación
		7. ingresar el correcto
		8. cuenta verificada
		- [x] Hacer callback para actualizar la página principal y que ya no aparezca el botón de verificación si se verificó con éxito
- [ ] Descartar cartas
- [ ] Tomar tesoro
- [ ] Asignación de roles a jugadores

**Lunes**
- [ ] Alcanzar 100 Pruebas
- [ ] Reporte de pruebas
- [ ] Solo aceptar imágenes

**Martes**
- [ ] DCU solo CRUD
- [ ] Diagrama de despliegue
- [ ] 3 Diagramas de secuencia
	- [ ] Callback enviar solicitud de amistad
	- [ ] Callback eliminar amigo
	- [ ] Mover ficha

**Miércoles**
- [ ] Mejoras de sonido
- [ ] Mejoras en imágenes de fondo
	- [ ] Debe verse definido aunque sea pixel art
- [ ] Mejoras en GUI
	- [ ] Constancia en la forma de los botones
	- [ ] Constancia de colores

**Jueves (Proyecto Terminado)**
- [ ] Jugar con él

**Viernes**


**Sábado**
- [ ] 

**Extra**
- [ ] Transferencia de imágenes
	- [ ] GetImage()
		- [ ] Obtiene la imagen
		- [ ] La mete en un buffer
		- [ ] La hace byte array
		- [ ] Transporta la imagen por TCP
	- [ ] DownlowadImage()
		- [ ] Usa GetImage()
		- [ ] La reconstruye desde el byte array
		- [ ] La guarda en el dir al que corresponde (avatars)
