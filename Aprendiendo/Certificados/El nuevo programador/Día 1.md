[Link de YouTube][https://www.youtube.com/live/qHYi92zRn-s]

Fundamentos de software + IA = Profesional en 2026

Tener buenos fundamentos generan **CRITERIO**, que es lo importante actualmente.

## En la clase de hoy

### 01 - Fundamentos de la IA

- Modelos LLM
- Herramientas
- Prompting
### 02 - Harness

- Contexto
- Reglas
- Plan
- La IA es deterministica

---

## LLM

Es un modelo de IA entrenado con mucha información de texto para aprender patrones del lenguaje y genera respuestas mediante probabilidad (inferencia)

### Cómo funciona

1. Recibe el mensaje
2. Lo procesa en fragmentos llamados tokens
3. Calcula qué token podría venir a continuación, elige uno y repite el proceso hasta completar la respuesta
### Fundamentos
- **Parámetros:** valores internos aprendidos
- **Tokens:** Unidades en las que se procesa la info
- **Temperatura:** Ajuste al seleccionar tokens
- **Contexto:** límite de tokens que maneja (cuando llega al límite es cuando comienza a alucinar)
- **Multimodalidad:** Capacidad de procesamiento
- **Razonamiento:** Resolución de problemas en pasos
- **Alucinaciones:** Info incorrecta o inventada
- **Latencia:** Tiempo de espera de la respuesta
### Independent analysis of AI

En esta página hay un ranking de IA con sus parámetros y así poder decidir los mejores agentes para cada tarea
www.artificialanalysis.ai

Acá tiene más estadísticas de los agentes
www.llm-stats.com

### Herramientas

- Claude Code
- OpenCode
- Warp
- Codex
- ChatGPT
  GitHub Copilot
- Cursor
- Antigravity

## Prompt engineering (clásico)

1. **Rol** (quién soy?)
2. **Contexto** (dónde estamos?)
3. **Tarea exacta**

---

## Agentes

Es un sistema que usa un modelo para realizar tareas orientadas a un objetivo, encadenando decisiones y acciones.

**El bucle del agente**
```
Entiende > Planifica > Actúa > Evalúa > Ajusta

(Repite)
```

**Diferencias entre Chat y Agente**

| Chat                  | Agente               |
| --------------------- | -------------------- |
| Pregunta -> Respuesta | Bucle autónomo       |
| Sin acceso al sistema | Lee/escribe archivos |
| Un solo turno         | Ejecuta y verifica   |
| Requiere copy-paste   | Itera                |

---

## OpenCode

Es un agente de código de IA de código abierto. Está disponible en terminal, aplicación de escritorio o extensión de IDE. Es la alternativa a Claude Code.

[Web Oficial][https://opencode.ai]
[Repositorio Oficial][https://github.com/anomalyco/opencode]
[OpenCode Zen:][https://opencode.ai/es/zen]
[OpenCode Go][https://opencode.ai/es/go]

**Instalación**
- [Descarga e instalación][https://opencode.ai/es/download]
- [Documentación oficial][https://opencode.ai/docs]
- Inicar OpenCode: desde la terminal escribir el comando `opencode`

**Comandos y atajos más utilizados**
- opencode web → Abre una interfaz web en local para usar en lugar de la terminal
- /help → Guía de referencia rápida y catálogo de funciones
- /connect → Selecciona los proveedores de IA a utilizar 
- /models → Selecciona los modelos a utilizar en cada proveedor de IA
- /init → Analiza el proyecto y genera automáticamente el archivo agents.md
- /agents o TAB → Cambia entre modo Build y Plan 
- /status → Ver el estado de la sesión 
- /new → Abre un nuevo chat 
- /session → Lista las sesiones de chat 
- /compact → Compacta la sesión 
- /undo → Deshace un mensaje 
- /redo → Rehace un mensaje
- /diff → Muestra los cambios en un archivo de código luego de la última ejecución
- exit → Cierra la sesión actual
- CTRL + P → Muestra en detalle todos los comandos de OpenCode
- CTRL + T → Cambia el nivel de esfuerzo del modelo de IA elegido
- @ → Referencia a ficheros, carpetas, skills, etc.
- ! → Modo Shell (ejecuta comandos de terminal sin salir de OpenCode)

---

## Context engineering

**Arnés (harness):** el sistema que rodea al modelo y le permite actuar como agente (gestiona contexto, herramientas y ejecución de tareas)

**Guardarraíles:** reglas y controles que limitan sus acciones y validan sus resultados (permisos, aprobaciones y comprobaciones de seguridad)

**Contexto:** es la información que tiene disponible para realizar una tarea (instrucciones, conversación, archivos, documentación y resultados de herramientas)

> La ingeniería de contexto consiste en seleccionar, organizar y actualizar esa información para que el agente reciba lo relevante en cada momento.

### AGENTS.md

Es un archivo con instrucciones para orientar a los agentes sobre cómo trabajar en un proyecto. Por defecto, los agentes leerán este fichero de instrucciones. Como recomendación, el contenido del archivo no debe exceder de 30 o 40 líneas y contener la información principal del proyecto.

**Qué debe incluir**
- Stack tecnológico
- Convenciones de código
- Patrones
- Prohibiciones
- Estructuras del proyecto
- Flujo de trabajo
- Testing, CI/CD
- Estilo de commits y PRs

### Reglas, Memoria y Documentación

Archivos adicionales a AGENTS.md, con ifnormación que explica el proyecto y establece convenciones, límites y criterios que deben seguirse.

Dado que la memoria de un agente es limitada, una buena práctica es crear un fichero de Memoria.

**Ejemplo de MEMORY.md**

```
# MEMORY.md — Diario de Estudio
Memoria del proyecto entre sesiones. Máximo ~50 líneas: resume o elimina lo que ya no
aporte.

## Estado actual
- v1 funcionando: registrar sesiones (fecha, tema, minutos), racha actual y lista de
sesiones.
- Datos en localStorage.

## Decisiones (y por qué)
- Sin backend ni dependencias: cualquiera debe poder abrirlo con doble clic.
- Fecha editable en el formulario: permite registrar días pasados y ver la racha crecer.

## Aprendizajes y errores a evitar
- (vacío por ahora)

## Próximos pasos
- (vacío por ahora) 
```

Para que el agente utilice este archivo de memoria se agrega en `AGENTS.md` una nueva sección:

```
## Memoria
- Al empezar, lee `MEMORY.md` para conocer el estado del proyecto y las decisiones
tomadas.
- Al terminar una tarea, actualízalo: estado actual, decisiones importantes (con su
porqué) y errores a evitar.
- Mantenlo breve (máximo ~50 líneas): resume o elimina lo que ya no aporte.
- Si algo se convierte en una regla permanente, propón moverlo a `AGENTS.md` en lugar de
dejarlo en la memoria.
- No guardes nunca datos sensibles (claves, tokens, datos personales). 
```

En la sección de "Límites" se agrega:

```
✅ Siempre: actualizar `MEMORY.md` al terminar cada tarea. 
```

## Modos del agente

### Modo Plan

Permite al agente analizar una tarea, consultar el proyecto y proponer los pasos antes de ejecutarlos.

Sirve para aclarar requisitos, detectar riesgos y revisar el enfoque contigo antes de escribir nuevo código o modificar el código existente.

> Shift + TAB alterna entre el modo Build y Plan

| Cuando usarlo             | Cuando no usarlo    |
| ------------------------- | ------------------- |
| Tareas grandes            | Tareas pequeñas     |
| Refactors                 | Correcciones obvias |
| Supervisión de estrategia | Prototipado rápido  |