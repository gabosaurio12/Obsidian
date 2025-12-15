## Propósito
### Qué tipo de problema arquitectónico es el que resuelve

### Necesidades que atiende

### Atributos de calidad que atiende

### En qué contextos o dominios se aplica mejor el estilo
Se usa cuado sistemas procesan flujos de datos continuos, donde cada etapa transforma o analiza la información antes de pasarla a la siguiente.

**Cuándo aplicarlo:**
- Cuando el sistema debe procesar datos en pasos secuenciales
- Cuando se busca reutilizar o reordenar etapas fácilmente
- Cuando se puede dividr procesos en tareas pequeñas, independientes y repetitivas
- Para procesamientos en línea o por lotes, compiladores o análisis de datos
**Cuando no aplicarlo:**
- Cuando componentes necesitan comunicarse bidireccionalmente
- Cuando el flujo de trabajo no es lineal
- Cuando se comparte un estado global
## Estructura y comportamiento
### Estructura y comportamietno dinámica de ese estilo

### Componentes
- Filters (Filtros): Son unidades de procesamiento
- Pump
### Conectores
- Pipes (Tuberías): Conectan los filtros y transportan datos entre ellos
- Sink (Sumider): Es el elemento de salida del proceso

### Flujo de información y control entre esos componentes

### Restricciones que impone ese estilo arquitectónico
- Mensajes síncronos y asíncronos
- Manejo de errores
- Responsabilidad única a filtros
## Impacto en los atributos de calidad
### Atributos que favorece
- Modularidad: Fácil agregar, quitar o reemplazar filtros
- Disponibilidad
- Seguridad: Implementación dedicados al pipeline
- Rendimiento
	- Monolítico (en memoria): Alto rendimiento
	- Distribuido (por red): Rendimiento afectado
- Mantenibilidad: Cambios locasles
- Paralelismo posible
- Reusabilidad
- Integrabilidad
- Prototipado rápido
### Atributos que debilita

### Tácticas o decisiones de diseño que suelen acompañar a esos estilos arquitectónicos para equilibrar esos atributos

## Ejemplos reales de esos estilos
### Sistemas
- UNIX: comandos encadenados (cat | sort | uniq |wc)
	- Scripts bash
- Compiladores:
- ETL (Extract-Transform-Load)
- AWS
- Apache Kafka
- C/C++
### Frameworks
- Apache NiFi: Automiza flujos de datos con pipelines
- Apache Flink: Procesamiento de streams distribuido
- Apache Storm
- ASP.NET Core Middleware: Actúan como filtros para solicitudes HTTP
- Express.js Middleware: Middleware modular para node.js
### Productos utilizan ese estilo arquitectónico

### Evidencia de la efectidad del estilo

## Variantes y combinaciones de ese estilo arquitectónico
### Hexagonal y Clean Arquitecture
