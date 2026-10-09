[Link de YouTube][https://www.youtube.com/live/hzQNE092cW0]

## Harness engineering avanzado

### Custom commands

Es un prompt reutilizable que se ejecuta escribiendo `/<nombre comando>`.

Son útiles para cuando repetimos mucho un prompt, nos permite crear una función reutilizable (*/función*).

#### Creación
1. Crea un archivo Markdown en `.opencode/commands/`
2. Añade una descripción y las instrucciones
3. Reinicia **OpenCode** (`/restar` o `/exit`) y ejecuta el comando creado

[Documentación de commands de OpenCode][https://opencode.ai/v2/docs/commands/]

Cada command debe tener su archivo markdown, por ejemplo *feature.md*:

```
---
description: Planifica una nueva funcionalidad antes de crear código
agent: plan
---

Quiero añadir esta funcionalidad: $ARGUMENTS

Antes de esscribir código, prepárame un plan con:
1. Cómo la vas a implementar, representando las reglas de AGENTS.md.
2. Qué archivos vas a modificar y qué cambia en cada uno.
3. Los casos límites y las dudas que debo decidir yo antes de empezar.
4. Qué actualizarías en AGENTS.md y en MEMORY.md.

Ten en cuenta el estado actual del proyecto: @MEMORY.md

No modifiques ningun archivo hasta que apruebe el plan.
```

**Uso del comando**

`/ feature mostrar el total de minutos estudiados esta semana`

### Agent Skills

Las *agent skills* son un conjunto de de instrucciones reutilizables que enseñan al agente como realizar una tarea concreta. El agente puede cargar las instrucciones completas cuando las necesita (o utilizando */* o *@*).

La diferencia entre una *skill* y un *command* es que los comandos nunca son ejecutados por el agente por iniciativa propia.

#### Creación
1. Crea un archivo .md en `.opencode(o agents)/skills/nombre_skill/`
2. Añade un archivo `SKILL.md` con instrucciones
3. Reinicia **OpenCode** y ejecuta el comando `/skills` para ver los skills instalados

[Documentación de Agent Skills][https://agentskills.io]

[Documentación de skills de OpenCode][https://opencode.ai/v2/docs/skills]

**Ejemplo de skill de manejo de fechas (`.agents/skills/local-dates/SKILL.md`):**

```
---
name: local-dates
description: Úsala siempre que escribas, modifiques o revises código que trabaje con fechas, días, semans o rachas en el StudyDiary.
---

# Fechas locales en el StudyDiary

Las fechas son la mayor fuente de bugs de este proyecto. Sigue esta guía siempre que toques código con fechas.

## Reglas
- Las fechas se guardan como texto "AAAA-MM-DD" en la zona horaria local del usuario.
- Para obtener el día de hoy, construye el texto con getFullYear(), getMonth() + 1 y getDate(), rellenando con ceros.
- Para convertir "AAAA-MM-DD" en fecha, usa new Date(año, mes - 1, día). Nunca new Date("AAAA-MM-DD"): se interpreta en UTC.
- Nunca uses toISOString() para obtener el día: devuelve la fecha en UTC.
- Para sumar o restar días usa setDate(getDate() ± n), nunca milisegundos (24 h no siempre es un día por los cambios de hora).
- Reutiliza las funciones de fechas que ya existan en app.js antes de crear otras nuevas.

## Checklist de revisión
- [ ] ¿Algún toISOString() o new Date("AAAA-MM-DD")?
- [ ] ¿Algún cálculo con 86400000 milisegundos?
- [ ] ¿Qué pasa con una sesión registrada a las 00:30?
- [ ] ¿Se ignoran las fechas futuras donde corresponde?

## Al terminar
Indica qué puntos del checklist has comprobado y cómo.
```

**Uso de la skill**
`/feature mostrar cuántos días he estudiado este mes. ¿Vas a utilizar alguna skill?`

#### Skills de terceros

Utilizar plataformas como [skills.sh][https://www.skills.sh/], podemos dotar al agente de habilidades específicas de forma modular. Esto mantiene el contexto principal limpio. Para instalar skills en nuestro agente, debemos instalar el paquete [agent-skills][https://www.skills.sh/docs]

```
npx skills add vercel-labs/agent-skills
```

Una vez instalado podremos instalar skills de la misma web, como **frontend-design** (https://www.skills.sh/anthropics/skills/frontend-design)

```
npx skills add https://github.com/anthropics/skills --skill frontend-design
```

Durante la instalación se pueden elegir los agentes para los cuales se instalará la skill y el alcance (global o nivel proyecto).

**Ejemplo de uso de skill frontend-design**

```
@frontend-design con lo que sabes mejora el diseño de la web
```

### Skills básicas y útiles
- [find-skills (Vercel)][https://www.skills.sh/vercel-labs/skills/find-skills]: busca e instala skills del ecosistema cuando necesitas una capacidad nueva
- [grill-me (Matt Pocock)][https://www.skills.sh/mattpocock/skills/grill-me]: te hace preguntas sobre tu plan hasta cubrir todos los casos antes de implementar
- [frontend-design (Anthropic)][https://www.skills.sh/anthropics/skills/frontend-design]: crea interfaces con un diseño cuidado y profesional
- [web-design-guidelines (Vercel)][https://www.skills.sh/vercel-labs/agent-skills/web-design-guidelines]: revisa la interfaz y detecta problemas de accesibilidad, UX y diseño
- [systematic-debugging (Jesse Vincent / obra)][https://www.skills.sh/obra/superpowers/systematic-debugging]: depura con método: reproducir, aislar, formular hipótesis y verificar

---

## MCP (Model Context Protocol)

Es un protocolo que permite conectar al agente con herramientas y datos externos.
Un servidor MCP proporciona esas capacidades: consultar documentación, acceder a servicios.

**Ventajas:**
- Estándar abierto
- Reutilizable entre IDEs
- Seguridad por diseño
- Ecosistema creciente

![[Aprendiendo/Certificados/El nuevo programador/imgs/image.png]]
https://modelcontextprotocol.io

### Creación
1. Crea o edita opencode.json en la raíz del proyecto
2. Añade la configuración del servidor mcp que quieres agregar
3. Reinicia **OpenCode** y ejecuta el comando `/mcps` para ver los MCPs instalados. Se pueden activar o desactivar.

[Documentación oficial sobre MCP de OpenCode][https://opencode.ai/v2/docs/mcp-servers]

Directorio de MCPs:
- https://registry.modelcontextprotocol.io
- https://mcp.directory
- https://mcpservers.org/es

### MCPs esenciales

[Chrome DevTools (Google)] - El agente abre tu web en el navegador, la prueba, lee la consola y hace capturas.

[Context7 (Upstash)] - Le da al agente la documentación actualizada de cualquier biblioteca o framework.

[GitHub (GitHub)] - Gestiona repositorios, issues y pull requests desde el agente.

[Figma (Figma)] - Convierte diseño de Figma en código usando el contexto real del diseño.

[Supabase (Supabase)] - Crea y consulta bases de datos directamente desde el agente.

**Instalar Chrome DevTools y Context7 en el StudyDiary en opencode.json**

```
{
	"$schema": "https://opencode.ai/config.json",
	"mcp": {
		"chrome-devtools": {
		"type": "local",
		"command": [
			"npx",
			"-y",
			"chrome-devtools-mcp@latest",
			 "--no-usage-statistics"
		]
		},
		"context7": {
			"type": "remote",
			"url": "https://mcp.context7.com/mcp",
			"headers": {
				"CONTEXT7_API_KEY": "<TU APIKEY DE CONTEXT7>"
			}
		}
	 }
}
```

**Uso del MCP de Chrome DevTools mediante prompt**
```
Usa Chrome DevTools para probar el StudyDiary:
1. Abre index.html en Chrome.
2. Registra tres sesiones: hoy, ayer y anteayer.
3. Comprueba que la racha muestra 3 y que la mejor racha es correcta.
4. Revisa la consola por si hay errores.
5. Haz una captura en tamaño móvil (375 px de ancho).
   
Dime qué has comprobado y si has encontrado algún problema. 
```

---

## Spec-Driven Development (SDD)

Es una forma de desarrollar software en la que primero defines qué debe hacer el sistema, sus requisitos, límites y criterios de aceptación y utilizas esa especificación para guiar la implementación y comprobar el resultado.

**Flujo de desarrollo clásico**
```
Análisis > Diseño > Implementación > Validación > Despliegue/Mantenimiento
(Repite)
```

**Flujo de desarrollo con SDD**

```
Especificación > Planificación > Implementación > Validación > Despliegue/Mantenimiento
(Repite)
```

### Taxonomía SDD

- **Spec-first:** escribes la especificación, generas el código una vez, y a partir de ahí editas el código directamente. La especificación fue el punto de partida y muere.
- **Spec-anchored:** la spec se mantiene viva: conservas y actualizas la especificación para guiar la evolución del código. Es el más recomendable para empezar.
- **Spec-as-source:** editas únicamente la especificación y el código se genera a partir de ella y no se modifica manualmente.

**EARS (Easy Approach to Requirements Syntax):** Es una forma de escribir requisitos con plantillas fijas para que no sean ambiguos.

**Estructura SDD**
```
project/
├── .opencode/,.agents/...
├── AGENTS.md, MEMORY.md
├── docs/
│ └── constitution.md
├── specs/
│ └── 001-nombre-spec/
│ │ ├── spec.md
│ │ ├── plan.md
│ │ └── tasks.md
│ └── 002-nombre-spec/...
│ └── 003-nombre-spec/...
├── tests/
└── <CÓDIGO DEL PROYECTO> 
```

### SDD paso a paso

- **Paso 1:** Constitución (una vez por proyecto - consititution.md)
- **Paso 2:** Especificación (spec.md)
- **Paso 3:** Clarificación
- **Paso 4:** Planificación (plan.md)
- **Paso 5:** Tareas (tasks.md)
- **Paso 6:** Implementación
- **Paso 7:** Validación
- **Loop al paso 2:** Mantenimiento