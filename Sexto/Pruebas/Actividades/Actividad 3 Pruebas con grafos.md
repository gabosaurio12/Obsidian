**Gabriel Antonio González López**
**Lunes 23 de Febrero del 2026**
## 1. Dibujar el grafo

![[StreamStarGrafos.png|484x684]]

<div class="page-break" style="page-break-before: always;"></div>

| Causas                                                       |
| ------------------------------------------------------------ |
| C1: El usuario tiene 5000 Star-Points acumulados             |
| C2: El usuario ha visto más de 20 horas contenido este mes   |
| C3: El usuario ya tiene una subscripción activa en ese canal |

| Efectos                          |
| -------------------------------- |
| E1: Rechazar solicitud           |
| E2: Obtener suscripción gratuita |
| E3: Obtener descuento del 20%    |
| E4: Seguir participando          |

| Causas          | Efectos |
| --------------- | ------- |
| C3              | E1      |
| C1 ^ C2 ^ !C3   | E2      |
| C1 ^ !C2        | E3      |
| !C1 ^ !C2 ^ !C3 | E4      |
## 2. Identificar Restricciones

| Restricciones | Descripción                               |
| ------------- | ----------------------------------------- |
| R1            | Un usuario con C3 no puede tener E2       |
| R2            | No se puede dar E2 y E4 al mismo  tiempo  |
| R3            | No se puede dar E2 y E3 al mismo tiempo   |
| R4            | E1 y E4 no pueden suceder al mismo tiempo |
<div class="page-break" style="page-break-before: always;"></div>

## 3. Construir la tabla de decisión

V = Verdadero
F = Falso
X = Efecto activado

|             | G1  | G2  | G3  | G4  | G5  | G6  | G7  | G8  |
| ----------- | --- | --- | --- | --- | --- | --- | --- | --- |
| **Causas**  |     |     |     |     |     |     |     |     |
| C1          | F   | V   | V   | F   | V   | V   | F   | F   |
| C2          | F   | V   | F   | F   | V   | F   | V   | V   |
| C3          | V   | F   | F   | F   | V   | V   | V   | F   |
| **Efectos** |     |     |     |     |     |     |     |     |
| E1          | X   |     |     |     | X   | X   | X   |     |
| E2          |     | X   |     |     |     |     |     |     |
| E3          |     |     | X   |     |     |     |     |     |
| E4          |     |     |     | X   |     |     |     | X   |

## Casos de prueba

| No. Caso | Entradas                                                                              | Salidas                             |
| -------- | ------------------------------------------------------------------------------------- | ----------------------------------- |
| 1        | Star-Points: 2000<br>Horas de contenido vistas: 5<br>Estado de suscripción: Inactivo  | Mensaje de "Siga participando" (E4) |
| 2        | Star-Points: 2000<br>Horas de contenido vistas: 5<br>Estado de suscripción: Activo    | Solicitud rechazada (E1)            |
| 3        | Star-Points: 5001<br>Horas de contenido vistas: 21<br>Estado de suscripción: Inactivo | Suscripción gratuita activada (E2)  |
| 4        | Star-Points: 5000<br>Horas de contenido vistas: 19<br>Estado de suscripción: Inactivo | Descuento del 20% activado (E3)     |
| 5        | Star-Points: 5000<br>Horas de contenido vistas: 21<br>Estado de suscripción: Activo   | Solicitud rechazada (E1)            |
| 6        | Star-Points: 5000<br>Horas de contenido vistas: 19<br>Estado de suscripción: Activo   | Solicitud rechazada (E1)            |
| 7        | Star-Points: 4999<br>Horas de contenido vistas: 21<br>Estado de suscripción: Activo   | Solicitud rechazada (E1)            |
| 8        | Star-Points: 4999<br>Horas de contenido vistas: 21<br>Estado de suscripción: Inactivo | Mensaje de "Siga participando" (E4) |
