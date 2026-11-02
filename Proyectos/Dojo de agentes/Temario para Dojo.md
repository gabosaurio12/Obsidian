## **Día 1: Fundamentos y Harness Engineering**

- **01 - Fundamentos de la Inteligencia Artificial**
    - ¿Qué es un LLM y cómo funciona?
    - Fundamentos clave de los LLM
    - Tipos de modelos, utilización y herramientas
    - Prompt engineering (clásico vs. 2026)
    - Vibe coding vs. Ingeniería de software
- **02 - Harness engineering (arneses y guardarraíles)**
    - ¿Qué es un Agente?
    - OpenCode
    - Context engineering
    - AGENTS.md
    - Reglas, Memoria y Documentación
    - Modo Plan (Agente)

---

## **Día 2: Harness Avanzado y Spec-Driven Development**

- **03 - Harness engineering avanzado**
    - Comandos personalizados
    - Agent Skills
    - MCP (Model Context Protocol)
- **04 - Spec-Driven Development (SDD)**
    - ¿Qué es y Taxonomía SDD?
    - EARS (Easy Approach to Requirements Syntax)
    - Estructura y flujo de SDD paso a paso (Constitución, Especificación, Clarificación, Planificación, Tareas, Implementación y Validación)
    - Automatización de SDD mediante Skills y Comandos

---

## **Día 3: Sistemas Multiagente y Orquestación**

- **05 - Multiagentes y subagentes**
    - Agentes y Subagentes
    - Agentes por defecto en OpenCode
    - Sistemas multiagentes y flujo multiagente
    - Estructura y utilización del sistema multiagente
    - Loop engineering

## Requisitos

### OpenCode

Se recomienda instalar **OpenCode Terminal** porque es más estable.

**Links:**

- [Descarga e instalación](https://opencode.ai/es/download)
- [Documentación oficial](https://opencode.ai/docs)

**Si utilizan Windows:**

Deberán tener instalado **WSL** para usar **OpenCode Terminal** ([Instalación de WSL](https://learn.microsoft.com/es-es/windows/wsl/install)), con este comando se puede instalar ubuntu:

```powershell
wsl --install
```

Si no se desea instalar **WSL** pueden utilizar **OpenCode Desktop** pero aún está un poco insestable, aunque no debería presentar problemas durante el dojo.

**Proveedores de LLM:**

Si están pagando actualmente alguno de los planes de LLMs como **ChatGPT**, **Claude** o **Gemini** y quieren utilizar esos modelos en **OpenCode** deberán obtener la API KEY, pueden utilizar este prompt para que los guíe:

```
Hola, donde puedo conseguir una API KEY tuya para conectarte a OpenCode o cómo puedo conectar mi plan de pago actual (con mi cuenta) a OpenCode?
```

### Entorno de desarrollo y ejecución

- Terminal o línea de comandos para ejecutar **OpenCode**, usar comandos en modo shell y gestionar el proyecto
- **Git** instalado para el control de versiones y para habilitar operaciones de auditoría o revisión con subagentes y herramientas **MCP** de **GitHub**
- Navegador web como **Firefox** o **Chrome** 
- Editor de código como **VisualCode** o **Cursor**

### Conocimientos previos

- **Manejo de Markdown**: Los asistentes escribirán y modificarán constantemente archivos en Markdown, ya que se usa para:
	- La configuración del arnés y memoria (`AGENTS.md`, `MEMORY.md`)
	- Creación de comandos personalizados (`.opencode/commands/*.md`) y Agent Skills (`SKILL.md`)
	- La documentación de Spec-Driven Development (`constitution.md`, `spec.md`, `plan.md`, `tasks.md`)
- **Fundamentos de Ingeniería de Software**: Conocimiento de desarrollo básico (el enfoque dependerá de el proyecto que se enseñará: web, de escritorio, etc) y criterios de arquitectura, ya que la premisa es dirigir y supervisar a la IA en lugar de hacer "vibe coding