
> **Caso:** Una organización registró durante 20 semanas información sobre historias de usuario, defectos y mejoras técnicas. La dirección desea saber si el proceso es predecible, dónde se concentra la espera, qué defectos deberían atenderse primero y si los tiempos de build presentan señales especiales. Antes de responder, deberás verificar si la base permite una comparación válida.

> **Problemática seleccionada:** Saber si en 72 horas se puede terminar un trabajo de software y si la espera de la revisión podría considerarse como punto de retraso.
> Elegí esta variable porque se puede separar el desempeño de la calidad de datos y la estabilidad del proceso.

---

## Planeación de la medición

| Elemento                | Definición                                                                                                                       |
| ----------------------- | -------------------------------------------------------------------------------------------------------------------------------- |
| *Asunto de gestión*     | Cumplimiento del tiempo de ciclo y detección de variación especial en el proceso de compilación (build)                          |
| *Pregunta medible*      | ¿Qué porcentaje de los trabajos se termina en 72 horas o menos y que patrón comparten sus tiempo de ciclo durante 20 semanas?    |
| *Entidad*               | Elemento de trabajo registrado en *Datos_Proceso*                                                                                |
| *Atributo principal*    | Tiempo transcurrido desde el inicio hasta el final                                                                               |
| *Medida principal*      | *Tiempo_Ciclo_Horas* en horas                                                                                                    |
| *Periodo*               | Semanas de 1 a 20                                                                                                                |
| *Fuente*                | Hoja de *Datos_Proceso* para los build y hoja *Control_Xbar_R*                                                                   |
| *Criterio de inclusión* | Registros de trabajo con tiempo de ciclo informado; la observación en días se convierte a horas                                  |
| *Excepciones*           | Se conservan los registros atípicos y se documentan inconsistencias de ID, fechas, unidades, signos, reglas y categorías         |
| *Decisión posible*      | Se prioriza la reducción de espera y se revisa la configuración de agentes de compilación si las señales especiales se mantienen |
> La hoja original se conserva sin modificar. No se tuvo que sobreescribir ningún valor original proque se pudo usar una versión lógica con *Tiempo_Ciclo_Horas*

---

## Calidad de los datos

| Problema encontrado                                                                                      | Criterio afectado | Tratamiento                                                                                                        | Justificación                                                                         |
| -------------------------------------------------------------------------------------------------------- | ----------------- | ------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------- |
| `WI-807` aparece dos veces como identificador                                                            | Consistencia      | Separar y marcar la segunda observación como ID duplicado                                                          | El catálogo exige IDs únicos y las dos filas continen datos diferentes                |
| `WI-018` no tiene Fecha_Fin                                                                              | Validez           | Conservar para el análisis del tiempo ya informado, pero excluirlo de comprobaciones basadas en la fecha de cierre | La fecha de cierre puede faltar si el trabajo está abierto aún                        |
| `WI-041` tiene *Tiempo_Ciclo = 1.32* y unidad *dias*                                                     | Consistencia      | Convertir a *31.62* horas: *1.32 x 24*                                                                             | El análisis compara una sola unidad                                                   |
| `WI-066` tiene *Horas_Espera_Revision = -1.5*                                                            | Validez           | Conservar el registro y marcar la espera como inválida para análisis específicos de espera                         | El catálogo no admite valores negativos pero no se elimina el trabajo por ser atípico |
| `WI-094` usa *v1* en la semana 16                                                                        | Consistencia      | Conservar y marcar como versión incompatible                                                                       | El catálogo indica *v1* para semanas 1-14 y *v2* para semanas 15-20                   |
| `WI-115` tiene *Fecha_Fin* anterior a *Fecha_Inicio*                                                     | Validez           | Conservar para la métrica ya calculada, pero excluirlo de validaciones derivadas de fechas                         | Contradice la regla de que el inicio no puede ser posterior al cierre                 |
| `WI-109` tiene *Defectos_QA = 0*, *Causa_Principal_Defecto = Sin defecto*, pero *Defecto_Producción = 1* | Consistencia      | Conservar y marcar para revisión de evidencia de producción                                                        | Un defecto posterior a la liberación no queda explicado por los datos de QA           |

### Efecto sobre la comparación

*Tiempo_Ciclo* queda homologado a horas mediante una nueva variable derivada. Así las 20 semanas pueden observarse como una sola serie para la pregunta de cumplimiento en 72 horas. Esto no elimina las diferencias de versión de regla ni las inconsistencias de fecha; solo hace comparable la unidad del tiempo principal.

---

## Resultados descriptivos

### Tiempo de ciclo
| Estadístico                            | Resultado            |
| -------------------------------------- | -------------------- |
| **Registros con tiempo válido**        | 120                  |
| **Media**                              | 32.72 h              |
| **Mediana**                            | 36.95 h              |
| **Desviación Estándar**                | 12.18 h              |
| **Mínimo**                             | 16.30 h              |
| **Primer cuartil**                     | 29.60 h              |
| **Tercer cuartil**                     | 46.40 h              |
| **Máximo**                             | 69.80 h              |
| **Trabajos en 72 h o menos**           | 120 de 120<br>(100%) |
| **Trabajos con reproceso**             | 70.83%               |
| **Trabajos con defecto en producción** | 10.83%               |
La media es mayor que la mediana, lo que puede significar una ligera cola hacia tiempo altos. Aún así, el máximo observado es menor que 72 horas (69.80 h), por lo que la meta de capacidad se cumple.

La relación lineal entre *Horas_Espera_Revision* y *Tiempo_Ciclo_Horas* es casi nula en estos datos (0.01), esto significa que la espera de revisión no puede señalarse como el culpable del retraso sin separar por equipo, tamaño y tipo de trabajo.

### Mediana por equipo

| Equipo      | Registro | Mediana del ciclo |
| ----------- | -------- | ----------------- |
| **Jaguar**  | 37       | 32.70 h           |
| **Quetzal** | 42       | 37.95 h           |
| **Águila**  | 41       | 42.10 h           |
**Jaguar** representa la menor mediana observada y **Águila** la mayor. Esto no es suficiente para determinar que un equipo sea mejor que otro, también podrían afectar el tamaño, el tipo de trabajo, la cantidad de reproceso y la distribución de tareas.

---
<div class="page-break" style="page-break-before: always;"></div>

## Gráficos e interpretación

### Histograma del tiempo de ciclo

![[Septimo/Medición/imgs/image.png]]

> **Patrón observado:** los tiempos se concentran alrededor de 25 y 50 horas con una cola hacia la derecha (valores altos)
> **Evidencia:** una medianda de 36.95 h, la media de 38.72 h y máximo de 69.80 h
> **Límite:** el histograma describe la distribución, pero no explica qué causa los tiempos altos ni compara tipos de trabajo
> **Siguiente pregunta:** ¿Los trabajos grandes o ocn más espera se concentran en la cola superior?

---
<div class="page-break" style="page-break-before: always;"></div>

### Dispersión entre tamaño y revisión

![[Septimo/Medición/imgs/image-1.png]]

> **Patrón observado:** se aprecia una asociación positiva entre líneas modificadas y horas de revisión
> **Evidencia:** la correlación lineal calculada es aproximadamente de 0.68
> **Límite:** asociación no significa causalidad. Pueden intervenir los puntos de historia, el tipo de trabajo, ele quipo y la complejidad del cambio
> **Siguiente pregunta:** ¿La relación se mantiene al separar por equipo y tipo de trabajo?

---
<div class="page-break" style="page-break-before: always;"></div>

### Gráfica de corrida semanal

![[Septimo/Medición/imgs/image-2.png]]

> **Patrón observado:** la mediana semanal aumenta de manera visible en la semana 13 y alcanza 55.40 horas, despúes llega a 45.05 en la semana 19
> **Evidencia:** la mediana global es 36.95 h, la semana 13 coincide con la observación contextual de que un revisor senior salió de vacaciones
> **Límite:** la coincidencia temporal es una hipótesis contextual, pero no demuestra la causa
> **Siguiente pregunta:** ¿La ausencia del revisor también elevó la espera de revisión al separar trabajos por tamaño?

---
<div class="page-break" style="page-break-before: always;"></div>

### Diagrama de Pareto de defectos

![[Septimo/Medición/imgs/image-3.png]]

> Se excluyó la categoría *Sin_defecto*. Las frecuencias principales fueron: *Interfaz* 23, *Validación* 22, *Datos* 16, *Inicialización* 10, *Cálculo* 9 y *Configuración* 3.
> **Patrón observado:** Interfaz y Validación concentran 45 de 83 registros con una causa de deecto, más o menos 52.2%
> **Evidencia:** son las dos barras más altas del Pareto
> **Límite:** la categoría describe el defecto dominante, pero no aporta severidad, impacto económico ni evidencia de causa raíz
> **Siguiente pregunta:** ¿Qué categorías tienen mayor impacto en producción y no solo mayor frecuencia?

---
<div class="page-break" style="page-break-before: always;"></div>

### Gráficas X y R

![[Septimo/Medición/imgs/image-4.png]]

> Para esta gráfica R: *R = 3.57 min*, *LIC = 0.00 min* y *LSC = 8.15 min*.
> **Patrón observado:** el día 16 tiene un rango de *19.50 min*, por encima del límite superior y los días 15 y 18 también tienen rangos elevados, pero están dentro del límite
> **Evidencia:** el contexto del día 16 indica agentes de compilación con configuraciones distintas
> **Límite:** una señal de control no demuestra por sí sola la causa y se deben revisar la configuración y repetir la medición
> **Siguiente pregunta:** ¿La configuración de agentes explica el rango alto y desaparece al homogeneizar los agentes?

---
<div class="page-break" style="page-break-before: always;"></div>

![[Septimo/Medición/imgs/image-5.png]]

> Para la gráfica X: *X = 21.01 min*, *LIC = 18.41 min* y *LSC = 23.61 min*.
> **Patrón observado:** el día 13 (*34.70 min*) y el día 19 (*24.43 min*) rebasan el límite superior y el día 1 (*18.35 min*) queda ligeramente por debajo del límite inferior
> **Evidencia:** el día 13 coincide con una falla del servidor de integración (temporal), los días 18 y 19 muestran promedios altos aunque no todos rebasan el límite
> **Límite:** como la gráfica R tiene un señal especial, la interpretación de X debe hacerse con cuidado
> **Siguiente pregunta:** ¿El proceso vuelve a sus límites después de corregir la infraestructura y estandarizar agentes?

---
<div class="page-break" style="page-break-before: always;"></div>

## Diagnóstico

### Variación común y especial

La variación común es la fluctuación normal observada en la mayoría de los días y trabajos. Hay señales que indican causas especiales en:
- **Día 13:** promedio alto asociado en el contexto con una falla temporal del servidor de integración
- **Día 16:** rango de build de 19.50 minutos, fuera del LSC de R, asociado con agentes configurados de manera distinta
- **Día 19:** promedio de build por encima del LSC de X
- **Semana 13:** aumento del tiempo de ciclo mientras un revisor senior estaba de vacaciones

### Estabilidad y capacidad

No se debe declarar el proceso de compilación como estable porque la gráfica R presenta una señal fuera de control. La gráfica X también presenta señales pero por lo mencionado, su lectura es secundaria hasta que la variabilidad sea estable.

La capacidad frente al criterio de gestión sí resulta favorable en esta muestra: *100% de los 120 trabajos terminaron en 72 horas o menos*. Estabilidad y capacidad no significan lo mismo porque un proceso puede cumplir temporalmente el límite y, aún así, presentar causas especiales que vuelvan incierto su comportamiento en el futuro.

### Propuesta de mejora

| Elemento                   | Propuesta                                                                                                                   |
| -------------------------- | --------------------------------------------------------------------------------------------------------------------------- |
| **Hallazgo prioritario**   | Variabilidad especial en los tiempos de build, sobre todo en el día 16                                                      |
| **Hipótesis de causa**     | Diferencias de configuración entre agentes de compilación (build)                                                           |
| **Responsable**            | Responsable de integración continua (CI) y administración de los agentes                                                    |
| **Cambio**                 | Estandarizar imagen, herramientas, variables y configuración de los agentes y registrar cualquier cambio de infraestructura |
| **Métrica de seguimiento** | Rango diario de las cuatro compilaciones y número de días fuera de los límites de R                                         |
| **Resultado esperado**     | Eliminar la señal del día 16 y mantener los rangos dentro de *0.00-8.15 min* durante varias semanas                         |
| **Verificación**           | Repetir primero la gráfica R y después X con nuevos subgrupos de cuatro compilaciones (builds)                              |

Como mejora secundaria, conviene revisar la espera de la revisión en la **semana 13** y comparar su mediana contra las semanas anteriores y posteriores.