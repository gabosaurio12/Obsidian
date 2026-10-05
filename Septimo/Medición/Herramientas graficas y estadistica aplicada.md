## 1. Asociación y Causalidad

**La asociación** es una dependencia estadística entre dos o más factores donde la ocurrencia de uno varía con el otro, pero esto **no implica necesariamente causalidad**. Puede existir sin una relación de causa-efecto, ya que las variables pueden estar vinculadas por factores de confusión o azar.

En contraste, la **causalidad** establece una relación de causa y efecto donde un cambio en la variable independiente provoca directamente un cambio en la dependiente. Para distinguir la causalidad genuina de una mera asociación, se utilizan criterios como la **temporalidad** (la causa precede al efecto), la **fuerza** de la asociación, la **consistencia** en diferentes estudios y la **plausibilidad** biológica.

La confusión entre ambos conceptos puede llevar a conclusiones erróneas y peligrosas, especialmente en salud pública, donde observar que dos fenómenos ocurren simultáneamente no prueba que uno cause al otro.

---

## 2. ¿La métrica de commits por hora es de tipo causalidad?

**No.** "Commits por hora de trabajo" es una **métrica descriptiva de tasa** (un cociente: commits ÷ horas), no una métrica causal. Lo que mide es la **asociación** entre dos variables (número de commits y tiempo trabajado), pero no establece que una *cause* a la otra.

En la práctica, esta métrica tiene limitaciones bien documentadas:

- **No implica causalidad**: que alguien haga más commits no significa que *cause* más valor, ni que trabajar más horas *cause* más commits. La relación puede estar mediada por complejidad del código, tamaño del proyecto, o simplemente el estilo de commit (fragmentar vs. agrupar).
- **Mide actividad, no resultado**: el consenso en la industria (marcos como DORA y SPACE) señala que los commits miden *activity*, no *output* ni *value*.
- **Es fácil de "jugar"**: un desarrollador puede inflar el número haciendo commits pequeños y triviales, lo que infla la tasa sin aportar valor.

En resumen: es una métrica de **asociación** (y además una señal débil de productividad), no de **causalidad**. Para inferir causalidad necesitarías un diseño experimental o criterios como temporalidad, fuerza de la relación, consistencia y plausibilidad — ninguno de los cuales se cumple solo con contar commits por hora.

---

## 3. Ejemplo de relación asociativa y causalidad en software

### 3.1. Relación asociativa (correlacional)

**Variables:** Número de commits vs. número de *code smells* detectados.

El estudio *"Understanding the Impact of Development Efforts in Code Quality"* (2021, publicado en *Empirical Software Engineering*) analizó más de **95 000 commits** y **25 000 medidas de calidad** de 13 proyectos open-source en GitHub/SonarCloud. Encontró una **correlación positiva** entre el número de commits y la cantidad de *code smells* detectados: a más commits, más olores de código se observan.

Sin embargo, esto **no implica que los commits *causen* los code smells**. La relación puede explicarse por factores de confusión: más commits → más código escrito → más superficie donde aparecen olores, o simplemente que proyectos más activos generan más cambios de todo tipo. El estudio mismo lo describe como una *correlation*, no como un efecto causal.

> Fuente: Zenodo, 2024 / ResearchGate, 2021

### 3.2. Relación causal

**Variables:** Implementación de *code review* (intervención) → reducción de defectos post-release.

La tesis doctoral de **Nina Chen** en UC Berkeley (2017), *"Large-Scale Analysis of Modern Code Review Practices and Software Quality and Security"*, utiliza un **diseño cuasi-experimental** con *changepoint analysis* de series temporales para aislar el **efecto causal** de implementar *code review* sobre la calidad del software.

Esto es causal porque:
- **Temporalidad**: la intervención (implementar *code review*) precede al efecto (reducción de defectos).
- **Control de confusores**: el diseño cuasi-experimental aísla el efecto del tratamiento respecto a otros factores.
- **Mecanismo plausible**: el *code review* identifica defectos antes de que lleguen a producción.

> Fuente: UC Berkeley, 2017

---

## 4. Histograma: Forma, Concentración, Dispersión, Asimetría y Valores Poco Frecuentes

**Fuente principal:** *SPACEX: Exploring metrics with the SPACE model for developer productivity* (Kaul et al., 2025, arXiv:2511.20955) — análisis de 705 desarrolladores de repositorios open-source.

| Concepto | Ejemplo concreto |
|----------|-----------------|
| **Forma** | La distribución de `total_commits` es **unimodal y asimétrica** (no normal). El histograma muestra un pico en valores bajos y una cola larga hacia la derecha. |
| **Concentración** | La **mediana** de commits por desarrollador está muy por debajo de la **media**, porque unos pocos desarrolladores (los "heavy hitters") inflan la media. |
| **Dispersión** | La **desviación estándar** de commits entre desarrolladores es muy alta en relación a la media. El estudio aplica *winsorization* (corte al 1° y 99° percentil). |
| **Asimetría** | **Asimetría positiva (derecha) extrema.** *"A preliminary histogram of total_commits revealed an extreme right skew, with a small number of contributors making a disproportionately high number of commits."* |
| **Valores poco frecuentes (outliers)** | Los desarrolladores en la cola derecha del histograma. Se tratan con *winsorization* y transformación logarítmica `log(x+1)`. |

### Ejemplo complementario con números concretos

**Fuente:** Mota, Tives & Canedo (2021), *Tool for Measuring Productivity in Software Development Teams*, MDPI Information 12(10):396.

| Equipo | Media | Mediana | Desviación estándar | Interpretación |
|--------|-------|---------|---------------------|----------------|
| Equipo 1 | 8.35 | 8.11 | 0.539 | **Dispersión pequeña** |
| Equipo 2 | 7.90 | 7.97 | 0.816 | **Dispersión grande** (151% mayor) |

---

## 5. Gráfica de Corrida: Orden Temporal, Mediana, Cambios Persistentes, Tendencias y Rachas

**Fuente de reglas:** IHI, *Run Chart Rules Reference Sheet*.
**Fuente de aplicación a software:** *Statistical Process Control for Software: Fill the Gap* (2010).

### Datos de ejemplo (10 sprints)

| Sprint | Defectos |
|--------|----------|
| 1 | 14 |
| 2 | 11 |
| 3 | 16 |
| 4 | 9 |
| 5 | 12 |
| 6 | 8 |
| 7 | 7 |
| 8 | 6 |
| 9 | 5 |
| 10 | 4 |

**Mediana** = **(8 + 9) / 2 = 8.5**

| Concepto | Ejemplo en este caso |
|----------|----------------------|
| **Orden temporal** | El sprint 1 va primero, el sprint 10 va último. Sin este orden, no se puede detectar ninguna señal. |
| **Mediana** | Mediana = **8.5**. Línea horizontal que divide los puntos en dos mitades. |
| **Cambio persistente (Shift)** | 6 o más puntos consecutivos del mismo lado de la mediana. Si se agrega sprint 11 con 3 defectos, la racha sería 6→11 = **6 puntos** → shift detectado. |
| **Tendencia (Trend)** | 5 o más puntos consecutivos todos aumentando o disminuyendo. Sprints 6→10: 8, 7, 6, 5, 4 → **tendencia decreciente**. |
| **Rachas (Runs)** | 3 cruces de la mediana + 1 = **4 rachas**. Con 10 puntos, lo esperado es 4–8. 4 está en el límite inferior → shift incipiente. |

---

## 6. Diagrama de Pareto: Frecuencia, Orden de Categorías y Porcentaje Acumulado

**Fuente:** *Mastering Pareto Analysis: Problem Solving & Process Optimization Guide* (IIENstitu, 2026).

### Tabla de datos (400 bugs totales)

| # (orden) | Categoría de bug | **Frecuencia** | % del total | **% Acumulado** |
|:---------:|---|:---:|:---:|:---:|
| 1 | Interfaz de usuario (UI) | 150 | 37.5% | 37.5% |
| 2 | Rendimiento (Performance) | 100 | 25.0% | 62.5% |
| 3 | Compatibilidad | 60 | 15.0% | 77.5% |
| 4 | Seguridad | 40 | 10.0% | 87.5% |
| 5 | Instalación | 30 | 7.5% | 95.0% |
| 6 | Localización | 20 | 5.0% | 100.0% |

| Concepto | Ejemplo |
|----------|---------|
| **Frecuencia** | UI = **150** bugs (barra más alta). Total = 400. |
| **Orden de categorías** | Orden **estrictamente descendente** de frecuencia. Si se ordenaran alfabéticamente, no sería un Pareto. |
| **Porcentaje acumulado** | Línea que cruza el **80%** entre la categoría 3 y 4 → "vital few" = UI, Performance y Compatibilidad (77.5%). |

### Ejemplo complementario

**Fuente:** *Defect Pareto chart* (ResearchGate), análisis de 5 proyectos de software:

| Categoría de defecto | % aproximado |
|---|:---:|
| Defectos de codificación (código lógico) | **70–80%** |
| Defectos de GUI | ~10% |
| Requerimientos, diseño y documentación | ~10% |

---

## 7. Diagrama de Ishikawa: Organización de Causas e Hipótesis vs. Evidencia

**Fuente principal:** SAQ Toolbox – Ishikawa Diagram.
**Fuente complementaria:** 124Tech – Ishikawa Diagram for Software Engineers.

### Problema (cabeza del pez)

> *"Crashes recurrentes en producción tras cada despliegue"*

### 7.1. Organización de posibles causas (6M adaptado)

| Categoría (espina) | Sub-causas identificadas |
|---|---|
| **Recursos** | Herramientas de despliegue desactualizadas, pipeline de CI inestable, hardware insuficiente en staging |
| **Métodos** | Ausencia de DoD, pruebas manuales insuficientes, falta de rollback automático |
| **Personas** | Falta de experiencia, problemas de comunicación, sobrecarga |
| **Materiales** | Requerimientos ambiguos, datos de migración incompletos, dependencias no documentadas |
| **Medición** | Métricas de calidad ausentes, sin error tracking en staging, sin cobertura de tests |
| **Entorno** | Requerimientos cambiantes, cambios no comunicados, presión de fecha |

### 7.2. Hipótesis frente a evidencia

> *"Probable causes verified by data or team consensus were marked in green. Causes that were ruled out were marked in red, and causes requiring confirmation were marked in orange."*
> — SAQ Toolbox

| Causa identificada | Estado | Evidencia |
|---|:---:|---|
| Pipeline de CI inestable (Métodos) | 🟢 **Verificada** | 12 builds fallidos en el último mes; crash solo en deploys por pipeline "express". |
| Ausencia de rollback automático (Métodos) | 🟢 **Verificada** | En 3 de 5 incidentes, deploy activo >2 h sin rollback. |
| Falta de experiencia (Personas) | 🟠 **Por confirmar** | No hay datos de tickets correlacionados. |
| Requerimientos ambiguos (Materiales) | 🔴 **Descartada** | Revisión de tickets: requerimientos claros y aprobados. |
| Hardware insuficiente (Recursos) | 🔴 **Descartada** | Uso CPU/RAM <40% en staging. |
| Sin error tracking (Medición) | 🟢 **Verificada** | No existe integración con Sentry en staging. |

### 7.3. 5 Whys sobre la causa raíz

**Fuente:** 124Tech — caso de *null pointer exception*:

| Nivel | Pregunta | Respuesta |
|:---:|---|---|
| 1 | ¿Por qué crash? | JOIN asume que existe un registro relacionado, pero algunos usuarios antiguos no lo tienen. |
| 2 | ¿Por qué no existe? | La tabla se añadió hace 6 meses y solo se backfilló para cuentas nuevas. |
| 3 | ¿Por qué excluyó esas cuentas? | El script excluyó cuentas inactivas, algunas reactivadas después. |
| 4 | ¿Por qué no se actualizó la marca? | El flujo de reactivación lo construyó **otro equipo** y no actualizó el flag. |
| 5 | ¿Por qué no se detectó antes? | **No existía un test de contrato** entre los dos servicios. |

> *"The surface cause was a null pointer exception. The root cause was a cross-team data assumption that was never explicitly documented or tested."*

---

## 8. Gráfica de Control: LC, LIC, LSC, Causas Comunes/Especiales y Señales T1–T4

**Fuentes:** SCIRP (2014), Western Electric Rules (Wikipedia), SPC for Excel, 6Sigma.us, NIST/SEMATECH.

### Contexto

Revisión de código sobre **15 módulos**. Gráfica de control *c* (conteo de defectos, tamaño constante).

### Cálculo de límites

| Parámetro | Fórmula | Valor |
|---|---|---|
| **LC** | c̄ = 195/15 | **13.0** |
| **LSC** | 13 + 3√13 | **23.82** |
| **LIC** | 13 − 3√13 | **2.18** |

### Datos y señales

| Módulo | Defectos | Señal |
|:---:|:---:|---|
| 1 | 10 | — |
| 2 | 14 | — |
| 3 | 15 | — |
| 4 | 16 | — |
| 5 | 21 | **T2** (con M6) |
| 6 | 22 | **T2** (con M5) |
| 7 | 11 | — |
| 8 | 13 | — |
| 9 | **25** | **T1** (fuera de LSC) |
| 10 | 17 | — |
| 11 | 15 | — |
| 12 | 14 | — |
| 13 | 12 | **T4** (8 pts arriba de LC) |
| 14 | 11 | — |
| 15 | 9 | — |

### Señales T1–T4

| Señal | Regla | Dónde | Interpretación |
|:---:|---|---|---|
| **T1** | Punto fuera de 3σ | Módulo 9 = 25 > 23.82 | Causa especial puntual. |
| **T2** | 2 de 3 puntos > 2σ mismo lado | Módulos 5 (21) y 6 (22) > 20.21 | Shift incipiente. |
| **T3** | 4 de 5 puntos > 1σ mismo lado | Módulos 3, 4, 5, 6: 15, 16, 21, 22 > 16.61 | Tendencia de deterioro. |
| **T4** | 8 puntos consecutivos mismo lado de LC | Módulos 2→9: 8 consecutivos > 13 | Shift sostenido. |

### Causas comunes vs. especiales

| Tipo | Ejemplo | Acción |
|---|---|---|
| **Comunes** | Oscilación normal entre 9 y 16 defectos. | No actuar punto por punto. Cambio fundamental del proceso. |
| **Especiales** | Módulo 9 = 25 (T1); Módulos 5–6 = 21, 22 (T2). | Investigar y eliminar la causa raíz. |

---

## 9. X̄-R: Estabilidad vs. Capacidad

**Fuentes:** Symestic (2026), Lean 6 Sigma Hub, 6Sigma.us, SPC Pro, iSixSigma.

### Contexto

**Cycle time** de *user stories* (días). 5 stories por semana, 10 semanas. SLA: LSL = 1.5, USL = 3.0. n = 5.

### Función de X̄ y R

| Gráfica | Función | Pregunta |
|---------|---------|----------|
| **R chart** | Monitorea variación **dentro** del subgrupo. | ¿La consistencia es estable? |
| **X̄ chart** | Monitorea la **media** del subgrupo. | ¿El promedio está donde debería? |

### Orden de revisión

> *"Stability first, capability second — never the other way round."* — Symestic

| Paso | Acción |
|:---:|--------|
| 1 | Revisar **R chart** primero. ¿En control? |
| 2 | Revisar **X̄ chart**. ¿En control? |
| 3 | Si ambas en control → **ESTABLE**. |
| 4 | Calcular **Cpk** y comparar con umbral (≥ 1.33). |

### Fase I: Inestable

R = 1.2 > UCL_R = 1.120 → **R chart FUERA DE CONTROL** (semana 10).
→ **NO ESTABLE → NO calcular Cpk.**

### Fase II: Estable

| Parámetro | R chart | X̄ chart |
|---|---|---|
| Media | R̄ = 0.44 | X̄̄ = 2.422 |
| UCL | 0.930 | 2.676 |
| LCL | 0 | 2.168 |
| Estado | ✅ En control | ✅ En control |

### Capacidad (solo tras confirmar estabilidad)

| Índice | Fórmula | Valor | Veredicto |
|--------|---------|:---:|---|
| σ̂ | R̄/d₂ = 0.44/2.326 | 0.189 | — |
| Cp | (3.0−1.5)/(6×0.189) | **1.32** | Marginal |
| Cpk | min[(3.0−2.422)/0.567, (2.422−1.5)/0.567] | **1.02** | ❌ No capaz |

### Estable ≠ Capaz

| Propiedad | Pregunta | Resultado |
|---|---|---|
| **Estabilidad** | ¿El proceso es predecible? | ✅ Estable |
| **Capacidad** | ¿Cabe en la especificación? | ❌ No capaz (Cpk = 1.02 < 1.33) |

---

## 10. Tabla Comparativa: 7 Herramientas Gráficas en Medición de Software

| Herramienta | Pregunta que responde | Datos necesarios | Hallazgo posible | Limitación / Riesgo |
|---|---|---|---|---|
| **Dispersión** | ¿Existe una relación entre dos variables? ¿De qué tipo? | Dos variables cuantitativas emparejadas (~10+ pares). | Correlación fuerte, débil o nula. Permite formular hipótesis causales. | Correlación ≠ causalidad. Con <10 puntos puede ser espuria. No detecta relaciones no lineales sin inspección. |
| **Histograma** | ¿Cómo se distribuye una variable? ¿Simétrica, sesgada, bimodal? | Una variable cuantitativa, ≥30 valores. Definir bins. | Distribución sesgada, bimodal, outliers. Revela si la media es representativa. | No incluye dimensión temporal. Depende de la elección de bins. Con n<30 poco fiable. |
| **Corrida** | ¿El proceso está cambiando? ¿Tendencias, shifts, ciclos? | Variable en orden temporal (≥10 puntos, ideal 20+). | Tendencia, shift, ciclo. Detecta señales antes de que el proceso salga de control. | No distingue variación común de especial. Con <10 puntos las reglas no son significativas. No identifica causa. |
| **Pareto** | ¿Cuáles son las pocas causas que generan la mayoría del problema? | Frecuencias de categorías discretas. Orden descendente. | Identifica el 80% en el 20% → priorización. Línea de % acumulado. | Solo frecuencia, no severidad. Asume mismo impacto por categoría. Datos históricos, no predictivos. No explica por qué. |
| **Ishikawa** | ¿Cuáles son las posibles causas raíz? ¿Cómo se organizan? | Cualitativo: problema + brainstorming. No requiere datos numéricos. | Estructura visual de hipótesis. Facilita brainstorming colaborativo. | No es estadística. No valida por sí sola. Puede generar listas largas. No cuantifica peso relativo. |
| **Control** | ¿El proceso está en control? ¿Hay variación especial? | Datos en tiempo con subgrupos (n=2–5). Mínimo 20–25 subgrupos. | Detección de causas especiales (T1–T4). Distingue variación común de especial. | Requiere muestra grande. Límites descriptivos, no prescriptivos. No evalúa especificaciones. Con datos no normales, límites 3σ no válidos. |
| **X̄-R + Cpk** | ¿Es estable Y capaz? ¿Cuánto margen hay? | Subgrupos en tiempo + LSL/USL. Constantes (A₂, D₃, D₄, d₂). | Cpk ≥ 1.33 → capaz. Cpk < 1.33 → estable pero no capaz. Cuantifica margen. | Solo válido si proceso estable. Asume normalidad. Con datos sesgados puede sub/sobreestimar. No identifica causas. |

### Flujo de trabajo típico

```
1. PARETO        → ¿Qué problema priorizar?         (selección)
2. ISHIKAWA      → ¿Qué causas posibles?            (hipótesis)
3. DISPERSIÓN    → ¿La causa sospechada se asocia?  (validación)
4. HISTOGRAMA    → ¿Cómo se distribuye la variable? (diagnóstico)
5. CORRIDA       → ¿Hay señales de cambio?          (monitoreo ligero)
6. CONTROL       → ¿El proceso es estable?           (monitoreo riguroso)
7. X̄-R + Cpk    → ¿Es estable Y capaz?              (veredicto final)
```

---

## 11. Evaluación de Respuestas (Autoevaluación)

### 11.1. ¿Qué dos herramientas podrían confundirse?

**Respuesta dada:** Pareto e Ishikawa porque ambos pueden llevar a identificar problemas dentro de categorías; Ishikawa no es estadística y requiere menos información en crudo.

**Veredicto:** ✅ Correcta (con matiz). Lo más exacto: Ishikawa **no requiere datos numéricos** (cualitativo), Pareto **requiere frecuencias**. No es "menos" datos, sino un **tipo diferente** de entrada.

### 11.2. ¿Por qué una gráfica puede mostrar una señal sin demostrar su causa?

**Respuesta dada:** Porque puede representar un cúmulo de datos relacionados pero que no son causales.

**Veredicto:** ⚠️ Parcialmente correcta, imprecisa. Mejor: "La señal indica que el proceso se desvió de su comportamiento normal (variación especial), pero no identifica la causa asignable. Solo señala *que* y *cuándo* ocurrió, no *por qué*."

### 11.3. ¿Cuál utilizarías primero para investigar un aumento en el tiempo de entrega?

**Respuesta dada:** Pareto, porque me permite separar las causas por categorías.

**Veredicto:** ❌ No es la mejor opción. Pareto es de **priorización**, no de investigación. La herramienta correcta como primer paso es la **gráfica de corrida**:

| Razón | Explicación |
|---|---|
| Es la más simple | Solo necesita la variable en orden temporal. |
| Confirma la señal | Distingue tendencia real de ruido. |
| Identifica cuándo empezó | Acota el espacio de búsqueda de la causa. |
| No requiere categorías | Pareto sí requiere categorías ya definidas. |

**Flujo correcto:**
```
1. CORRIDA  → ¿El aumento es una señal real? ¿Cuándo empezó?
2. ISHIKAWA → ¿Qué causas posibles desde ese momento?
3. DISPERSIÓN → ¿La causa sospechada se asocia con el aumento?
4. PARETO   → ¿Qué categoría de causa ataco primero?
```

---

## Fuentes Globales

1. ASQ – *7 Basic Quality Tools*: asq.org
2. Engineering.com – *The Seven Basic Tools of Quality*
3. SPC for Excel – *Ishikawa's Seven Quality Tools*
4. SLM MBA – *Seven Essential Quality Improvement Tools for Effective SPC* (2025)
5. 6Sigma.us – *Process Capability Index (Cpk)* – sección Software
6. Symestic – *Process Stability: SPC, Cpk & Real-Time Control* (2026)
7. IHI – *Run Chart Rules Reference Sheet*
8. Western Electric Rules – Wikipedia
9. NIST/SEMATECH e-Handbook, §6.3.3.1
10. SCIRP – *Enhancing Software Process Management through Control Charts* (2014)
11. Kaul et al. – *SPACEX* (2025), arXiv:2511.20955
12. Mota, Tives & Canedo (2021), MDPI Information 12(10):396
13. Nina Chen – UC Berkeley (2017), EECS-2017-217
14. SAQ Toolbox – Ishikawa Diagram
15. 124Tech – Ishikawa Diagram for Software Engineers
16. IIENstitu – *Mastering Pareto Analysis* (2026)
17. Lean 6 Sigma Hub – *X-Bar and R Charts Explained*
18. SPC Pro – *Process Stability vs. Capability*
19. iSixSigma – *Monitoring Process Performance with X-Bar and R Charts*
20. Benchmark Six Sigma – *Stable vs Capable Process*   