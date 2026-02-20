## Antecedentes
### Motivación
- Muchos de los problemas que resuelve el software, implica el control de elementos de la realidad, que conservan y cambian de estado, bajo diferentes condiciones relacionadas a eventos previos, su estado actual y eventos presentes.
### Ejemplos
- El control de alumnos en una escuela, donde el alumno puede estar en estado preinscrito
- Un sistema de control de seguros en ventanas de una casa inteligente, que puede estar cerrado, abierto, alarmado, etc.
### Conceptos de transiciones de estado
- Es el cambio de un sistema, objeto o proceso, desde un estado actual hacia otro diferene que surge por un evento o condicíon específica.
#### Diagramas de transición de estados
- Representa de manera gráfica a los sistemas cuyo comportaiento se basa en estados y estímulos, su estructura incluye:
	- Estados
	  Eventos
	- Transiciones
#### Consideraciones
- Es un modelo de ejecución discreto
- La ejecución procesa un evento que impolica transitar por su estructura en función de la semántica.
- Esto hace que se ejecuten ciertas acciones de manera ordenada.
## Proceso
### Etapas
#### Identificar conjuntos de característicias TD1
- ¿Cuál o cuáles son los objetos que controlan el sistema?
- Se identifica qué se va a probar
- FS = Feature Set (En el ejemplo serían _Pedidos_)
#### Derivación de condiciones de prueba TD2
- Hacer el diagrama de transición de estados en notación _input/output_
- Estímulo/acción esperada
#### Derivación de elementos de covertura de prueba TD3
#### Derivación de casos de prueba TD4
- Se generan los casos de prueba
#### Ensamble de conjuntos de prueba TD5
#### Derivación de procedimientos de prueba TD6
### Ejemplo
**Regla:** El ciclo de vida de un pedido en un sitio de comercio electrónico se apega al siguiente flujo de trabajo general.
#### TD1
- FS = Pedidos
#### TD2
- Diagrama de transición de estados con notación _input/output_:

![[Captura de pantalla 2026-02-11 a la(s) 5.31.43 p.m..png]]
#### TD3
- Derivación de elementos de cobertura
- De 0 cambios a todas las transiciones
- Matriz de adyacencia:

![[Captura de pantalla 2026-02-18 a la(s) 5.58.55 p.m..png]]

- Las columnas son el input
- Las negritas son el estado al que se va
#### TD4
- Derivación de casos de prueba

![[Captura de pantalla 2026-02-18 a la(s) 6.06.55 p.m..png]]
- Casos de prueba del camino soleado, transiciones válidas
- 0-cambios una transición simple entre un par de estados

![[Captura de pantalla 2026-02-18 a la(s) 6.08.45 p.m..png]]
- Casos de prueba del camino nublado, transiciones inválidas, para el estado nuevo
- 0-cambios una transición simple entre un par de estados

![[Captura de pantalla 2026-02-18 a la(s) 6.10.13 p.m..png]]
- Casos de prueba del camino nublado, transiciones inválidas, para el estado enviado
- 0-cambios una transición simple entre un par de estados

![[Captura de pantalla 2026-02-18 a la(s) 6.10.56 p.m..png]]
- Casos de prueba del camino nublado, transiciones inválidas, para el estado cancelado
- 0-cambios una transición simple entre un par de estados
### TD5
- Conjutnos de casos de prueba
	- Agrupados d emanera lódica según su tio

![[Captura de pantalla 2026-02-18 a la(s) 6.17.41 p.m..png]]
#### Alcance
![[Captura de pantalla 2026-02-18 a la(s) 6.22.58 p.m..png]]
Análisis de la prueba

![[Captura de pantalla 2026-02-18 a la(s) 6.23.30 p.m..png]]

## Métricas de cobertura "Camino soleado"
### Cobertura de estados
- Métrica que indica si cada estado definido en el modelo ha sido visitado al menos una vez durante las pruebas.
### Cobertura de transiciones (0-cambio)
- Métrica que determina que los eentos o disparadores que mueven el sistema de un punto a otro, hayan sido ejecutados.
### Cobertura de n transiciones (n-cambio)
- Métrica que determina las secuencias de n transiciones consecutivas, verifica que el sistema se comporta correctamente no solo al llegar a un estado, sino al salir de él hacia el siguiente destino lógico.
### Cobertura de caminos
- Es la más exhaustiva y a menudo, difícil d lograr en función de la extensión y complejidad del sistema.
- Consiste en probar todos los caminos posibles desde el estado inicial hasta el estado final.
## Ejemplo de cálculo
### 0-Cambios
![[Captura de pantalla 2026-02-18 a la(s) 6.29.15 p.m..png]]

### N-Cambios
### Cobertura de caminos
![[Captura de pantalla 2026-02-18 a la(s) 6.30.36 p.m..png]]

### Cobertura de transiciones negativas
![[Captura de pantalla 2026-02-18 a la(s) 6.33.16 p.m..png]]

## Comparativo

| Cobertura/Métrica | Rigurosidad | Objetivo principal                                        |
| ----------------- | ----------- | --------------------------------------------------------- |
| **Estados**       | Baja        | Confirmar que el sistema puede operar en todas sus formas |
| **Transiciones**  | Media       |                                                           |
| **n-Cambio**      | Alta        |                                                           |
| **Caminos**       | Muy alta    |                                                           |
### Ventajas y desventajas
#### Fortalezas
- Evaluación lógica
	- Permite evaluar la macro lógica
- Detección de defectos de secuencia
	- Es la mejor técnica para encontrar errores que solo ocurren cuando las acciones se realizan en cierto orden específico
- Métricas claras
	- Son muy sencillas, nos ofrece objetivos a medir claros y fáciles de implementar
- Optimización de casos de prueba
	- Ayuda a eliminar pruebas redundantes
#### Limitaciones
- Explosión de estados
	- Pueden hacerse diagramas muy grandes
- No apta para sistemas estáticos
	- Si no cambia el comportamiento según el historial es inútil
- Falta de datos de entrada
	- Se enfoca en el cuándo y el qué, pero no necesariamente el valor del dato
- Costo de mantenimiento
	- Si la lógica de negocio cambia hay que rediseñar el modelo y todos los casos de prueba asociados
### Criterios para su uso
- **Dependencia del historial:** El sistema responde de manera diferente al mismo evento dependiendo de lo que sucedió
- **Sistemas con ciclos de vida definidos:** Procesos que tiene etapas o flujos de trabajo claros
- **Sistemas de tiempo real o embebidos:** Como los cajeros automáticos, sistemas de control de tráfico, controles de dispositivos
- **Interfaces con flujos de navegación rígidos:** Como son los formularios por pasos, la gestión de procesos por etapas concretas
- **Reglas de negocio con bloqueos:** Sistemas que deben impedir acciones según el contexto