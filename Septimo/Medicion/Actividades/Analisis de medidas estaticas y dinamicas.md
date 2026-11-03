**Estudiante:** Gabriel Antonio González López
**Fecha:** 22 de octubre del 2026

---

## 1. Clasificación de las medidas

| Medida                         | Estática | Dinámica | Qué representa                                                   |
| ------------------------------ | -------- | -------- | ---------------------------------------------------------------- |
| LOC                            | 🔥       |          | Líneas de código                                                 |
| Complejidad Ciclomática        | 🔥       |          | La complejidad de una sección                                    |
| Dependencias con otros módulos | 🔥       |          | Qué tan acoplados están los módulos                              |
| Duplicación de código          | 🔥       |          | Cuánto código se repite innecesariamente                         |
| Tiempo de respuesta promedio   |          | 🔥       | Cuánto tarda en responder                                        |
| Tiempo con 1,000 usuarios      |          | 🔥       | Cuánto tarda en responder con 1000 usuarios                      |
| Errores en 10,000 operaciones  |          | 🔥       | Cuántos errores aparecen al hacer un volumen alto de operaciones |
| Memoria después de 4 horas     |          | 🔥       | Qué tanto se ve afectada la memoria después de 4 horas           |
| Disponibilidad del último mes  |          | 🔥       | Cuánto tiempo estuvo disponible el útlimo mes                    |

## 2. Diagnóstico de los módulos

**Principal riesgo estático y dinámico**
- **Mayor riesgo estático:** Dependencia con otros modos
- **Mayor riesgo dinámico:** Errores en 10,000 operaciones en el módulo de pagos (86)

**Medida que requiere información adicional para interpretarse correctamente**

- Memoria después de 4 horas
	- Necesitamos saber cuáll era la cantidad de memoria inicial (en la hora 0)

## 3. Análisis de resultados aparentemente contradictorios

Carrito -> mayor cc pero es estable
Pagos -> cc moderada, bajo carga disminuye el rendimiento
Notificaciones -> pocas LOC pero alto consumo de memoria

Que el módulo de pagos disminuya su rendimiento cuando la carga es alta mientras que el módulo de Carrito que tiene una complejidad ciclomática (CC) y dependencia mucho más alta puede deberse a que los módulos de los que depende Carrito son mucho más eficientes que los que depende Pagos.

En cuanto a que Carrito que tiene una mayor CC y es más estable puede ser porque aunque sea muy complejo sea robusto, lo que aporta a la estabilidad.

Que las notificaciones tengan pocas líneas pero consuman pocas memorias se puede deber por el tipo de tareas que realiza el módulo, que aunque sea "simple" requiera por su naturaleza mucha memoria para llevar a cabo sus tareas.

## 4. Toma de decisión

Invertiría las 30 horas en el módulo de Pagos porque es el que más errores presenta en 10,000 operaciones, el que tiene una menor disponibilidad y el que mayor tiempo de respuesta toma con 1,000 usuarios. El módulo está pidiendo a gritos una refactorización con un enfoque en mejorar la confiabilidad, disponibilidad y rendimiento.

Al enfocarse en esos tres atributos se espera que se reduzcan los errores en las operaciones, el impacto del negocio sería positivo porque tendría mayor estabilidad y confidencialidad. Se debe apuntar a que el tiempo de carga disminuya al menos un 50%.

Los módulos de Carrito y Notificaciones no son una prioridad porque al final del día tienen más o menos la misma cantidad de errores y disponibilidad, así como un tiempo de carga bajo, no está afectando UX ni rendimiento del sistema.

## 5. Propuesta y seguimiento

Hay que realizar una refactorización al módulo de Pagos basándose en un diseño priorizando los siguientes atributos de calidad:
1. Confiabilidad
2. Rendimiento
3. Disponibilidad

Mando al último lugar la disponibilidad porque esperaría que al mejorar los primeros dos también aumentara un poco, lo suficiente para que sea notable.

**Medidas para verificar si la intervención funcionó:**
- **Estática:** Líneas de código
	- Se espera que cambien con una tendencia a reducir
- **Dinámica:** Errores en 10,000 operaciones y Tiempo de respuesta con 1,000 usuarios
	- La de errores debe disminuir mínimo a la mitad (43)
	- El tiempo de respuesta debería disminuir mínimo a la mitad (4.35 seg)

## Pregunta de cierre

¿Una medida estática desfavorable permite afirmar que el módulo fallará durante su ejecución? Explica la relación entre riesgo estructural, comportamiento observado y condiciones de la prueba.

No, porque un módulo con una CC muy alta puede funcionar, no como se desearía pero sí funcionar.

El **riesgo estructural** es lo que puede fallar relacionado al diseño, arquitectura e implementación.

El **comportamiento observado** es lo que sucede durante el despliegue o ejecución.

Las **condiciones de prueba** son las que se deben cumplir para que se considere "Correcto" un caso de prueba.