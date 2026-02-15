**Gabriel Antonio González López**
**Miércoles 11 de Febrero del 2026**
## 1. Identificación de componentes
**Listar los estados posibles, los eventos (disparadores) y las acciones resultantes.**
### Estados posibles
1. Disponible
2. Ocupado
3. Vencido
4. Bloqueado
### Eventos (disparadores)
- El _Mensajero_ deposita un paquete
- El _Cliente_ ingresa un un código correcto
- El _Cliente_ ingresa un código incorrecto tres veces
- El _Administrador_ interviene para que el _Locker_ vuelva a estar disponible
- El _Cliente_ no recoge el paquete en 48 horas
- El _Mensajero_ actualiza el plazo del paquete en el _Locker_
- El _Mensajero_ retira del _Locker_ el paquete
### Acciones resultantes
- El _Mensajero_ deposita un paquete
	- **Disponible -> Ocupado**
	- El _Cliente_ recibe un código para abrir el _Locker_
- El _Cliente_ ingresa un un código correcto
	**Ocupado -> Disponible**
- El _Cliente_ ingresa un código incorrecto tres veces
	**Ocupado -> Bloqueado**
- El _Administrador_ interviene para que el _Locker_ vuelva a estar disponible
	**Bloqueado -> Disponible**
- El _Cliente_ no recoge el paquete en 48 horas
	- **Ocupado -> Vencido**
	- Se notifica al mensajero
- El _Mensajero_ actualiza el plazo del paquete en el _Locker_
	- **Vencido -> Ocupado**
- El _Mensajero_ retira del _Locker_ el paquete
	- **Vencido -> Disponible**
## 2. Diagrama de Transición de Estados

![[diagrama_estados_actividad_1_lockers.png]]
## 3. Tabla de Transiciones
**Construir la matriz que contenga: Estado Actual / Evento / Acción / Sigueinte Estado.**

| Estado Actual  | Evento                                                                        | Acción                                      | Siguiente Estado |
| -------------- | ----------------------------------------------------------------------------- | ------------------------------------------- | ---------------- |
| **Disponible** | El _Mensajero_ ingresa paquete                                                | Cambio de estado y aviso al _Cliente_       | **Ocupado**      |
| **Ocupado**    | El _Cliente_ ingresa el código correcto                                       | Cambio de estado y se abre el locker        | **Disponible**   |
| **Ocupado**    | El _Cliente_ ingresa el código incorrecto tres veces                          | Se bloquea el locker                        | **Bloqueado**    |
| **Ocupado**    | El _Cliente_ no recoje el paquete en 48 horas                                 | Cambio de estado y se notifica al mensajero | **Vencido**      |
| **Bloqueado**  | El _Administrador_ desbloquea el _Locker_                                     | Se desbloquea el _Locker_                   | **Disponible**   |
| **Vencido**    | El _Mensajero_ actualiza el plazo del paquete vencido para dar otras 48 horas | Cambio de estado y se notifica al _Cliente_ | **Ocupado**      |
| **Vencido**    | El _Mensajero_ retira el paquete del _Locker_ porque no lo recogieron         | Cambio de estado y aviso al _Cliente_       | **Disponible**   |
## 4. Diseño de Casos de Prueba
**Derivar los casos de prueba específicos, incluyendo valores de entrada y resultados esperados.**

| Caso de Prueba | 1                | 2                        | 3                                    | 4                                 |
| -------------- | ---------------- | ------------------------ | ------------------------------------ | --------------------------------- |
| Estado Inicial | **Disponible**   | **Ocupado**              | **Ocupado**                          | **Ocupado**                       |
| Entrada        | Ingresar paquete | Ingresar código correcto | Ingresar códigos incorrectos 3 veces | No recojer el paquete en 48 horas |
| Estado Final   | **Ocupado**      | **Disponible**           | **Bloqueado**                        | **Vencido**                       |

| Caso de Prueba | 5                                         | 6                                 | 7                                             |
| -------------- | ----------------------------------------- | --------------------------------- | --------------------------------------------- |
| Estado Inicial | **Bloqueado**                             | **Vencido**                       | **Vencido**                                   |
| Entrada        | El _Administrador_ desbloquea el _Locker_ | El _Mensajero_ actualiza el plazo | El _Mensajero_ retira del _Locker_ el paquete |
| Estado Final   | **Disponible**                            | **Ocupado**                       | **Disponible**                                |
