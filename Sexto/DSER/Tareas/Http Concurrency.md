## Capturas
### Postman GET
Postman hace una solicitud GET que genera un ETag:
![[Captura de pantalla 2026-02-27 a la(s) 4.37.19 p.m..png]]
### Navegador web GET
El navegador hace una solicitud GET que debe tener el mismo ETag que salió en postman:
![[Captura de pantalla 2026-02-27 a la(s) 4.38.46 p.m..png]]
### Postman PUT
Postman hace una solicitud PUT usando el ETag como valor del header If-Match, devuelve el json del proyecto:
![[Captura de pantalla 2026-02-27 a la(s) 4.43.54 p.m..png]]
### Navegador Web PUT
El navegador hace una solicitud PUT usando el ETag previamente generado pero como ya cambió por el PUT de postman, o es válido y devuelve un error 428:
![[Captura de pantalla 2026-02-27 a la(s) 4.41.04 p.m..png]]
### Navegador Web PUT con ETag actualizado
El navegador hace una solicitud GET obteniendo un nuevo ETag con el que puede hacer una solicitud PUT para que regrese otro proyecto:
![[Captura de pantalla 2026-02-27 a la(s) 4.42.11 p.m..png]]
## Pregunta
- ¿Qué problema se evita utilizando If-Match?
	- No alterar la integridad de los datos cuando otra persona los accedió (porque puede que ya hayan cambiado).
- ¿Qué representa realmente la ETag?
	- Un código http que se guarda en la cabecera que se usa para validar el caché web.
- ¿Qué sucedería si el servidor no exigiera la precondición?
	- Que podrían hacerse cambios o acceder a datos que ya hayan cambiado.