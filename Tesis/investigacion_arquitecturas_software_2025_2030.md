# Investigación: arquitecturas de software más utilizadas en 2025–2026 y evolución 2027–2030

**Fecha de corte:** septiembre de 2026  
**Alcance:** arquitectura de aplicaciones y sistemas; cloud-native, SDLC y sistemas con IA integrada.  
**Objetivo:** identificar las arquitecturas/patrones con mayor presencia práctica en 2025–2026 y proyectar, con evidencia y supuestos explícitos, cuáles tienen mayor probabilidad de expansión entre 2027 y 2030.

> **Nota sobre la “cadena de razonamiento”:** no se expone razonamiento interno privado. En su lugar, esta investigación incluye una **cadena de inferencia auditable**: fuentes, datos observables, criterios de selección, supuestos y pasos que conectan evidencia con las proyecciones.

---

## 1. Resumen ejecutivo

No existe una encuesta global única que mida de forma comparable “qué arquitectura de software usa más la industria”. Por eso, no es metodológicamente correcto presentar un ranking absoluto como si existiera.

La evidencia disponible en 2025–2026 sí permite identificar un conjunto claro de arquitecturas y estilos dominantes:

| Arquitectura / estilo | Situación 2025–2026 | Evidencia principal |
|---|---|---|
| **Monolito modular / arquitectura modular** | Muy relevante para aplicaciones que priorizan simplicidad, velocidad y límites internos claros | Fowler señala que muchos sistemas pueden beneficiarse más de un monolito que de microservicios; AWS recomienda límites de dominio explícitos para desarrollo agentic. |
| **Microservicios** | Uno de los estilos cloud-native más extendidos | CNCF reporta **46%** de adopción entre desarrolladores backend encuestados en Q3 2025. |
| **Event-driven architecture (EDA)** | Fundamental en sistemas distribuidos, integración y procesamiento asíncrono | Forma parte de la evolución cloud-native y de los sistemas desacoplados; además encaja naturalmente con workflows y agentes. |
| **Serverless / FaaS** | Consolidado como opción para cargas variables, APIs y procesamiento por eventos | La investigación de tendencias de arquitectura de 2025 identifica Serverless como una de las tecnologías con mayor frecuencia/centralidad en conferencias de arquitectura. |
| **Cloud-native + contenedores + Kubernetes** | Infraestructura dominante para sistemas de producción complejos | CNCF 2026 reporta que **82% de los usuarios de contenedores ejecutan Kubernetes en producción**. |
| **Hexagonal / Clean / DDD** | Muy relevante como arquitectura interna y mecanismo de desacoplamiento | AWS recomienda estructuras por dominio y separación `/domain`, `/application`, `/infrastructure`, junto con patrones hexagonales, especialmente para desarrollo con agentes. |
| **RAG / arquitecturas de aplicaciones LLM** | Ya es una arquitectura de aplicación común para IA generativa con conocimiento externo | InfoQ identifica RAG como técnica común en arquitectura de aplicaciones LLM en 2025. |
| **Arquitecturas agentic / multi-agent** | Emergentes y en rápida industrialización | AWS documenta arquitecturas empresariales con capas de agentes, herramientas, memoria, conocimiento, orquestación y observabilidad. |

**Conclusión central:** 2025–2026 no muestran el reemplazo de una arquitectura por otra. El movimiento dominante es hacia **composición híbrida**: código modular + servicios independientes donde aportan valor + eventos + plataformas cloud-native + componentes serverless + capacidades de IA.

Para 2027–2030, la evolución más importante probablemente no será “microservicios vs. monolito”, sino la aparición de sistemas donde **IA, agentes, herramientas, memoria, recuperación de conocimiento, eventos y software determinista conviven bajo límites arquitectónicos explícitos**.

---

# 2. Cómo se construyó la investigación

## 2.1 Fuentes utilizadas

Se priorizaron:

1. **CNCF / Linux Foundation** para adopción cloud-native, Kubernetes, microservicios y platform engineering.
2. **Google Cloud / DORA** para cambios en el SDLC y efectos de la IA en software delivery.
3. **Gartner** para tendencias de ingeniería de software y adopción prevista de IA.
4. **AWS Architecture / Prescriptive Guidance** para patrones de arquitectura de sistemas agentic.
5. **InfoQ** para tendencias observadas por arquitectos y practitioners.
6. **Stack Overflow Developer Survey 2025** para comportamiento de desarrolladores y adopción de IA.
7. **Martin Fowler** como referencia conceptual para microservicios, monolitos modulares y trade-offs arquitectónicos.
8. **Investigación académica de 2025** que analiza miles de charlas de conferencias de arquitectura.

## 2.2 Criterios

Se consideró una arquitectura como relevante cuando aparece respaldada por al menos uno de estos indicadores:

- adopción cuantitativa;
- presencia recurrente en estudios de industria;
- uso como fundamento de plataformas cloud-native;
- aparición recurrente en arquitectura de sistemas de producción;
- crecimiento asociado directamente a IA;
- capacidad de responder a cambios observables del SDLC.

No se mezclan **arquitectura**, **patrón de diseño**, **tecnología** y **herramienta** como si fueran equivalentes. Por ejemplo:

- Microservicios = estilo arquitectónico.
- Event-driven = estilo/patrón arquitectónico.
- Kubernetes = plataforma/orquestador.
- Docker = tecnología de contenedores.
- RAG = patrón/arquitectura de aplicación de IA.
- DDD = enfoque de modelado y diseño de dominio.

---

# 3. Arquitecturas más utilizadas/relevantes en 2025–2026

## 3.1 Microservicios

### Qué son

Una aplicación se divide en servicios relativamente autónomos, normalmente organizados alrededor de capacidades de negocio, con despliegue y escalado independientes.

Martin Fowler identifica como características centrales la componentización mediante servicios, organización alrededor de capacidades de negocio, automatización de infraestructura, diseño para fallos y evolución independiente.

### Evidencia 2025

El informe **CNCF State of Cloud Native Development Q3 2025** reportó:

- **46%** de los desarrolladores backend encuestados utilizaban microservicios.
- **50%** utilizaban API gateways.

Esto convierte a microservicios en uno de los estilos más claramente observables dentro del desarrollo cloud-native.

### Ventajas

- despliegue independiente;
- límites fuertes entre componentes;
- escalado independiente;
- autonomía de equipos;
- posibilidad de aislar tecnologías.

### Costes

- complejidad distribuida;
- latencia de red;
- observabilidad más compleja;
- consistencia distribuida;
- mayor coste operacional;
- necesidad de automatización y plataforma madura.

### Tendencia

**Continúa fuerte, pero no como solución universal.**

La tendencia más razonable para 2025–2026 es utilizar microservicios donde la escala, autonomía de equipos, límites de dominio o necesidades operacionales justifican el coste.

---

## 3.2 Monolito modular

Un monolito modular mantiene la aplicación en un único proceso/despliegue, pero divide internamente el sistema mediante límites arquitectónicos explícitos.

Ejemplo conceptual:

```text
Application
├── Identity
├── Billing
├── Orders
├── Notifications
└── Reporting
```

Cada módulo posee:

- responsabilidades claras;
- interfaces explícitas;
- dependencias controladas;
- pruebas independientes;
- reglas de acceso entre módulos.

### Por qué sigue siendo relevante

Martin Fowler documenta que muchos sistemas obtienen mejores resultados empezando con un monolito bien estructurado y extrayendo servicios únicamente cuando existe una razón concreta.

Esto reduce:

- complejidad distribuida;
- costes de infraestructura;
- problemas de consistencia;
- latencia interna;
- dificultad de debugging.

### Tendencia

El monolito no está desapareciendo. Lo que está perdiendo vigencia es el **monolito sin límites**, no necesariamente el monolito como unidad de despliegue.

---

# 4. Event-Driven Architecture

Una arquitectura event-driven utiliza eventos para comunicar cambios o hechos del sistema de manera desacoplada.

```text
Order Service
      |
      | OrderCreated
      v
+-------------+
| Event Bus   |
+-------------+
   |       |
   v       v
Billing   Email
```

### Por qué es importante

Los eventos permiten:

- desacoplamiento temporal;
- procesamiento asíncrono;
- integración entre servicios;
- escalado independiente;
- procesamiento de streams;
- integración con sistemas de IA.

Además, los agentes de IA necesitan frecuentemente reaccionar ante eventos, ejecutar herramientas y desencadenar workflows.

### Riesgos

- duplicación de eventos;
- ordenamiento;
- idempotencia;
- consistencia eventual;
- debugging distribuido;
- contratos de eventos.

### Tendencia 2027–2030

**Muy alta probabilidad de expansión**, especialmente combinada con agentes y workflows automatizados.

---

# 5. Serverless

Serverless permite ejecutar lógica sin administrar directamente la infraestructura subyacente.

Ejemplos:

- Functions as a Service;
- APIs gestionadas;
- procesamiento de eventos;
- jobs;
- pipelines;
- workloads episódicos.

La investigación académica de 2025 sobre tendencias de arquitectura analizó **5,677 charlas de ocho conferencias profesionales** y encontró que Kubernetes, Cloud Native, Serverless y Containers dominaban por frecuencia y centralidad.

### Fortalezas

- escalado automático;
- pago según consumo en muchos modelos;
- integración natural con eventos;
- menor carga operacional.

### Limitaciones

- cold starts;
- dependencia del proveedor;
- debugging distribuido;
- límites de ejecución;
- complejidad creciente cuando el sistema se fragmenta demasiado.

### Tendencia

No sustituirá a contenedores ni a microservicios. Probablemente seguirá coexistiendo con ellos como **componente especializado**.

---

# 6. Cloud-native, contenedores y Kubernetes

No es una única arquitectura de aplicación, sino un ecosistema de infraestructura sobre el que se despliegan múltiples estilos.

El **CNCF Annual Cloud Native Survey 2026** reportó que **82% de los usuarios de contenedores ejecutan Kubernetes en producción**.

Esto muestra que Kubernetes pasó de ser una tecnología principalmente experimental a convertirse en una capa operacional central para muchas organizaciones.

### Arquitectura típica

```text
Users
  |
API Gateway / Ingress
  |
Kubernetes
  |
+---------+---------+---------+
| Service | Service | Service |
+---------+---------+---------+
      |
 Event / DB / Cache / Queue
```

### Evolución

La tendencia no es que cada desarrollador administre Kubernetes manualmente.

Al contrario: el crecimiento de **Platform Engineering** busca ocultar parte de la complejidad mediante Internal Developer Platforms (IDPs).

---

# 7. Platform Engineering

Platform Engineering no es estrictamente una arquitectura de aplicación; es una forma de estructurar la plataforma que utilizan los equipos de desarrollo.

El objetivo es ofrecer capacidades internas como:

- deployment;
- observabilidad;
- seguridad;
- infraestructura;
- ambientes;
- CI/CD;
- secretos;
- templates;
- servicios administrados.

En 2026, CNCF reportó que:

- 28% de organizaciones tenían un equipo dedicado de platform engineering;
- 41% utilizaban un modelo donde varios equipos colaboraban en las capacidades de plataforma;
- 35% reportaban una plataforma híbrida para integrar workloads de IA.

### Importancia

La arquitectura de software está empezando a depender no solamente de la arquitectura del producto, sino de la **arquitectura de la plataforma que permite construirlo**.

---

# 8. Hexagonal / Clean Architecture / DDD

Estas arquitecturas buscan separar:

```text
        External Systems
               |
           Adapters
               |
       Application Layer
               |
          Domain Model
```

La idea fundamental es evitar que el dominio dependa directamente de:

- bases de datos;
- frameworks;
- APIs externas;
- proveedores cloud;
- UI.

AWS recomienda explícitamente estructuras con límites de dominio claros y menciona Hexagonal Architecture como mecanismo para tratar sistemas externos como adapters.

### Por qué gana importancia con IA

Un agente necesita comprender:

- dónde está la lógica de negocio;
- qué puede modificar;
- qué dependencias externas existen;
- qué puede probar localmente.

Un código con límites explícitos es más fácil de analizar y modificar automáticamente.

---

# 9. Arquitecturas de IA generativa: RAG

RAG — Retrieval-Augmented Generation — combina un modelo generativo con recuperación de información externa.

```text
User
 |
 v
Application
 |
 v
Retriever ---> Vector / Search Store
 |                    |
 |<---- Relevant -----|
 |
 v
LLM
 |
 v
Response
```

InfoQ identificó en 2025 RAG como una técnica que se estaba convirtiendo en una práctica común para mejorar resultados de LLM y que los arquitectos estaban diseñando sistemas teniendo en cuenta su incorporación.

### Componentes habituales

- LLM;
- embeddings;
- vector database;
- search/retrieval;
- reranking;
- prompt/context assembly;
- guardrails;
- observabilidad;
- evaluación.

### Problema

RAG no debe confundirse con una arquitectura completa del sistema. Normalmente es **un subsistema dentro de una arquitectura mayor**.

---

# 10. Arquitecturas agentic

Aquí ocurre uno de los cambios más importantes.

Un sistema tradicional:

```text
Request
  ↓
Application
  ↓
Business Logic
  ↓
Database
  ↓
Response
```

Un sistema agentic puede tener:

```text
User Goal
   ↓
Agent
   ├── LLM
   ├── Memory
   ├── Knowledge
   ├── Tools
   ├── Other Agents
   └── Policies
          ↓
     Business Systems
```

AWS describe una arquitectura empresarial agentic con:

- capa de aplicaciones;
- capa de agentes;
- LLM;
- herramientas;
- fuentes de conocimiento;
- memoria de corto y largo plazo;
- comunicación entre agentes;
- orquestación;
- observabilidad;
- seguridad;
- gobierno.

Esto representa un cambio conceptual importante: la aplicación deja de ser únicamente un flujo determinista de funciones y empieza a incluir **componentes capaces de decidir dinámicamente qué acción ejecutar**.

---

# 11. El cambio del SDLC entre 2025 y 2026

La arquitectura no está evolucionando aislada del proceso de desarrollo.

## 11.1 IA integrada en el desarrollo

El **DORA 2025 State of AI-assisted Software Development**, basado en casi 5,000 profesionales, reportó:

- 90% de los encuestados utiliza IA en el trabajo;
- más de 80% percibe aumento de productividad;
- la adopción de IA se relaciona con mayor throughput;
- pero también existe una relación negativa entre adopción de IA y estabilidad de entrega;
- las organizaciones con plataformas internas de alta calidad obtienen mejores condiciones para aprovechar IA.

La implicación arquitectónica es importante:

> aumentar la velocidad de generación de cambios sin aumentar la velocidad de validación produce riesgo.

Por ello, las arquitecturas futuras necesitan **feedback loops rápidos**.

---

# 12. Arquitectura preparada para agentes

AWS publicó en 2026 una guía específica para arquitecturas destinadas al desarrollo agentic.

El problema identificado es que los sistemas tradicionales pueden tener:

- ciclos de deployment largos;
- servicios demasiado acoplados;
- código difícil de comprender;
- validación dependiente del entorno cloud.

Eso limita la capacidad de un agente para:

```text
Generate
   ↓
Test
   ↓
Observe
   ↓
Modify
   ↓
Test
   ↓
Deploy
```

### Características arquitectónicas que favorecen este modelo

1. módulos claramente delimitados;
2. pruebas automatizadas;
3. feedback rápido;
4. ambientes efímeros;
5. emulación/local testing;
6. contratos claros;
7. observabilidad;
8. despliegues pequeños;
9. rollback sencillo;
10. infraestructura reproducible.

---

# 13. Proyección 2027–2030

Esta sección es una **proyección**, no una medición futura.

Se deriva de:

1. adopción actual de cloud-native;
2. crecimiento de platform engineering;
3. integración de IA en el SDLC;
4. aparición de agentes;
5. necesidad de feedback loops rápidos;
6. evolución hacia sistemas híbridos deterministas + probabilísticos.

## 13.1 Arquitecturas híbridas orientadas a agentes

Probablemente aparecerá una arquitectura recurrente similar a:

```text
                    ┌──────────────┐
                    │    User      │
                    └──────┬───────┘
                           ↓
                    ┌──────────────┐
                    │ AI Interface │
                    └──────┬───────┘
                           ↓
                    ┌──────────────┐
                    │ Agent Layer  │
                    └──────┬───────┘
                  ┌────────┼────────┐
                  ↓        ↓        ↓
                Tools    Memory    RAG
                  ↓        ↓        ↓
             ┌────┴────────┴────────┐
             │ Business Application │
             └──────────┬───────────┘
                        ↓
              Services / Events / DB
```

La IA no reemplaza necesariamente la lógica tradicional.

Se convierte en una **capa de decisión/orquestación** sobre capacidades deterministas.

---

# 14. Event-driven + Agentic

Esta combinación tiene una lógica particularmente fuerte.

Ejemplo:

```text
PaymentFailed
      ↓
 Event Bus
      ↓
 Agent
 ├── inspect customer
 ├── retrieve policy
 ├── call billing API
 └── notify user
```

El evento proporciona el trigger.

El agente determina qué acciones necesita realizar.

Las APIs y servicios existentes ejecutan las operaciones deterministas.

Esto permite combinar:

- confiabilidad del software tradicional;
- flexibilidad de agentes;
- procesamiento asíncrono.

---

# 15. Arquitecturas "AI-native"

Una aplicación AI-native no solamente añade un chatbot.

La IA participa en el flujo central:

```text
Input
 ↓
Context retrieval
 ↓
Reasoning
 ↓
Tool selection
 ↓
Execution
 ↓
Observation
 ↓
Correction
 ↓
Output
```

Esto obliga a introducir conceptos arquitectónicos nuevos:

- evaluación continua;
- trazabilidad de prompts;
- control de herramientas;
- límites de autonomía;
- políticas;
- memoria;
- seguridad;
- costos por inferencia;
- observabilidad de modelos;
- versionado de prompts/modelos;
- fallback determinista.

---

# 16. Software architecture + AI-assisted SDLC

Gartner proyectó en 2025 que para 2028 **90% de los ingenieros de software empresariales utilizarán asistentes de código con IA**, frente a menos de 14% a comienzos de 2024.

También proyectó que para 2027 al menos **55% de los equipos de ingeniería de software estarán construyendo activamente funcionalidades basadas en LLM**.

Esto sugiere un cambio en el centro de gravedad del trabajo:

```text
Antes

Developer
   ↓
Design
   ↓
Code
   ↓
Test
   ↓
Deploy


Evolución

Developer + AI Agents
        ↓
Architecture / Intent
        ↓
AI-generated changes
        ↓
Automated tests
        ↓
Evaluation
        ↓
Human review
        ↓
Deploy
        ↓
Observability
        ↓
Feedback
```

El arquitecto pasa a tener mayor importancia en:

- definir límites;
- establecer contratos;
- diseñar políticas;
- definir qué puede automatizarse;
- diseñar mecanismos de validación.

---

# 17. Arquitecturas que probablemente crecerán más entre 2027–2030

No se presenta un ranking absoluto; se agrupan por trayectoria esperada.

## A. Muy alta expansión esperada

### 1. Agentic architectures

Por la combinación de:

- maduración de LLMs;
- tool calling;
- memoria;
- RAG;
- workflows;
- automatización;
- agentes especializados.

### 2. Event-driven + agentic

Los eventos proporcionan triggers confiables y desacoplamiento; los agentes aportan decisión dinámica.

### 3. Platform-centric cloud-native architectures

Las organizaciones necesitarán que la complejidad de Kubernetes, IA, seguridad y observabilidad quede detrás de plataformas internas.

---

## B. Alta expansión esperada

### 4. Modular monolith + selective microservices

Es probable que se generalice una estrategia híbrida:

```text
              System
                 |
        ┌────────┴────────┐
        ↓                 ↓
 Modular Core       Independent Services
        |                 |
        └────── Events ───┘
```

No todo tiene que ser un microservicio.

### 5. Serverless + event-driven

Especialmente para:

- APIs;
- workflows;
- integración;
- tareas asíncronas;
- procesamiento episódico.

### 6. RAG / retrieval architectures

Continuarán evolucionando hacia:

- hybrid search;
- reranking;
- knowledge graphs;
- multimodal retrieval;
- contextual memory.

---

## C. Evolución transversal

### 7. Hexagonal / Clean / DDD

No necesariamente crecerá como "moda", pero sus principios probablemente se vuelvan más importantes porque facilitan que humanos y agentes comprendan los límites del sistema.

### 8. Observability-first architectures

Los sistemas con IA requieren observar algo más que:

- CPU;
- memoria;
- latencia.

También deberán observar:

- prompts;
- tokens;
- modelos;
- herramientas utilizadas;
- decisiones;
- retrieval;
- evaluaciones;
- costos;
- errores de agentes.

---

# 18. Arquitectura de referencia probable para 2030

Una arquitectura representativa podría ser:

```text
                         USERS
                           |
                    API / UI / Voice
                           |
                  ┌────────▼────────┐
                  │ AI Interaction  │
                  │     Layer       │
                  └────────┬────────┘
                           |
                  ┌────────▼────────┐
                  │ Agent / Workflow│
                  │     Runtime     │
                  └────────┬────────┘
             ┌─────────────┼─────────────┐
             ↓             ↓             ↓
           RAG          Memory         Policies
             |             |             |
             └─────────────┼─────────────┘
                           ↓
                  ┌────────────────┐
                  │ Tool / API Layer│
                  └───────┬────────┘
                          ↓
          ┌───────────────┼────────────────┐
          ↓               ↓                ↓
      Services          Events          Serverless
          ↓               ↓                ↓
      Databases       Event Bus         Async Jobs
          └───────────────┼────────────────┘
                          ↓
                Cloud / Kubernetes
                          |
                Internal Platform
                          |
       CI/CD + Security + Observability
```

La característica clave no es una tecnología específica.

Es la **composición de capacidades**:

**IA probabilística + lógica determinista + eventos + APIs + plataformas cloud-native + automatización del SDLC.**

---

# 19. Cadena de inferencia auditable

La proyección 2027–2030 puede reproducirse mediante estos pasos:

### Paso 1 — Medir la base actual

CNCF 2025:
- microservicios: 46%;
- API gateways: 50%.

CNCF 2026:
- 82% de usuarios de contenedores utilizan Kubernetes en producción.

**Inferencia:** cloud-native y sistemas distribuidos ya son una base importante.

### Paso 2 — Medir la transformación del SDLC

DORA 2025:
- 90% usa IA en el trabajo;
- >80% percibe productividad;
- IA también puede aumentar inestabilidad cuando faltan controles.

**Inferencia:** el problema arquitectónico pasa de solamente "producir software" a "producir y validar cambios rápidamente".

### Paso 3 — Medir la evolución de la plataforma

CNCF 2026:
- 28% tiene equipos dedicados de platform engineering;
- 35% usa plataformas híbridas para IA.

**Inferencia:** la infraestructura de IA tenderá a integrarse con las plataformas existentes.

### Paso 4 — Medir la evolución de la aplicación

Gartner:
- predice 90% de adopción de asistentes de código en ingeniería empresarial para 2028;
- predice que ≥55% de equipos desarrollarán funcionalidades LLM para 2027.

**Inferencia:** la IA dejará de ser solamente una herramienta de desarrollo y pasará a ser parte de las aplicaciones.

### Paso 5 — Analizar la arquitectura emergente

AWS 2026 documenta:

- agentes;
- herramientas;
- memoria;
- conocimiento;
- comunicación entre agentes;
- orquestación;
- observabilidad;
- seguridad.

**Inferencia:** aparece una nueva capa arquitectónica alrededor de la IA.

### Paso 6 — Combinar tendencias

Si:

```text
Cloud-native
      +
Platform Engineering
      +
AI-assisted SDLC
      +
LLM applications
      +
Agents
      +
Event-driven systems
```

entonces la arquitectura más plausible para 2027–2030 no es una única arquitectura nueva, sino una **arquitectura híbrida y composable**.

---

# 20. Conclusión

La evolución 2025–2030 puede resumirse así:

```text
2010s
Monolith
   ↓
Microservices

2020s
Microservices
   +
Cloud Native
   +
Containers
   +
Kubernetes
   +
Events

2025–2026
Cloud Native
   +
Platform Engineering
   +
RAG
   +
AI-assisted SDLC
   +
Agents

2027–2030
Deterministic Software
          +
Event-Driven Systems
          +
AI / Agents
          +
RAG / Memory
          +
Platform Engineering
          +
Continuous Evaluation
```

El cambio más importante no será que una arquitectura "mate" a las anteriores.

Será que las aplicaciones se convertirán progresivamente en **sistemas híbridos**, donde componentes deterministas y componentes probabilísticos trabajan juntos.

La arquitectura ganará importancia como mecanismo para controlar esa complejidad: límites claros, contratos, eventos, observabilidad, pruebas automatizadas, seguridad y plataformas internas serán tan importantes como la elección entre monolito, microservicios o serverless.

---

# 21. Fuentes verificables

1. **CNCF — State of Cloud Native Development Q3 2025**  
   https://www.cncf.io/wp-content/uploads/2025/11/cncf_report_stateofcloud_111025a.pdf

2. **CNCF — Annual Cloud Native Survey 2026**  
   https://www.cncf.io/reports/the-cncf-annual-cloud-native-survey/

3. **CNCF — Technology Radar Q1 2026**  
   https://www.cncf.io/reports/q1-2026-the-cncf-technology-radar-report/

4. **CNCF — Platform Engineering and AI Workflows, 2026**  
   https://www.cncf.io/announcements/2026/03/24/cncf-and-slashdata-report-finds-platform-engineering-tools-maturing-as-organizations-prepare-for-ai-driven-infrastructure/

5. **Google Cloud / DORA — 2025 State of AI-assisted Software Development**  
   https://cloud.google.com/blog/products/ai-machine-learning/announcing-the-2025-dora-report

6. **Gartner — Strategic Trends in Software Engineering for 2025 and Beyond**  
   https://www.gartner.com/en/newsroom/press-releases/2025-07-01-gartner-identifies-the-top-strategic-trends-in-software-engineering-for-2025-and-beyond

7. **AWS Architecture Blog — Architecting for agentic AI development on AWS, 2026**  
   https://aws.amazon.com/blogs/architecture/architecting-for-agentic-ai-development-on-aws/

8. **AWS Prescriptive Guidance — Agentic AI architecture in the enterprise**  
   https://docs.aws.amazon.com/prescriptive-guidance/latest/govern-architect-agentic-ai/enterprise-architecture.html

9. **InfoQ — Software Architecture and Design Trends Report 2025**  
   https://www.infoq.com/articles/architecture-trends-2025/

10. **Stack Overflow — Developer Survey 2025**  
    https://survey.stackoverflow.co/2025/

11. **Martin Fowler — Microservices**  
    https://martinfowler.com/articles/microservices.html

12. **Martin Fowler — Monolith First**  
    https://martinfowler.com/bliki/MonolithFirst.html

13. **Martin Fowler — Microservice Trade-Offs**  
    https://martinfowler.com/articles/microservice-trade-offs.html

14. **Su et al. — Emerging Trends in Software Architecture from the Practitioners Perspective: A Five Year Review, 2025**  
    https://arxiv.org/abs/2507.14554

---

## 22. Matriz de evidencia rápida

| Tendencia | Evidencia 2025–2026 | Qué permite inferir |
|---|---|---|
| Microservices | 46% backend developers en estudio CNCF | Mantienen fuerte presencia cloud-native |
| API gateways | 50% en estudio CNCF | APIs siguen siendo una capa central |
| Kubernetes | 82% de usuarios de contenedores en producción | Kubernetes está consolidado |
| Platform Engineering | 28% equipos dedicados; 35% plataformas híbridas para IA | La plataforma se vuelve parte crítica del modelo de desarrollo |
| IA en SDLC | 90% de uso reportado por DORA | El ciclo de desarrollo ya está cambiando |
| AI coding assistants | Proyección Gartner: 90% para 2028 | Aumentará la cantidad de cambios generados automáticamente |
| LLM features | Proyección Gartner: ≥55% de equipos para 2027 | IA pasa a formar parte del producto |
| RAG | Identificado como técnica común por InfoQ | Retrieval se consolida como patrón de aplicaciones LLM |
| Agentic architecture | AWS documenta arquitectura empresarial con agentes, tools, memory, knowledge y orchestration | Aparece una nueva capa arquitectónica |
| Fast feedback loops | DORA + AWS | Arquitecturas deberán facilitar validación rápida y segura |

