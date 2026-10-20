## 1. Fundamentos de la Medición de Software

### 1.1 Principios de Validación Empírica, Reproducibilidad y Ruido

La metrología de software exige que toda actividad de medición se fundamente en la observación empírica, la definición operacional rigurosa y la reproducibilidad técnica. Un instrumento o regla de medición debe generar resultados idénticos o equivalentes cuando sea aplicado de manera independiente por distintos evaluadores sobre el mismo artefacto de software. Cuando la variación en los resultados se debe al instrumento o a la regla utilizada y no a un cambio intrínseco en el objeto medido, nos encontramos ante un fenómeno de ruido metrológico.

Un caso práctico documentado que ilustra este principio se deriva de las evaluaciones de complejidad realizadas sobre la función `raw_spin_rq_trylock()` en el subsistema de planificación de CPU del Kernel de Linux (`kernel/sched/core.c`). Al aplicar dos métodos normativos distintos para evaluar el mismo fragmento de código, se obtuvieron los siguientes valores:

- **Regla 1 (Contar decisiones directas):** 4 unidades de complejidad.
- **Regla 2 (Fórmula tradicional de McCabe,** **v(G) = E - N + 2P****):** 5 unidades de complejidad.

La discrepancia de 1 unidad entre ambos resultados no responde a una modificación estructural del código fuente ni a una alteración en sus atributos de calidad o mantenibilidad, sino a la divergencia en los criterios de conteo aplicados por cada regla. Esta variación constituye un ejemplo prototípico de **ruido en la medición**.

#### Definición Metrológica y Mapeo del Ruido

En la ingeniería de calidad de procesos de software, se define **ruido** como cualquier fluctuación, imprecisión o sesgo no deseado en la recolección de datos que no refleja una alteración real en la entidad o atributo bajo estudio.

En los proyectos y repositorios de software, las fuentes principales de ruido corresponden a:

1. **Inclusión de artefactos no ejecutables:** Conteo de archivos de documentación (`Markdown`, `reStructuredText`), scripts de automatización de entornos o archivos de configuración dentro de las métricas de líneas de código útil (LOC).
2. **Código generado automáticamente:** Inclusión de estructuras sintácticas creadas por marcos de trabajo, asistentes de diseño o compiladores, lo cual infla artificialmente el volumen de código sin representar un esfuerzo real de arquitectura o desarrollo humano.
3. **Mezcla inconsistente de unidades de tiempo:** Registros de duración que alternan días, horas o turnos de trabajo sin un factor de conversión operacional unificado.

### 1.2 Datos vs. Información y Definiciones Operativas

La gestión científica de procesos exige distinguir conceptualmente entre datos crudos e información decisional. Los **datos crudos** son valores numéricos u observaciones primarias aisladas de su contexto. La **información decisional** es la estructura contextualizada y normalizada de dichos datos, procesada para orientar el diagnóstico, el control estadístico y la toma de decisiones directivas.

Para garantizar la veracidad y validez de las mediciones, es obligatorio establecer definiciones operativas precisas para los fenómenos observados:

- **Error / Falla:** Equivocación humana cometida durante las actividades de ingeniería (análisis, diseño, codificación o configuración) o la desviación operativa durante la ejecución del proceso que impide alcanzar el comportamiento esperado.
- **Defecto / Problema / Alerta:** Imperfección técnica, vulnerabilidad o desviación intrínseca en un artefacto de software que impide el funcionamiento correcto del sistema, degrada la seguridad o disminuye la mantenibilidad del código.

|   |   |
|---|---|
|Concepto|Definición y Ejemplo del Contexto|
|**Dato Crudo**|Valor primario cuantitativo sin procesar ni normalizar.<br>_Ejemplo:_ 2,830 líneas de código (LOC) o 61 commits registrados en el repositorio de control de versiones.|
|**Información Decisional**|Indicador analítico contextualizado que evalúa el desempeño o la calidad entregada por el proceso.<br>_Ejemplo:_ Tasa de escape de defectos a producción del 50.00\% en el módulo de Interfaz del Proyecto SIGA, lo que alerta sobre fallas severas en la fase de prueba.|
|**Error / Falla**|Desviación humana en la ejecución del trabajo o configuración inadecuada del entorno operativo.<br>_Ejemplo:_ Introducción de un valor negativo (-1.5 horas) en el campo `Horas_Espera_Revision` dentro del registro `WI-066` de la hoja de procesos.|
|**Defecto / Alerta**|Anomalia interna presente en la estructura del software que compromete su confiabilidad o legibilidad.<br>_Ejemplo:_ Un bucle persistente `for (;;)` con múltiples ramificaciones condicionales que eleva la complejidad ciclomática a \ge 6 en la función `__fget_files_rcu()` del Kernel de Linux.|

### 1.3 Filosofía de Deming Aplicada al Software

W. Edwards Deming, en su obra _Out of the Crisis_ (1986), estableció 14 puntos fundamentales para transformar la gestión organizacional, promoviendo la mejora continua del sistema y rechazando frontalmente la administración basada en metas numéricas, cuotas arbitrarias y evaluaciones punitivas sin un método operativo que las respalde.

#### Los 14 Puntos de Deming para la Gestión de Calidad

1. **Crear constancia en el propósito** de mejorar el producto y el servicio para ser competitivos y mantener la sostenibilidad de la organización.
2. **Adoptar la nueva filosofía** asumiendo el liderazgo del cambio y erradicando la tolerancia ante errores y defectos como algo habitual.
3. **Dejar de depender de la inspección masiva** para lograr la calidad; la calidad debe construirse desde el diseño y la ejecución del proceso.
4. **Acabar con la práctica de adjudicar contratos únicamente por precio**, reduciendo el costo total a largo plazo y consolidando relaciones de lealtad con proveedores.
5. **Mejorar constantemente el sistema de producción y servicio** para incrementar la calidad, elevar la productividad y disminuir los costos de manera continua.
6. **Instituir la capacitación en el trabajo** para reducir la variabilidad del proceso originada por el desconocimiento operativo.
7. **Adoptar e instituir el liderazgo** enfocado en orientar, respaldar y facilitar el trabajo de las personas en lugar de limitarse a supervisar o imponer cuotas.
8. **Eliminar el miedo** en toda la organización, de modo que el personal trabaje con seguridad y pueda señalar abiertamente fallas y barreras de proceso.
9. **Derribar las barreras entre departamentos**, impulsando el trabajo en equipos multifuncionales que anticipen problemas técnicos o de diseño.
10. **Eliminar lemas, exhortaciones y metas numéricas** a los trabajadores que carezcan de un método explícito, ya que la inmensa mayoría de los problemas provienen del sistema y no de la falta de esfuerzo individual.
11. **Eliminar cuotas numéricas y la gestión por objetivos**, sustituyéndolas por un liderazgo efectivo que conozca la capacidad real del sistema.
12. **Eliminar las barreras que privan al personal del orgullo de su trabajo**, lo cual incluye abolir la evaluación anual de méritos y la clasificación punitiva.
13. **Instituir un programa de educación y auto-mejora** continuo para todo el personal de la organización.
14. **Actuar para lograr la transformación**, movilizando a la alta dirección y a todos los colaboradores para poner en práctica los principios anteriores.

#### Alineación Directa con la Ingeniería de Software Moderna

- **Punto 3 (Dejar de depender de la inspección masiva)** **\rightarrow** **Integración Continua (CI):** La inspección masiva en el software tradicional equivale a ejecutar fases prolongadas de prueba manual o auditoría al final del ciclo de desarrollo. La Integración Continua (CI) traslada la calidad al origen: cada _commit_ desencadena análisis estático y suites de pruebas automatizadas de forma inmediata. La calidad se construye en el instante en que se genera el código, impidiendo que los defectos avancen hacia fases posteriores.
- **Punto 5 (Mejorar constantemente el sistema de producción y servicio)** **\rightarrow** **DevOps y Ciclo PDCA:** Constituye el pilar fundamental del movimiento DevOps. Se operacionaliza mediante el ciclo _Plan-Do-Check-Act_ (Planificar-Hacer-Verificar-Actuar) a través de pipelines de despliegue continuo (CD), monitoreo con telemetría en tiempo real, retrospectivas periódicas de equipo y análisis post-mortem sin culpables. El proceso de entrega se refina perpetuamente en lugar de considerarse estático.
- **Punto 8 (Eliminar el miedo)** **\rightarrow** **Revisión de Código por Pares (**_**Peer Code Review**_**):** Una revisión de código técnicamente rigurosa exige seguridad psicológica. El desarrollador no debe temer recibir observaciones analíticas sobre su código, y el revisor debe poder señalar fallas de diseño, vulnerabilidades o falta de pruebas sin riesgo de represalias administrativas, descalificaciones o fricciones personales.
- **Punto 10 (Eliminar lemas y cuotas sin método)** **\rightarrow** **Eliminación de Antipatrones de Medición:** La imposición de cuotas arbitrarias (como exigir un volumen fijo de commits o líneas de código por semana) sin suministrar una metodología de arquitectura o herramientas adecuadas distorsiona la conducta del equipo, derivando en la fragmentación del código y en un incremento innecesario de la complejidad.

### 1.4 Resumen Conceptual y Preguntas Clave de Repaso (Sección 1)

#### Resumen Ejecutivo

- La metrología en ingeniería de software requiere bases empíricas y definiciones operativas reproducibles para distinguir los atributos reales del ruido introducido por los instrumentos o reglas de conteo.
- Es fundamental categorizar los datos primarios en información decisional contextualizada, diferenciando los errores o fallas operativas de los defectos intrínsecos del artefacto.
- Los 14 Puntos de Deming ofrecen el fundamento teórico para las prácticas contemporáneas de ingeniería: la Integración Continua elimina la inspección masiva (Punto 3), DevOps dinamiza el ciclo de mejora continua PDCA (Punto 5), la revisión por pares requiere la eliminación del miedo (Punto 8) y la gestión ética exige suprimir las cuotas sin método (Punto 10).

#### Preguntas Clave tipo Examen

**Pregunta 1:** Durante una evaluación de complejidad ciclomática en la función `raw_spin_rq_trylock()` (`kernel/sched/core.c`), la regla de contar decisiones arrojó 4 unidades, mientras que la fórmula de McCabe obtuvo 5 unidades. Evalúe la naturaleza de esta discrepancia y especifique la decisión metodológica requerida.

**Conclusión Directa:** La discrepancia de 1 unidad constituye un fenómeno de ruido en la medición provocado por la incoherencia en las reglas de conteo, no por un cambio estructural en el software.

**Demostración Numérica / Contextual:** Dado que el artefacto `raw_spin_rq_trylock()` permaneció inalterado, la diferencia entre \text{Regla 1} = 4 y \text{Regla 2} = 5 es un artefacto metodológico. Contar decisiones directas simplifica la ejecución y la repetibilidad del conteo sin alterar el objeto de estudio.

**Implicación en Gestión de Calidad:** Para garantizar la reproducibilidad y la comparabilidad intertemporal, la dirección de calidad debe estandarizar operacionalmente una única regla de conteo (preferentemente la regla de decisiones directas) en todas las herramientas de análisis estático del proyecto.

**Pregunta 2:** Explique cómo la implementación de pipelines de Integración Continua (CI) materializa de forma operativa el Punto 3 de la filosofía de Deming.

**Conclusión Directa:** La Integración Continua (CI) sustituye las fases finales e intensivas de prueba (inspección masiva) por una verificación automatizada e inmediata incrustada en el proceso de desarrollo.

**Demostración Numérica / Contextual:** En lugar de acumular cambios durante semanas para auditarlos al final del release, la CI ejecuta compilaciones e inspecciones automatizadas en cada _commit_, identificando desviaciones de forma temprana.

**Implicación en Gestión de Calidad:** Esta prevención sistemática reduce drásticamente el costo de corrección de defectos y evita que el código con fallas avance a los entornos de producción.

**Pregunta 3:** Defina la diferenciación metrológica entre un Dato Crudo y un Defecto, ilustrando cada concepto con elementos del contexto de ingeniería.

**Conclusión Directa:** Un dato crudo es una métrica primaria cuantitativa carente de análisis, mientras que un defecto es una falla estructural o funcional presente en el artefacto que degrada su desempeño o mantenibilidad.

**Demostración Numérica / Contextual:** Un valor de 2,830 LOC es un dato crudo sin capacidad diagnóstica por sí solo. En contraste, la presencia de un bucle `for (;;)` con múltiples ramas y complejidad ciclomática \ge 6 en `__fget_files_rcu()` es un defecto confirmado.

**Implicación en Gestión de Calidad:** La gestión debe evitar tomar decisiones basadas en datos crudos aislados y enfocar la ingeniería en la identificación y resolución de defectos estructurales.

**Pregunta 4:** ¿Por qué el Punto 10 de Deming prohíbe la imposición de cuotas numéricas y metas individuales sin el sustento de un método formal en equipos de software?

**Conclusión Directa:** La imposición de cuotas numéricas sin método ignora que la variabilidad y el desempeño dependen del sistema y del proceso, induciendo conductas perversas en los desarrolladores.

**Demostración Numérica / Contextual:** Si se impone una cuota individual de líneas de código o de commits sin proporcionar herramientas o pautas de diseño, los desarrolladores fraccionan entregas o escriben código redundante para cumplir el objetivo numérico.

**Implicación en Gestión de Calidad:** Se destruye la colaboración, se incrementa la deuda técnica y se contamina la base de datos de proceso con registros distorsionados.

## 2. Las 7 Herramientas Gráficas y Estadísticas de Calidad

### 2.1 Análisis Estadístico y Visual: Dispersión, Histograma y Corrida

#### Diagrama de Dispersión y Desagregación por Subgrupos

El Diagrama de Dispersión permite evaluar visual y matemáticamente la relación entre dos variables continuas. Es indispensable mantener la distinción técnica entre **asociación/correlación** (cuantificada por el coeficiente r de Pearson) y **causalidad**.

En el estudio de procesos de software sobre 20 semanas de seguimiento (`AnalisisDeProcesos_GAGL.pdf`), la correlación lineal global entre `Horas_Espera_Revision` y `Tiempo_Ciclo_Horas` resultó ser prácticamente nula (r = 0.01). Una interpretación apresurada sugeriría que la espera en fase de revisión no tiene impacto en la duración total del ciclo. Sin embargo, este resultado es un artefacto de agregación: al mezclar datos heterogéneos de múltiples equipos, las dinámicas subyacentes quedan enmascaradas.

Al realizar una segmentación por subgrupos operativos, se evidencian marcadas diferencias en las medianas del tiempo de ciclo por equipo:

- **Equipo Jaguar:** Mediana de tiempo de ciclo = 32.70\text{ h} (sobre 37 registros).
- **Equipo Quetzal:** Mediana de tiempo de ciclo = 37.95\text{ h} (sobre 42 registros).
- **Equipo Águila:** Mediana de tiempo de ciclo = 42.10\text{ h} (sobre 41 registros).

Esta dispersión demuestra que la variable `Tiempo_Ciclo_Horas` está condicionada por factores no globales como la complejidad del trabajo, la distribución de tareas y las prácticas internas de cada equipo, validando la necesidad metrológica de segmentar antes de inferir relaciones de causa-efecto.

#### Histograma

El Histograma grafica la distribución de frecuencias de una variable continua, permitiendo diagnosticar:

1. **Forma y Tendencia Central:** Identificación de la unimodalidad, bimodalidad o asimetría (sesgo a la derecha o izquierda).
2. **Dispersión y Ancho del Proceso:** Extensión de la variabilidad operativa frente a los límites deseados.
3. **Valores Atípicos (**_**Outliers**_**):** Detección de observaciones extremas que requieren auditoría de datos para determinar si corresponden a causas especiales o errores de captura.

#### Gráfica de Corrida (_Run Chart_)

Muestra los datos recolectados en estricto orden cronológico en relación con la mediana del proceso. Permite identificar si la variabilidad del proceso responde a una distribución aleatoria o si existen patrones sistemáticos de inestabilidad temporal.

##### Reglas para la Detección de Señales No Aleatorias

- **Shifts (Cambios de nivel):** Presencia de 6 o más puntos consecutivos situados de un solo lado de la mediana (por arriba o por abajo).
- **Tendencias (**_**Trends**_**):** Secuencia de 5 o más puntos consecutivos con un comportamiento estrictamente ascendente o descendente.
- **Análisis de Rachas (**_**Runs**_**):** Ocurrencia de un número total de rachas significativamente inferior o superior al intervalo esperado estadísticamente.

### 2.2 Priorización y Causa Raíz: Pareto e Ishikawa

#### Diagrama de Pareto

Fundamentado en el principio de Vilfredo Pareto (80/20), postula que el 80\% de los defectos o efectos no deseados provienen del 20\% de las causas subyacentes ("los pocos vitales").

- **Procedimiento Metodológico:**
    1. Categorizar las fallas o anomalías registradas en el proceso.
    2. Ordenar las categorías en forma descendente según su frecuencia o costo de retrabajo.
    3. Calcular la frecuencia acumulada y el porcentaje acumulado.
    4. Trazar la curva de Pareto e identificar el punto de inflexión del 80\% para focalizar las intervenciones de ingeniería en los factores de mayor impacto.

#### Diagrama de Ishikawa (Causa-Efecto) y los 5 Whys

Herramienta de estructuración cualitativa que organiza las hipótesis sobre las causas de un problema bajo la tipología tradicional de las **6M**:

1. **Mano de obra:** Competencias técnicas, capacitación, fatiga e interrupciones del personal.
2. **Maquinaria:** Capacidad de la infraestructura de desarrollo, servidores de integración continua e IDEs.
3. **Materiales:** Bibliotecas de terceros, calidad del código heredado y especificaciones de entrada.
4. **Método:** Procesos de desarrollo, políticas de branching, criterios de revisión de código y flujos de trabajo.
5. **Medida:** Definición de métricas, calidad de los datos recopilados e instrumentos de conteo.
6. **Medio ambiente:** Cultura organizacional, presión de entregas, ruido físico e interrupciones del entorno.

_Diferenciación Metrológica Crítica:_ Las ramas de Ishikawa representan **hipótesis de causas potenciales**. Para validar si una causa es real, se debe profundizar mediante la técnica de los **5 Whys (Cinco Porqués)** y verificar su existencia mediante correlación estadística y análisis empírico de datos.

### 2.3 Control Estadístico de Procesos (SPC) y Capacidad: Gráficas de Control y X̄-R

#### Gráficas de Control

Son la herramienta central del Control Estadístico de Procesos (SPC) para monitorear la estabilidad temporal. Constan de tres líneas operativas calculadas estadísticamente:

- **Línea Central (LC):** Representa la media o mediana histórica del proceso.
- **Límite Superior de Control (LSC):** Se ubica a \text{LC} + 3\sigma.
- **Límite Inferior de Control (LIC):** Se ubica a \text{LC} - 3\sigma.

##### Tipología de Variabilidad

- **Causas Comunes:** Variaciones naturales, aleatorias e inherentes a la estructura actual del sistema. No se eliminan presionando al personal; requieren un rediseño del proceso por parte de la gerencia.
- **Causas Especiales (Asignables):** Inestabilidades provocadas por eventos ajenos al diseño habitual del proceso (ej. un fallo de red en un agente de compilación, una versión defectuosa de un compilador o la corrupción de una base de pruebas).

##### Reglas de Inestabilidad Predictiva (T1 a T4)

- **Regla T1:** Cualquier punto individual situado fuera de los límites de control (> \text{LSC} o < \text{LIC}).
- **Regla T2:** Un bloque de 8 o más puntos consecutivos ubicados del mismo lado de la línea central.
- **Regla T3:** Una secuencia de 6 o más puntos consecutivos estrictamente crecientes o decrecientes.
- **Regla T4:** Un conjunto de 14 o más puntos consecutivos alternando sistemáticamente arriba y abajo respecto a la línea central.

#### Gráficas X̄-R y Análisis de Capacidad

El control estadístico de procesos se rige por la máxima indiscutible: **"Estabilidad primero, capacidad después"**. Un proceso inestable no es predecible, por lo que cualquier cálculo de capacidad carece de validez técnica.

1. **Gráfica R (Rangos):** Evalúa la variabilidad o dispersión interna de los subgrupos. **Debe analizarse y estabilizarse obligatoriamente antes que la gráfica X̄.** Si el gráfico R muestra inestabilidad, los límites de control calculados para el gráfico de promedios se vuelven matemáticamente inválidos.
2. **Gráfica X̄ (Promedios):** Monitorea el comportamiento del centrado o tendencia central del proceso a lo largo del tiempo.
3. **Índice de Capacidad (****C_{pk}****):** Cuantifica la aptitud del proceso para cumplir con los límites de tolerancia o especificaciones requeridas por el negocio. Se calcula únicamente cuando el proceso demuestra estar bajo control estadístico en las gráficas X̄ y R.

### 2.4 Flujo Secuencial Óptimo de Diagnóstico de Procesos

Para diagnosticar y estabilizar un proceso de software de manera metódica, el ingeniero de calidad debe seguir una secuencia diagnóstica estructurada en cinco fases:

- **Fase 1: Identificación del Síntoma Temporal.** Desplegar una **Gráfica de Corrida (**_**Run Chart**_**)** y un **Histograma** para caracterizar visualmente la distribución del tiempo de ciclo o de las fallas, identificando sesgos o anomalías iniciales.
- **Fase 2: Estructuración de Hipótesis de Causa Raíz.** Construir un **Diagrama de Ishikawa** articulando las 6M con el equipo de ingeniería y aplicar los **5 Whys** para profundizar en los factores causales probables.
- **Fase 3: Confirmación Empírica.** Evaluar las hipótesis de causa mediante **Diagramas de Dispersión** y análisis de correlación con los datos reales del proceso. Por ejemplo, en el expediente `Datos_Proceso`, se verificaron los registros excluyendo inconsistencias (como la anomalía `WI-066` con `Horas_Espera_Revision = -1.5`) para confirmar o descartar relaciones causales falsas.
- **Fase 4: Priorización de Intervenciones.** Aplicar un **Diagrama de Pareto** sobre los factores o causas cuya relación con el problema haya sido demostrada empíricamente, identificando el 20\% de los factores que explican el 80\% del retraso o de los defectos.
- **Fase 5: Monitoreo y Prevención de Recaídas.** Implementar **Gráficas de Control Estadístico (X̄-R)** para vigilar el comportamiento del proceso tras las intervenciones, asegurando la eliminación de causas especiales (como las fluctuaciones detectadas en los agentes de compilación o _builds_) y verificando la estabilidad del sistema.

### 2.5 Resumen Comparativo y Preguntas Clave de Repaso (Sección 2)

#### Tabla Comparativa de Herramientas de Calidad

| Herramienta                   | Propósito Principal                                                    | Tipo de Datos de Entrada                      | Criterio de Decisión / Interpretación                                                                          |
| ----------------------------- | ---------------------------------------------------------------------- | --------------------------------------------- | -------------------------------------------------------------------------------------------------------------- |
| **Diagrama de Dispersión**    | Evaluar la asociación lineal entre dos variables continuas.            | Pares de datos continuos (X, Y).              | Coeficiente r de Pearson. Si r \approx 0, no hay relación lineal global (requiere segmentación por subgrupos). |
| **Histograma**                | Analizar la forma, tendencia central y dispersión de una variable.     | Variable continua.                            | Identificación de asimetría, modas, variabilidad y detección de valores atípicos (_outliers_).                 |
| **Gráfica de Corrida**        | Evaluar el comportamiento temporal en relación con la mediana.         | Serie de tiempo continua.                     | Detección de patrones no aleatorios: _Shifts_ (\ge 6 puntos) y _Tendencias_ (\ge 5 puntos).                    |
| **Diagrama de Pareto**        | Priorizar las categorías de fallas o causas raíz.                      | Frecuencias discretas / Categorías.           | Principio 80/20: Enfocar recursos en el 20\% de las causas que generan el 80\% del impacto.                    |
| **Diagrama de Ishikawa**      | Estructurar cualitativamente hipótesis de causa raíz (6M).             | Cualitativo / Lluvia de ideas estructurada.   | Formulación de hipótesis causales a ser validadas empíricamente mediante los _5 Whys_ y datos.                 |
| **Gráfica de Control (SPC)**  | Monitorear la estabilidad y distinguir variabilidad común de especial. | Datos continuos ordenados cronológicamente.   | Violación de reglas T1-T4 (puntos fuera de LSC/LIC o secuencias no aleatorias indican inestabilidad).          |
| **Gráfica X̄-R y** **C_{pk}** | Evaluar variabilidad (R), centrado (X̄) y capacidad (C_{pk}).          | Variables continuas organizadas en subgrupos. | "Estabilidad primero": Estabilizar R antes que X̄. Calcular C_{pk} únicamente si el proceso es estable.        |

#### Preguntas Clave tipo Examen

**Pregunta 1:** En un análisis global de procesos, la correlación lineal entre la espera en revisión y el tiempo total de ciclo resultó en r = 0.01. Sin embargo, los equipos presentan medianas de ciclo de 32.70\text{ h} (Jaguar), 37.95\text{ h} (Quetzal) y 42.10\text{ h} (Águila). Explique la discrepancia y emita una conclusión metrológica.

**Conclusión Directa:** La correlación global cercana a cero es un fenómeno de enmascaramiento por agregación de datos heterogéneos; la variabilidad del proceso depende de subgrupos operativos.

**Demostración Numérica / Contextual:** Mientras r = 0.01 sugiere ausencia de asociación global, la segmentación demuestra diferencias significativas en la tendencia central por equipo: Jaguar (32.70\text{ h}), Quetzal (37.95\text{ h}) y Águila (42.10\text{ h}).

**Implicación en Gestión de Calidad:** La gerencia no debe tomar decisiones simplistas basadas en agregados globales. Se deben analizar los subgrupos individualmente, evaluando factores como el tipo de trabajo, la complejidad técnica y la variabilidad en la ejecución.

**Pregunta 2:** ¿Por qué en el análisis de una Gráfica de Control X̄-R es una regla metodológica estricta evaluar la estabilidad del gráfico R antes que la del gráfico X̄?

**Conclusión Directa:** La validación de la gráfica R es un requisito matemático previo porque mide la dispersión dentro de los subgrupos, parámetro sobre el cual se calculan los límites de la gráfica X̄.

**Demostración Numérica / Contextual:** Los límites de control del gráfico X̄ derivan de la fórmula \text{LC} \pm A_2 \bar{R}. Si la gráfica R es inestable, la estimación de la variabilidad interna es incorrecta, haciendo inválidos los límites del gráfico X̄.

**Implicación en Gestión de Calidad:** Evaluar la gráfica X̄ con un gráfico R inestable conduce a falsos diagnósticos de causas especiales, malgastando recursos de ingeniería.

**Pregunta 3:** Si una serie temporal de rendimiento muestra 7 puntos consecutivos ubicados por encima de la mediana del proceso, ¿qué condición se verifica y qué acción se requiere?

**Conclusión Directa:** Se ha verificado una señal de inestabilidad de tipo **Shift (Cambio de nivel)** al superarse el umbral reglamentario de 6 puntos consecutivos de un solo lado de la mediana.

**Demostración Numérica / Contextual:** La probabilidad de que 6 o más observaciones caigan consecutivamente del mismo lado de la mediana por azar es < 3\%, confirmando la intervención de una causa especial.

**Implicación en Gestión de Calidad:** Se debe detener el análisis de capacidad, auditar la ventana temporal correspondiente e identificar la causa asignable que alteró la tendencia central del proceso.

**Pregunta 4:** Compare la función analítica del Diagrama de Ishikawa con la del Diagrama de Pareto en un proceso de diagnóstico de calidad.

**Conclusión Directa:** El Diagrama de Ishikawa es una herramienta cualitativa para estructurar hipótesis causales, mientras que el Diagrama de Pareto es un instrumento cuantitativo de priorización empírica.

**Demostración Numérica / Contextual:** Ishikawa organiza causas potenciales en 6 categorías (6M). Pareto cuantifica la frecuencia de defectos confirmados para aislar el 20\% de los factores que causan el 80\% del impacto.

**Implicación en Gestión de Calidad:** Ishikawa expande el horizonte de búsqueda de causas raíz, mientras que Pareto focaliza las inversiones y esfuerzos de corrección en los factores de mayor relevancia.

## 3. Ética y Buenas Prácticas al Medir Personas y Equipos

### 3.1 Semáforo Ético de Métricas de Software

La aplicación de métricas de software para evaluar o bonificar de manera individual a los desarrolladores distorsiona la dinámica de trabajo, incentiva la manipulación de datos y destruye la colaboración interna. Tomando como base la evidencia del Caso SIGA, las métricas se clasifican éticamente en tres categorías operativas:

- **Verde (🐉 / Métrica válida de proceso o equipo):**
    - _Defectos detectados por módulo:_ Permite evaluar la calidad previa a la liberación; su comportamiento debe manifestar una tendencia decreciente sostenida.
    - _Defectos en producción:_ Es la métrica de resultado fundamental que la organización debe minimizar para proteger al usuario y evitar el retrabajo.
    - _Complejidad del módulo:_ Evalúa el riesgo inherente del componente y orienta la planificación de las actividades de verificación y prueba.
- **Amarillo (🌗 / Válida únicamente con contexto y políticas explícitas):**
    - _Número de commits:_ Requiere normativas estrictas sobre el alcance operativo de cada commit (ej. asociar un commit a la ejecución de una historia de usuario o feature). De lo contrario, premia la fragmentación trivial del código.
    - _LOC por desarrollador:_ Carece de valor diagnóstico de forma aislada. Adquiere utilidad únicamente al combinarse con el conteo de defectos para calcular densidades de calidad.
    - _Revisiones de código realizadas:_ Requiere auditar que la revisión haya aportado valor técnico sobre la funcionalidad y arquitectura, evitando la simple aprobación superficial.
- **Rojo (🆘 / Antipatrón / Prohibida la evaluación individual):**
    - _LOC puros individual:_ Genera el antipatrón de escribir código verboso, destructivo o innecesariamente complejo con el fin de inflar artificialmente la cifra personal.
    - _Horas de conexión / Cambios realizados:_ Mide la actividad superficial o el volumen de ajustes sin guardar correlación con la entrega real de valor funcional.
    - _Experiencia del desarrollador:_ La antigüedad o los años de carrera no garantizan un desempeño superior o una menor tasa de defectos en el trabajo presente.

### 3.2 Evaluación Crítica de Métricas Individuales: Caso Proyecto SIGA

El Proyecto SIGA (Sistema Integral de Gestión Académica) recopiló datos de desempeño de 5 desarrolladores durante 4 sprints de desarrollo:

#### Datos Cuantitativos y Contexto Técnico cualitativo

|   |   |   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|---|---|
|Desarrollador|Experiencia|Módulo Asignado|LOC|Commits|Cambios|Defectos Detectados|Defectos en Producción|Contexto Técnico y Tareas Asignadas|
|**Andrea**|5 años|Pagos|1,480|32|270|18|1|Módulo de alta criticidad. Andrea dedicó tiempo a revisar código de otros módulos.|
|**Bruno**|2 años|Reportes|2,250|49|195|10|3|Módulo caracterizado por código repetitivo y autogenerado que infla el volumen de LOC.|
|**Carla**|4 años|Autenticación|920|25|160|14|0|Módulo de alta complejidad y seguridad. Carla corrigió 9 vulnerabilidades heredadas.|
|**Daniel**|1 año|Interfaz|2,830|61|310|8|4|Módulo dominado por código repetitivo/autogenerado. Presentó una alta tasa de fallas en producción.|
|**Elena**|6 años|Integración|1,150|28|145|16|1|Módulo de alta criticidad. Elena realizó revisiones cruzadas de código para otros integrantes.|

#### Indicadores Normalizados Calculados

Fórmulas normativas: \text{Defectos por 100 cambios} = \frac{\text{Defectos detectados}}{\text{Cambios realizados}} \times 100

\text{Escape a producción (\%)} = \frac{\text{Defectos en producción}}{\text{Defectos detectados}} \times 100

|   |   |   |   |
|---|---|---|---|
|Desarrollador|Defectos por 100 Cambios|Escape a Producción (%)|Operaciones Matemáticas de Cálculo|
|**Andrea**|6.66|5.55\%|\frac{18}{270} \times 100 = 6.66 \quad \vert \quad \frac{1}{18} \times 100 = 5.55\%|
|**Bruno**|5.12|30.00\%|\frac{10}{195} \times 100 = 5.12 \quad \vert \quad \frac{3}{10} \times 100 = 30.00\%|
|**Carla**|8.75|0.00\%|\frac{14}{160} \times 100 = 8.75 \quad \vert \quad \frac{0}{14} \times 100 = 0.00\%|
|**Daniel**|2.58|50.00\%|\frac{8}{310} \times 100 = 2.58 \quad \vert \quad \frac{4}{8} \times 100 = 50.00\%|
|**Elena**|11.03|6.25\%|\frac{16}{145} \times 100 = 11.03 \quad \vert \quad \frac{1}{16} \times 100 = 6.25\%|

### 3.3 Lecciones del Caso Daniel vs. Elena: Deuda Técnica y Retrabajo

Una evaluación directiva simplista, basada exclusivamente en volumen bruto de líneas de código y número de commits, situaría a Daniel como el profesional "más productivo" por haber registrado 2,830 LOC y 61 commits, mientras calificaría a Elena como una desarrolladora de "bajo rendimiento" al haber producido 1,150 LOC y 28 commits, junto con 16 defectos detectados en la fase previa.

Esta evaluación es técnicamente **falsa, sesgada e inválida** por los siguientes factores:

1. **Severa Tasa de Escape de Daniel (****50.00\%****):** Daniel permitió que 4 de sus 8 defectos escaparan directamente a producción, alcanzando una tasa de escape del 50.00\%. El módulo de Interfaz se caracteriza por un alto volumen de código repetitivo y estructurado automáticamente por herramientas de diseño, lo que infla artificialmente sus LOC y commits. Sus fallas en producción generaron retrabajo urgente y deuda técnica para todo el equipo.
2. **Calidad y Criticidad del Aporte de Elena:** Elena trabajó en el módulo de Integración (alta criticidad) y asumió la tarea de revisar el código desarrollado por otros integrantes. Aunque detectó 16 hallazgos internos durante las fases de verificación (\frac{16}{145}), únicamente 1 defecto escapó a producción, representando una tasa de escape de solo 6.25\%. El avance de Elena es técnicamente confiable, robusto y previene la generación de deuda técnica.
3. **El Caso de Carla y las Vulnerabilidades Heredadas:** Carla registró 14 defectos detectados internos en el módulo de Autenticación. Sin embargo, 9 de esos hallazgos correspondieron a correcciones de vulnerabilidades de seguridad heredadas de versiones previas. Su tasa de escape a producción fue del 0.00\% (0 fallas en producción), demostrando un desempeño de altísima calidad en un componente crítico.

#### Indicadores del Proceso de Sprint (Proyecto SIGA)

Fórmulas normativas: \text{Cumplimiento (\%)} = \frac{\text{Historias terminadas}}{\text{Historias comprometidas}} \times 100

\text{Capacidad de corrección (\%)} = \frac{\text{Defectos corregidos}}{\text{Defectos introducidos}} \times 100

|   |   |   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|---|---|
|Sprint|Comprometidas|Terminadas|Introducidos|Corregidos|Pendientes|Retrabajo (Horas)|Cumplimiento (%)|Capacidad de Corrección (%)|
|**1**|20|18|12|10|2|26 h|90.00\%|83.33\%|
|**2**|22|17|18|11|9|41 h|77.27\%|61.11\%|
|**3**|18|16|15|12|12|48 h|88.88\%|80.00\%|
|**4**|16|15|9|16|5|32 h|93.75\%|177.78\%|

_Análisis de la Evolución del Retrabajo:_ La acumulación de defectos no resueltos incrementó las horas de retrabajo de 26\text{ h} en el Sprint 1 a un máximo de 48\text{ h} en el Sprint 3. En el Sprint 4 se observa una clara recuperación del proceso: la Capacidad de Corrección alcanzó el 177.78\% (se corrigieron 16 defectos frente a 9 introducidos), reduciendo los pendientes acumulados a 5 y disminuyendo el retrabajo a 32\text{ h}.

### 3.4 Resumen Conceptual y Preguntas Clave de Repaso (Sección 3)

#### Resumen Ejecutivo

- Evaluar el desempeño individual mediante métricas rojas (LOC, commits, horas de conexión) distorsiona los objetivos de ingeniería y promueve la generación de código verboso y de baja calidad.
- La detección interna de defectos durante las fases de revisión es una manifestación positiva de la efectividad del filtro de calidad, no una falla del desarrollador.
- La tasa de escape a producción es la métrica de resultado fundamental para auditar la confiabilidad del proceso de prueba y prevenir la deuda técnica.

#### Preguntas Clave tipo Examen

**Pregunta 1:** Evalúe el impacto organizacional y técnico de establecer un esquema de incentivos económicos basado exclusivamente en el volumen de Líneas de Código (LOC) producidas por desarrollado.

**Conclusión Directa:** La bonificación por LOC desencadena un antipatrón perjudicial que destruye la calidad, la legibilidad y la mantenibilidad de la base de código.

**Demostración Numérica / Contextual:** Los desarrolladores priorizan la redacción de estructuras extensas, verbosas o innecesariamente complejas en lugar de diseñar soluciones concisas y eficientes.

**Implicación en Gestión de Calidad:** Se incrementa la deuda técnica del proyecto, se dificultan las revisiones de código y se sobrecargan las actividades de prueba.

**Pregunta 2:** Calcule la tasa de escape a producción para una ingeniera de software que detectó e internó 16 defectos durante la fase de prueba del módulo y registró únicamente 1 falla reportada por usuarios en producción.

**Conclusión Directa:** La tasa de escape a producción es del 6.25\%, lo que demuestra la alta efectividad de sus actividades de verificación previa.

**Demostración Numérica / Contextual:** \text{Escape a producción} = \frac{1}{16} \times 100 = 6.25\%

**Implicación en Gestión de Calidad:** Una baja tasa de escape (como el 6.25\% de Elena o el 0.00\% de Carla) confirma que la mayoría de los defectos se filtran en las fases de revisión interna, minimizando el impacto en los usuarios finales.

**Pregunta 3:** En el Caso SIGA, Daniel acumuló 2,830 LOC y 61 commits frente a las 1,150 LOC y 28 commits de Elena. Demuestre por qué calificar a Daniel como "más productivo" es técnicamente incorrecto.

**Conclusión Directa:** El volumen de Daniel está inflado por el uso de código repetitivo de interfaz y su entrega presentó una tasa de escape a producción del 50.00\%, generando retrabajo y deuda técnica.

**Demostración Numérica / Contextual:** Daniel acumuló 4 fallas en producción sobre 8 defectos (\text{Escape} = 50.00\%). Elena trabajó en el módulo crítico de Integración, apoyó en revisiones cruzadas y solo tuvo 1 escape en producción (\text{Escape} = 6.25\%).

**Implicación en Gestión de Calidad:** El rendimiento real debe evaluarse en función de la entrega de software confiable y libre de errores en producción, no por el volumen bruto de artefactos intermedios.

**Pregunta 4:** Explique la diferencia metodológica entre los defectos detectados en la fase de revisión previa y los defectos reportados en producción en la evaluación de un proceso de pruebas.

**Conclusión Directa:** Los defectos detectados internamente confirman la operatividad del filtro de calidad, mientras que los defectos en producción representan la falla de dicho filtro (escapes).

**Demostración Numérica / Contextual:** En el Caso SIGA, la detección de 14 defectos internos por Carla permitió corregir 9 vulnerabilidades previas sin impacto externo (0.00\% escape). En contraste, los 4 defectos en producción de Daniel generaron interrupciones críticas.

**Implicación en Gestión de Calidad:** La gerencia debe incentivar la máxima detección de fallas en las fases previas al despliegue y concentrar la auditoría en reducir las tasas de escape a producción.

## 4. Calidad de Datos, Recolección y Ciclo de Vida del Software

### 4.1 Los 4 Criterios de Calidad de Datos en Medición

Para garantizar la confiabilidad de los análisis estadísticos de procesos, la base de datos de origen debe auditarse rigurosamente bajo cuatro criterios normativos. Del expediente _Datos_Proceso_, se identificaron las siguientes anomalías y tratamientos:

1. **Veracidad:** Ausencia de manipulación, falsificación o imprecisión en las observaciones registradas.
2. **Sincronía:** Captura y registro de los eventos en la ventana temporal exacta en que ocurren.
3. **Consistencia:** Homogeneidad estricta en el uso de identidades, reglas operativas y unidades de medida.
    - _Anomalía_ `_WI-807_`_:_ El identificador aparece duplicado en dos filas con datos incompatibles. _Tratamiento:_ Separar y marcar la segunda observación como ID duplicado para cumplir la restricción de claves únicas.
    - _Anomalía_ `_WI-041_`_:_ El tiempo de ciclo figuraba registrado en días (1.32 días). _Tratamiento:_ Convertir la unidad a horas mediante la operación explícita 1.32 \times 24 = 31.68\text{ h} (nota de auditoría: en los registros originales de cálculo figuraba como 31.62\text{ h} debido a un redondeo instrumental en las hojas primarias, el cual se corrige a 31.68\text{ h} en esta guía).
4. **Validez:** Conformidad de los datos con rangos lógicos, restricciones del dominio y reglas estructurales.
    - _Anomalía_ `_WI-018_`_:_ Carece de `Fecha_Fin`. _Tratamiento:_ Conservar el registro para evaluar el tiempo transcurrido, pero excluirlo de las comprobaciones basadas en fechas de cierre por tratarse de una tarea abierta.
    - _Anomalía_ `_WI-066_`_:_ Muestra `Horas_Espera_Revision = -1.5`. _Tratamiento:_ Retener la fila principal, pero invalidar el campo específico de espera por presentar un signo fuera del rango lógico accesible (\ge 0).

### 4.2 Medición en las Fases del Ciclo de Vida del Software

Las métricas operan en distintas etapas del desarrollo para respaldar la toma de decisiones técnicas:

- **Fase de Planificación y Estimación:** Uso del Modelo COCOMO (_Constructive Cost Model_), que correlaciona la magnitud del software con el esfuerzo en meses-hombre necesarios para su desarrollo.
- **Fase de Diseño y Construcción:** Aplicación de la Complejidad Ciclomática de McCabe (v(G)). Mide la cantidad de caminos linealmente independientes a través del código fuente. Una complejidad ciclomática elevada degrada la mantenibilidad del software e incrementa la probabilidad de ocultar defectos estructurales.
- **Fase de Pruebas y Liberación:** Evaluación de la Calidad del Producto mediante la Densidad de Defectos, calculada como la cantidad de defectos por cada mil líneas de código (KLOC) o por unidad de cambio ejecutada.

### 4.3 Medición Práctica en Proyectos Masivos: Estudio del Kernel de Linux

Gabriel Antonio González López ejecutó una auditoría sobre la base de código del Kernel de Linux empleando la herramienta `Cloc v2.10`. El proceso de ejecución tomó 108.06\text{ s} a una velocidad de 762.3\text{ archivos/s} y 374,141.0\text{ líneas/s}.

#### Reglas Operativas de Medición

- **Comentarios:** Excluidos del conteo de código útil (4,842,110 líneas de comentarios identificadas).
- **Líneas en blanco:** Excluidas (5,067,941 líneas en blanco).
- **Archivos de configuración:** Incluidos de forma parcial según el subsistema.
- **Código generado automáticamente:** Incluido sin exclusión.
- **Commits:** Conteo delimitado a las operaciones del último mes (2,903 commits).

#### Totales del Proyecto Kernel de Linux

|   |   |   |
|---|---|---|
|Métrica de Proyecto|Resultado Registrado|Método / Herramienta Aplicada|
|**Líneas Totales**|40.4\text{M}|Conteo integral mediante Cloc v2.10|
|**Código Útil (LOC)**|30,519,022|Excluye comentarios y líneas en blanco|
|**Comentarios**|4,842,110 (4.8\text{M})|Líneas dedicadas a documentación en código|
|**Líneas en Blanco**|5,067,941|Espaciado de formato y estructuración|
|**Commits Último Mes**|2,903|Análisis de repositorio de control de versiones|

#### Distribución por Lenguajes Principales (Cloc v2.10)

- **Lenguaje C:** 36,912 archivos, 19,622,714 líneas de código útil (3,803,862 en blanco, 2,913,028 comentarios).
- **Headers C/C++:** 26,696 archivos, 8,400,023 líneas de código útil (790,390 en blanco, 1,598,862 comentarios).

#### Caso de Refactorización por Complejidad Elevada

Se analizó la función `__fget_files_rcu()` en la ruta `kernel/sched/core.c`, la cual presenta la siguiente estructura con un bucle infinito `for (;;)` y múltiples bifurcaciones condicionales:

```c
static inline struct file *__fget_files_rcu(struct files_struct *files, unsigned int fd, fmode_t mask) {
    for (;;) {
        struct file *file;
        struct fdtable *fdt = rcu_dereference_raw(files->fdt);
        struct file __rcu **fdentry;
        unsigned long nospec_mask;

        nospec_mask = array_index_mask_nospec(fd, fdt->max_fds);
        fdentry = fdt->fd + (fd & nospec_mask);
        file = rcu_dereference_raw(*fdentry);
        file = (void *)(nospec_mask & (unsigned long)file);

        if (unlikely(!file))
            return NULL;

        if (unlikely(!file_ref_get(&file->f_ref)))
            continue;

        if (unlikely(file != rcu_dereference_raw(*fdentry)) ||
            unlikely(rcu_dereference_raw(files->fdt) != fdt)) {
            fput(file);
            continue;
        }

        if (unlikely(file->f_mode & mask)) {
            fput(file);
            return NULL;
        }

        return file;
    }
}
```

- **Problema:** Presenta una complejidad ciclomática \ge 6 debido al bucle de reintento persistente combinado con múltiples decisiones de concurrencia anidadas.
- **Propuesta de Mejora:** Refactorizar la función estructurando la lógica de control para reducir la complejidad ciclomática y cognitiva a un rango objetivo de **3 a 4**, sin eliminar ninguna de las comprobaciones críticas de seguridad o concurrencia.
- **Validación Metrológica:** Verificar la efectividad de la refactorización reaplicando el método estandarizado de contar decisiones.

### 4.4 Métricas de Entorno e Infraestructura CI/CD

El desempeño del proceso de software está condicionado por la estabilidad de la infraestructura de ejecución.

En las evaluaciones de variabilidad sobre pipelines de compilación (_builds_):

- **Variabilidad de Agentes de Compilación:** La dispersión en los tiempos de respuesta suele deberse a la heterogeneidad de hardware, restricciones de memoria o satación de red en los servidores virtuales de CI/CD.
- **Causas Especiales en Infraestructura:** Un pico atípico en el tiempo de ejecución del pipeline puede ser causado por una caída de ancho de banda o contención de disco en los agentes de ejecución, lo cual constituye una causa especial atribuible al entorno y no al código desarrollado.

### 4.5 Resumen Conceptual, Tabla Sintética y Preguntas Clave de Repaso (Sección 4)

#### Tabla Sintética de Calidad de Datos

|   |   |   |
|---|---|---|
|Criterio de Calidad|Falla Detectada en Contexto|Solución / Tratamiento Lógico Operativo|
|**Consistencia**|Registro de `WI-807` duplicado en dos filas con datos incompatibles.|Separar registros e identificar el segundo como ID duplicado para preservar claves unívocas.|
|**Consistencia**|Inconsistencia de unidades (`WI-041` en 1.32 días frente al resto expresado en horas).|Convertir operacionalmente a horas (1.32 \times 24 = 31.68\text{ h}). Documentar el valor 31.62\text{ h} de las hojas primarias como ajuste metrológico.|
|**Validez**|Ausencia de `Fecha_Fin` en `WI-018`.|Retener el registro para análisis de tiempo transcurrido, excluyéndolo de evaluaciones de cierre.|
|**Validez**|Valor negativo inconsistente `Horas_Espera_Revision = -1.5` en `WI-066`.|Invalidar la variable específica de espera para análisis de distribución, conservando el resto del registro.|

#### Preguntas Clave tipo Examen

**Pregunta 1:** En una auditoría de datos de proceso, el ítem `WI-041` registra un `Tiempo_Ciclo` de 1.32 días en una base donde la métrica estándar es horas. Especifique el tratamiento metrológico formal.

**Conclusión Directa:** Debe ejecutarse una transformación de consistencia convirtiendo el valor a horas (31.68\text{ h}) en una variable derivada, manteniendo el registro de origen intacto.

**Demostración Numérica / Contextual:** \text{Tiempo en horas} = 1.32 \text{ días} \times 24 \frac{\text{horas}}{\text{día}} = 31.68 \text{ h} _(Nota auditada: el registro primario anotó_ _31.62\text{ h}_ _por truncamiento instrumental, el cual se corrige a_ _31.68\text{ h}__)_.

**Implicación en Gestión de Calidad:** Garantiza la comparabilidad de la serie de datos de las 20 semanas en una única unidad de tiempo sin distorsionar los cálculos de tendencia central.

**Pregunta 2:** La auditoría con Cloc v2.10 sobre el Kernel de Linux contabilizó 40.4\text{M} de líneas totales y 30,519,022 de código útil. Justifique técnicamente esta diferencia.

**Conclusión Directa:** La diferencia responde a la aplicación estricta de las reglas de medición que excluyeron las líneas no ejecutables del conteo de código útil.

**Demostración Numérica / Contextual:** De las 40.4\text{M} de líneas totales, la herramienta segregó 4,842,110 líneas de comentarios y 5,067,941 líneas en blanco, aislando únicamente las 30,519,022 LOC ejecutables.

**Implicación en Gestión de Calidad:** Previene la contaminación del análisis con ruido documental, asegurando que los indicadores de esfuerzo y mantenibilidad se basen exclusivamente en código fuente.

**Pregunta 3:** Explique las consecuencias técnicas de mantener una complejidad ciclomática elevada (\ge 6) en una función crítica como `__fget_files_rcu()`.

**Conclusión Directa:** Una alta complejidad ciclomática degrada la mantenibilidad del software, eleva la carga cognitiva e incrementa el riesgo de ocultar defectos de concurrencia.

**Demostración Numérica / Contextual:** La función combina un bucle `for (;;)` con múltiples ramas condicionales anidadas (v(G) \ge 6), lo que complica el diseño de pruebas unitarias al requerir más caminos independientes de ejecución.

**Implicación en Gestión de Calidad:** Refactorizar para reducir la complejidad a un rango objetivo de 3-4 simplifica la verificación sin comprometer las comprobaciones de seguridad y concurrencia.

**Pregunta 4:** Si durante el monitoreo de un pipeline de CI/CD se observa un incremento del tiempo de compilación del 200\% limitado a los agentes virtuales nocturnos, determine el tipo de variabilidad y la acción correctiva.

**Conclusión Directa:** Se trata de una variación por **causa especial (asignable)** atribuible a la infraestructura del entorno y no al desempeño de los desarrolladores.

**Demostración Numérica / Contextual:** El incremento del 200\% ocurre únicamente en la ventana nocturna, lo cual apunta a contención de recursos (como respaldos de almacenamiento o saturación de red) en los servidores virtuales de compilación.

**Implicación en Gestión de Calidad:** La gerencia debe intervenir en la configuración y capacidad de los agentes de infraestructura en lugar de presionar al equipo de desarrollo por variaciones ajenas a su código.