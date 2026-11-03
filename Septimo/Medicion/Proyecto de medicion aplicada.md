## Linux
### Repositorio

> https://github.com/torvalds/linux
### Atributos

- Commits mensuales
- Creaciones de ramas
- Líneas de código

> Todas las medidas fueron tomadas el 27 de agosto del 2026
> En la versión 7.2.1 (Baby Opossum Posse)
### Commits Mensuales

El kernel de Linux solo en agosto ha tenido 2,903 commits.

**Herramienta usada:** https://github.com/torvalds/linux/graphs/commit-activity
### Creaciones de ramas

En el último año solo se creó una rama:

> x86-64/arm64/powerpc: clean up and rename __copy_from_user_flushcache

**Herramienta usada:** https://github.com/torvalds/linux/activity?activity_type=branch_creation&time_period=year
### Líneas de código

El kernel de Linux supera las 30 millones líneas de código actualmente, se dividen en:
- Drivers
- Código base y arquitectura
- Crecimiento
	- Cada dos meses aumentan aproximadamente 200,000 líneas

|Tipo|Líneas de código|
|---|--:|
|C|19,622,714|
|C/C++ Headers|8,400,023|
|Rust|114,481|
|Assembly|230,041|
|Shell|159,492|
|Python, YAML, JSON, etc.|~1.98 M|
|**Total**|**30,519,022 líneas**|
**Herramienta usada:** cloc (solicitado a ChatGPT, el repo de Linux pesa aproximadamente 3GB). Cloc es una herramienta de terminal que cuenta las líneas de código y las separa por lenguaje, comentarios, etc. Y hace un resumen.

<div class="page-break" style="page-break-before: always;"></div>

## Validez y reproducibilidad de las mediciones

### Commits mensuales

El número de commits suele ser una buena forma de medir el tiempo y esfuerzos para llevar a cabo una actividad porque podemos ver cuanto se tardó en desarrollar y saber si se tuvieron que resolver conflictos.

Es reproducible porque GitHub almacena esos datos, entonces si se consulta la misma fecha saldrán los mismos datos.
### Creaciones de ramas

Usualmente se crean ramas para hacer parches o agregar funcionalidades, por lo que es una buena forma de saber cuanto se tardan en construir nuevas funcionalidad o parches (fixes) ya que  dependiendo del estándar de control de versiones que tenga el proyecto son los criterios para crear una rama.

GitHub almacena estos datos, por lo que si se consultan en la misma fecha saldrán los mismos datos.
### Líneas de código

No son la mejor métrica porque cantidad ≠ calidad, pero es una buena métrica pero puede ser una métrica útil para predecir o estimar el crecimiento de un proyecto.

Es reproducible siempre y cuando se utilice la herramienta con la misma versión que se midió.