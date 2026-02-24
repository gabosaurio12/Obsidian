- **GET**: Recupera un recurso del servidor, la respuesta puede almacenarse en caché
- **HEAD**: Solicita solo el encabezado de respuesta
- **POST**: Envía datos al servidor para almacenamiento o cálculos, la respuesta no se puede almacenar en caché
- **PUT**: Envía datos al servidor, a menudo como un reemplazo de los datos existentes, la respuesta no se puede almacenar en caché
- **PATCH**: Envía datos al servidor a menudo como una actualización parcial de los datos existentes; la respuesta no se puede almacenar en caché
- **DELETE**: Elimina un recurso existente en el servidor; la respuesta no se puede almacenar en caché

_Safety_ inidca que el método HTTP utilizado no generará efectos secundarios, ej. alteración de datos:
- GET y HEAD recuperan recursos y no alteran datos
Si se implementan operaciones que alteran datos con métodos HTTP seguros se pueden generar resultados impredecibles.

Los métodos _idempotentes_ aseguran que se produzcan los mismos efectos secundarios cuando se envían solicitudes idénticas.
Cierto para GET y HEAD ya que no se modifican datos.
La especificación HTTP garantiza que PUT y DELETE son idempotentes.
- PUT reemplaza el recurso con una representación completamente nueva
- DELETE elimina el recurso del servidor
No se garantiza que POST sea idempotente
- Pueden crear nuevos recursos en cada solicitud o posterior
PATCH no es idempotente solo se altera un subconjunto de datos
## Ejemplo
Imaginemos la ejecución repetida de una petición utilizando un verbo no idempotente cn los mismos datos de entrada sobre un mismo recurso.
## Códigos de respuesta
- 200 Éxito
- 300 Redicrecciones
- 400 Errores cliente
- 500 Errores servidor

![[Captura de pantalla 2026-02-23 a la(s) 1.28.19 p.m..png]]
![[Captura de pantalla 2026-02-23 a la(s) 1.31.47 p.m..png]]
![[Captura de pantalla 2026-02-23 a la(s) 1.34.05 p.m..png]]