## Antecedentes:
- Para sistemas con comportamientos diferentes según su **estado actual o eventos previos**
- Cualqulier caso representable por un **diagrama de transición de estado**
- Permite visualizar los **estados, transiciones y eventos** que la desencadenan
- Se puede representar con una **tabla de estados** que ayuda a identificar transacciones inválidas
- Es una técnica aplicada también a **software embebido o de control**
## Ejemplos
- El control de alumnos en una escuela donde el alumno puede estar en estado de preinscrito, inscrito, baja temporal, baja definitiva, egresado o titulado
- Un sistema de control de seguros en ventanas de una casa inteligente, que puede estar cerrado, abierto, alarmado, etc.
## Diagramas de transición de estados
Representa los sistemas cuyo comportamiento se basa en estados y estímulos. Su estructura incluye:
- Estados
- Eventos
- Transiciones
Cuando probamos debemos verificar que se respete:
- La semántica del modelo
- Las acciones

## Consideraciones
Debemos tomar en cuenta que es un **modelo de ejecución discreto**, esto es:
- La ejecución procesa un evento que implica transitar por su estructura, en función de la semántica
- Esto hace que se ejecuten ciertas acciones de manera ordenada
## Ejemplo

![[Captura de pantalla 2026-02-11 a la(s) 5.31.43 p.m..png]]

![[Captura de pantalla 2026-02-11 a la(s) 5.50.40 p.m..png]]



![[Captura de pantalla 2026-02-11 a la(s) 5.52.35 p.m..png]]