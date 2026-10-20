## 1.  Fundamentos de Medición

### 1.1 Principios de validación empírica, reproducibilidad y ruido

- Toda medición debe fundamentarse en la observación empírica, la definición operacional rigurosa y la reproducibilidad técnica
- Un instrumento o regla de medición debe generar resultados idénticos o equivalentes cuando sea aplicado de manera independiente por distintos evaluadores sobre el mismo artefacto (lo que se mide)
	- Si los resultados son diferentes y se deben al instrumento o regla con el que se midió y no a un cambio en el objeto medido se le denomina un **fenómeno de ruido metrológico**
	- Un ejemplo es cuando se evalúa la complejidad de un método mediante distintas técnicas como lo son *contar las decisiones directas* y la *fórmula de McCabe* que pueden dar distintos niveles de complejidad

#### Definición metrológica y mapeo del ruido

- Se define como **ruido** a cualquier fluctuación, impresición o sesgo no deseado en la recolección de datos que no refleja una alteración real en la entidad o atributo bajo estudio.
- En el desarrollo de Software las principales fuentes de ruido son:
	- **Inclusión de artefactos no ejecutables** (como archivos de documentación, scripts de entornos o archivos de configuración)
	- **Código generado automáticamente** (estructuras creadas por frameworks), esto puede inflar artificialmente el volumen de código sin representar un esfuerzo real
	- **Mezcla inconsistente de unidades de tiempo** como registros de duración que alternan días, horas o turnos de trabajo sin un factor de conversión operacional unificado

### 1. 2 Datos vs Información y definiciones operativas

- La gestión científica de procesos exige distinguir entre *datos crudos* e *información decisional*
	- **Datos crudos:** son valores numéricos u observaciones primarias aisladas de su contexto
	- **Información decisional:** es la estructura contextualizada y normalizada de dichos datos, procesada para orientar el diagnóstico, el control estadístico y la toma de decisiones directivas
- Se debe garantizar la veracidad y validez de las mediciones mediante *definiciones operativas precisas* para los fenómenos observados:
	- **Error/Falla:** Equivocación humana cometida durante las actividades de ingeniería o la desviación operativa durante la ejecución del proceso que impide alcanzar el comportamiento esperado
	- **Defecto/Problema/Alerta:** Imperfección técnica, vulnerabilidad o desviación intrínseca en un artefacto de software que impide el funcionamiento correcto del sistema afectando su calidad

| Concepto                   | Definición y Ejemplo                                                                                                                                                                                                                                                                                   |
| -------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Dato Crudo**             | Valor primario cuantitativo sin procesar ni normalizar.<br>_Ejemplo:_ $2,830$ líneas de código (LOC) o $61$ commits registrados en el repositorio de control de versiones.                                                                                                                             |
| **Información Decisional** | Indicador analítico contextualizado que evalúa el desempeño o la calidad entregada por el proceso.<br>_Ejemplo:_ Tasa de escape de defectos a producción del $50.00\%$ en el módulo de Interfaz del Proyecto SIGA, lo que alerta sobre fallas severas en la fase de prueba.                            |
| **Error / Falla**          | Desviación humana en la ejecución del trabajo o configuración inadecuada del entorno operativo.<br>_Ejemplo:_ Introducción de un valor negativo ($-1.5$ horas) en el campo `Horas_Espera_Revision` dentro del registro `WI-066` de la hoja de procesos.                                                |
| **Defecto / Alerta**       | Anomalia interna presente en la estructura del software que compromete su confiabilidad o legibilidad.<br>_Ejemplo:_ Un bucle persistente `for (;;)` con múltiples ramificaciones condicionales que eleva la complejidad ciclomática a $\ge 6$ en la función `__fget_files_rcu()` del Kernel de Linux. |

## 1.3 Filosofía de Deming aplicada al Software

W. Edwards Deming estableció 14 puntos fundamentales para transformar la gestión organizacional, promoviendo la mejora continua del sistema y rechazando frontalmente la administración basada en metas numéricas, cuotas arbitrarias y evaluaciones punitivas sin un método operativo que las respalde.

### 14 puntos de Deming para la Gestión de Calidad

1. **Crear constancia en el propósito** de mejroar el producto y el servicio para ser competitivos y mantener la sostenibilidad de la organización
2. **Adoptar la nueva filosofía** asumiendo el liderazgo del cambio y erradicando la tolerancia ante errores y defectos como algo habitual
3. **Dejar de depender la inspección masiva** para lograr la calidad, la calidad se debe construir desde el diseño y la ejecución del proceso
4. **Acabar con la práctica de adjudicar contratos únicamente por precio** reduciendo el costo total a largo plazo y consolidando relaciones de lealtad con proveedores
5. **Mejorar constantemente el sistema de producción y servicio** para incrementar la calidad, elevar la productividad y disminuir los costos de manera continua
6. **Instituir la capacitación en el trabajo** para reducir la variabilidad del proceso originada por el desconocimiento operativo
7. **Adoptar e instituir el liderazgo** enfocado en orientar, respaldar y facilitar el trabajo de personas en lugar de limitarse a supervisar o imponer cuotas
8. **Eliminar el miedo** en toda la organización de modo que el personal trabaje con seguridad y pueda señalar abiertamente fallas y barreras de proceso
9. **Derribar las barreras entre departamentos** impulsando el trabajo en equipos multifuncionales que anticiepn problemas técnicos o de diseño
10. **Eliminar lemas, exhortaciones y metas numéricas** a los trabajadores que carezcan de un método explícito ya que la inmensa mayoría de los problemas provienen del sistema y no de falta de esfuerzo individual
11. **Eliminar cuotas numéricas y la gestión por objetivos** sustituyéndolas por un liderazgo efectivo que conozca la capacidad real del sistema
12. **Eliminar las barreras que privan al personal del orgullo de su trabajo** lo cual incluye abolir la evaluación anual de méritos y la clasificación punitiva
13. **Instituir un programa de educación y automejora** continua para todo el personal
14. **Actuar para lgorar la transformación** movilizando a la alta dirección y a todos los colaboradores para poner en práctica los principios anteriores

#### Alineación directa con la Ingeniería de Software

- **Punto 3. Dejar de depender de la inspección masiva -> Integración Continua CI**
- **Punto 5. Mejorar constantemente el sistema de producción y servicio -> DevOps y Ciclo PDCA**
- **Punto 8. Eliminar el miedo -> Revisión de código por pares**
- **Punto 10. Eliminar lemas y cuotas sin método -> Eliminación de antipatrones de medición**

## 2. Las 7 herramientas gráficas y estadísticas de la calidad

### 2.1 Análisis estadístico y visual: Dispersión, Histograma y Corrida

#### Diagrama de Dispersión

- Permite evaluar visual y matemáticamente la **relación** entre **dos variables continuas cuantitativas**. 
	- Es muy importante entender la diferencia entre **asociación/correlación** (la cual se califica por el coeficiente r de Pearson) y **causalidad**
	- El **coeficiente r de Pearson** es una medida que cuantifica la *intensidad y la dirección* de la relación *lineal* entre dos variables *cuantitativas*
		- Su valor está entre $-1$ y $1$
		- Un valor cercano a $1$ indica una correlación positiva es decir, si una variable aumenta la otra también
		- Un valor cercano a $-1$ significa que al aumentar una variable la otra disminuye
		- Un valor cercano a $0$ indica poca o ninguna relación lineal

#### Histograma

- Grafica la distribución de frecuencias de una variable continua lo que permite diagnosticar:
	- **La forma y tendencia central:** Identificación de la unimodalidad, bimodalidad o asimetría (sesgo a la derecha o izquierda)
	- **Dispersión y ancho del proceso:** Extensión de la variabilidad operativa frente a los límites deseados
	- **Valores atípicos (Outliers):** Detección de observaciones extremas que requieren auditoría de datos para determinar si corresponden a causas especiales o errores de captura

#### Gráfica de corrida

- Muestra los datos recolectados en un orden cronológico estricto en relación con la mediana del proceso
- Permite identificar si la variabilidad del proceso responde a una distribución aleatoria o si existen patrones sistemáticos

##### Reglas para la detección de señales no aleatorias

- **Shifts (cambios de nivel):** presencia de 6 o más puntos consecutivos situados de un solo lado de la mediana (por arriba o abajo)
- **Tendencias (trends)** secuencia de 5 o más puntos consecutivos con un comportamiento ascendente o descendente
- **Análisis de rachas (runs):** ocurrencia de un número total de rachas significativamente inferior o superior al intervalo esperado estadísticamente

### 2.2 Priorización y causa raíz: Pareto e Ishikawa

#### Diagrama de Pareto

- Postula que el 80% de los defectos o efectos no deseados provienen del 20% de las causas subyacentes
- **Procedimiento:**
	1. Categorizar las fallas o anomalías registradas en el proceso
	2. Ordenar las categorías en forma descendente según su frecuencia o costo de retrabajo
	3. Calcular la frecuencia acumulada y el porcentaje acumulado
	4. Trazar la curva de Pareto e identificar el punto de inflexión del 80% para focalizar las intervenciones de ingeniería en los factores de mayor impacto

#### Diagrama de Ishikawa

- Es una herramienta de estructuración cualitativa que organiza las hipótesis sobre las causas de un problema bajo la tipología tradicional de las 6M:
	- **Mano de obra:** Competencias técnicas, capacitación, fatiga e interrupciones del personal
	- **Maquinaria:** Capacidad de la infraestructura de desarrollo, servidores de integración continua e IDEs
	- **Materiales:** Bibliotecas de terceros, calidad de código heredado y especificaciones de entrada
	- **Método:** Procesos de desarrollo, políticas de branching, criterios de revisión de código y flujos de trabajo (work flows)
	- **Medida:** Definición de métricas, calidad de los datos recopilados e instrumentos de ocnteo
	- **Medio ambiente:** Cultura organizacional, presión de entregas, ruido físico e interrupciones del entorno
- Las ramas representan hipótesis de causas potenciales, para validar si es real se debe profundizar con la técnica de los 5 porqués y verificar su existencia mediante la **correlación y análisis empírico de datos.**

### 2.3 Control estadístico de Procesos (SPC) y Capacidad: Gráficas de Control y X - R

#### Gráficas de Control

Son la herramienta central del control estadístico de procesos (SPC) para monitorear la estabilidad temporal, tienen tres líneas operativas calculadas estadísticamente:
 - **Línea central (LC):** Representa la media o mediana histórica del proceso
 - **Límite superior de control (LSC):** Se ubica a +3σ
 - **Límite inferiol de control (LIC):** Se ubica a -3σ

##### Tipología de variabilidad

- **Causas comunes:** Variaciones naturales, aleatorias e inherentes a la estructura del sistema.
	- Requieren un rediseño del proceso por parte de la gerencia, no se eliminan
- **Causas especiales (asignables):** Inestabilidades provocadas por eventos ajenos al diseño habitual del proceso (como un fallo de red en un agente de compilación)

##### Reglas de inestabilidad predictiva (T1 a T4)

- **Regla T1:** Cualquier punto individual situado fuera de los límites de control (LSC o LIC)
- **Regla T2:** Un bloque de 8 o más puntos consecutivos ubicados del mismo lado de la línea central
- **Regla T3:** Una secuencia de 6 o más puntos consecutivos estrictamente crecientes o decrecientes
- **Regla T4:** Un conjunto de 14 o más puntos consecutivos alternando sistemáticamente arriba y abajo respecto a la línea central

#### Gráficas X-R y Análisis de capacidad

- "Estabilidad primero, capacidad después"
	- Un proceso inestable no es predecible por lo que cualquier cálculo de capacidad carece de validez técnica

1. **Gráfica R (Rangos):** Evalúa la variabilidad o dispersión interna de los subgrupos.
	- Se debe analizar *ANTES* que la gráfica **X**.
	- Si el gráfico R muestra inestabilidad, los límites de control calculados para el gráfico de promedios se vuelven inválidos
2. **Gráfica X (Promedios):** Monitorea el comportamiento del centrado o tendencia central del proceso a lo largo del tiempo
3. **Índice de capacidad:** Cuantifica la aptitud del proceso para cumplir con los límites de tolerancia o especificaciones requeridadas por el negocio
	- Se calcula cuando el proceso demuestra estar bajo control estadístico en las gráficas X y R

### 2.4 Flujo secuencial óptimo de diagnóstico de procesos

Para diagnosticar y estabilizar un proceso de manera metódica, se debe seguir una secuencia diagnóstica estructurada de cinco fases:
1. **Identificación del síntoma temporal:** mediante una *gráfica de corrida* y un *historama* para caracterizar visualmente la distribución del tiempo de ciclo o de fallas
	- Identificar sesgos o anomalías iniciales
2. **Estructuración de hipótesis de causa raíz:** construir un *diagrama de ishikawa* para identificar los factores causales probables
3. **Confirmación empírica:** evaluar las hipótesis de causa mediante *diagramas de dispersión* y análisis de correlación con los datos reales del proceso
4. **Priorización de intervenciones:** aplicar un *diagrama de pareto* sobre los factores o causas cuya relación con el problema haya sido demostrada empíricamente
	- identifiar el 20% de los factores que explican el 80% del retraso o defectos
5. **Monitoreo y prevención de recaídas:** implementar *gráficos de control estadístico (X-R)* para vigilar el comportamiento del proceso tras las intervenciones asegurando la eliminaicón de causas especiales y verificando la estabilidad del sistema

### Tabla comparativa

| Herramienta                   | Propósito Principal                                                    | Tipo de Datos de Entrada                      | Criterio de Decisión / Interpretación                                                                           |
| ----------------------------- | ---------------------------------------------------------------------- | --------------------------------------------- | --------------------------------------------------------------------------------------------------------------- |
| **Diagrama de Dispersión**    | Evaluar la asociación lineal entre dos variables continuas.            | Pares de datos continuos (X, Y).              | Coeficiente $r$ de Pearson. Si approx $0$, no hay relación lineal global (requiere segmentación por subgrupos). |
| **Histograma**                | Analizar la forma, tendencia central y dispersión de una variable.     | Variable continua.                            | Identificación de asimetría, modas, variabilidad y detección de valores atípicos (_outliers_).                  |
| **Gráfica de Corrida**        | Evaluar el comportamiento temporal en relación con la mediana.         | Serie de tiempo continua.                     | Detección de patrones no aleatorios: _Shifts_ ($6$ puntos) y _Tendencias_ ($5$ puntos).                         |
| **Diagrama de Pareto**        | Priorizar las categorías de fallas o causas raíz.                      | Frecuencias discretas / Categorías.           | Principio $80/20$: Enfocar recursos en el 20% de las causas que generan el 80% del impacto.                     |
| **Diagrama de Ishikawa**      | Estructurar cualitativamente hipótesis de causa raíz (6M).             | Cualitativo / Lluvia de ideas estructurada.   | Formulación de hipótesis causales a ser validadas empíricamente mediante los _5 Whys_ y datos.                  |
| **Gráfica de Control (SPC)**  | Monitorear la estabilidad y distinguir variabilidad común de especial. | Datos continuos ordenados cronológicamente.   | Violación de reglas T1-T4 (puntos fuera de LSC/LIC o secuencias no aleatorias indican inestabilidad).           |
| **Gráfica X̄-R y** **C_{pk}** | Evaluar variabilidad (R), centrado ($X$) y capacidad (C_{pk}).         | Variables continuas organizadas en subgrupos. | "Estabilidad primero": Estabilizar $R$ antes que $X$. Calcular C_{pk} únicamente si el proceso es estable.      |

## 3. Calidad de Datos, Recolección y Ciclo de vida del software

### 3.1 La recolección de datos

Un análisis convincente puede fracasar si los registros mezclan relgas, periodos o contextos.

> **Pregunta de entrada**
> Qué tendría que saber otra persona para confiar en cada valor

#### La recolección tiene entradas, controles y salidas

**Diseñar:**
- Campos, reglas y momento de captura

**Capturar:**
- Registrar cerca del evento

**Validar:**
- Detectar faltantes y rangos imposibles

**Entregar:**
- Conservar contexto y trazabilidad

**Revisar:**
- Corregir el método si genera errores

> La calidad del indicador depende de la calidad del proceso que lo produce
### 3.2 Los 4 criterios de calidad de datos en medición

Para garantizar la confiabilidad de los análisis estadísticos de procesos se debe auditar rigurosamente la base de datos de origen bajo cuatro criterios normativos:

| Criterio     | Pregunta de control                        | Ejemplo de falla                  |
| ------------ | ------------------------------------------ | --------------------------------- |
| Veracidad    | ¿El valor y el cálculo son correctos?      | Duración negativa                 |
| Sincronía    | ¿Las variables pertenecen al mismo evento? | Defecto de otra versión           |
| Consistencia | ¿La regla fue la misma?                    | Un equipo cuenta reaperturas      |
| Validez      | ¿Representa el atributo?                   | Commits usados como productividad |
