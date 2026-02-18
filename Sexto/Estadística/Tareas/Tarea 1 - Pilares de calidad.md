---
banner: "![[dowhatisright_banner.png]]"
---

## Estadística para la Calidad de Software 
## Docente: Dr. Ángel Juan Sánchez García
## Estudiante: Gabriel Antonio González López

## 14 de Febrero del 2026

<div class="page-break" style="page-break-before: always;"></div>

## Instrucciones
**Describir cada uno de los 8 pilares del modelo ISO/IEC 25010 y Para cada pilar, proponer un ejemplo de falla real o hipotética en un sistema de software.**

**Al flinal incluir una conclusión**
## ISO/IEC 25010
### 1. Funcionalidad
Garantiza que el software proporcione funciones que cumplan con las necesidades declaradas y las correctas.
#### Ejemplo de falla real
- El software entregado no cumple con los requisitos solicitados o con las necesidades correctas:
- Eminus Móvil no permite entregar las tareas, solo visualizar las instrucciones, entonces no cubre todas las necesidades.
### 2. Rendimiento
Evalúa la rentabilidad obtenida mediante el comportamiento en el tiempo y la utilización de recursos.
#### Ejemplo de falla real
- Un tablero de juego tardaba 10 segundos en cargar para todos los jugadores por lo que no era rentable ni disfrutable jugar ese juego
### 3. Compatibilidad
Mide la capacidad de intercambiar información con otros productos y coexistir en el mismo entorno.
#### Ejemplo de falla real
- Una tienda en línea utiliza la API de PayPal para realizar los cobros, pero es muy complicado de integrar por una alta complejidad y acoplamiento en el código por lo que se debe invertir tiempo extra.
### 4. Usabilidad
Consiste en el proceso de aprendizaje y la forma de utilizar el software.
#### Ejemplo de falla real
- Arngren es un gran ejemplo de mala usabilidad, es cansado para la vista, el contendio abarca más de lo que la pantalla muestra y hay tantos links que no se sabe donde clickear.
### 5. Fiabilidad
Cuando un sistema satisface las necesidades de madurez, disponibilidad, es tolerante a fallos y teiene capacidad de recuperación es fiable.
- Ticketmaster es un gran ejemplo de mala fiabilidad, muchas veces cuando se venden boletos a un evento grande el sistema se caía y la gente no podía comprar.
### 6. Seguridad
Mantener protegidos los datos y la información para que respeten la CIA (Confidencialidad, Integrabilidad y  Disponibilidad).
- Telcel con su último software para registrar el CURP, se explotó una vulnerabilidad del software donde quedaron expuestos cientos de datos personales de clientes.
### 7. Mantenibilidad
Se incluyen subcategorías en caso de que el producto deba ser modificado: modularidad, reusabilidad, analizabilidad, capacidad de ser modificado y probado.
- Un sistema de inventariado para una tienda de modelismo estático, se programó en basic y en vez de migrar a un lenguaje más actualizado y con soporte se siguió construyendo sobre basic. También tenía muchas malas prácticas de código como el sobre uso de sentencias go-to lo cuál entorpecía el mantenimiento y sobre todo el entendimiento del código.
### 8. Portabilidad
La capacidad de ser instalado y reemplazado pudiendo adaptarse a entornos diferentes cuando es transferido.
- Un sistema de prácticas profesionales que no estaba probado en diferentes sistemas, por lo que al intentar instalarlo en otra máquina no funcionó.
## Conclusión
Cuando desarrollamos software basándonos en estos ocho pilares resulta mucho más fácil desarrollar productos de buena calidad porque no es algo que vayamos agregando y termina dando como resultado un proyecto con una estructura estable.

<div class="page-break" style="page-break-before: always;"></div>

## Referencias

https://ingertec.com/iso-25000-adecuacion-funcional-de-productos-de-software/#:~:text=Portabilidad:%20La%20capacidad%20para%20ser%20instalado%20y,otros%20entornos%20cuando%20el%20producto%20se%20transfiere.