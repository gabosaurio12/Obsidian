## Prompt inicial para crear aplicación

```
## Rol 
Actúa como desarrollador frontend senior que escribe código simple, claro y fácil de entender para alguien que está empezando a programar. 

## Contexto
Quiero crear desde cero "Diario de Estudio", una web para registrar mis sesiones de estudio y motivarme viendo mi racha de días seguidos estudiando. Esta es la primera versión y tiene que ser muy simple. La web se construirá poco a poco, así que ahora solo necesito una base limpia que funcione a la primera.

## Tarea
Crea la web con estas funcionalidades:
1. Un formulario para registrar una sesión con: - Fecha (por defecto hoy, pero editable para poder apuntar días anteriores) - Tema (texto, obligatorio) - Minutos (número mayor que 0, obligatorio)
2. La racha actual en grande, con un 🔥.
3. La lista de sesiones, de la más reciente a la más antigua. 
4. Los datos guardados en localStorage para que no se pierdan al recargar. 

## Restricciones y reglas
Racha:
- Un día cuenta si tiene al menos una sesión.
- La racha son los días consecutivos con sesión que terminan hoy.
- Si hoy todavía no he estudiado pero ayer sí, la racha sigue viva: no se rompe hasta que termina el día.
- Usa siempre la fecha local del usuario, nunca UTC. 
Técnicas:
- HTML, CSS y JavaScript, sin frameworks, sin librerías y sin compilar nada. 
- Solo tres archivos: index.html, styles.css y app.js. 
- Tiene que funcionar abriendo index.html con doble clic, sin servidor ni instalación. 
- No añadas nada que no aparezca en este mensaje. 
- Diseño limpio y moderno, que se vea bien en el móvil. 
- Todos los textos de la interfaz en español. 

## Formato de salida 
1. Crea los tres archivos directamente en la carpeta del proyecto. 
2. Al terminar, responde con: 
	- Un resumen de 3-4 líneas de lo que has creado.
	- Los pasos para probarlo. 
	- Cualquier decisión que hayas tomado por tu cuenta y que yo deba revisar.
```

## Comparación de AGENTS.md

**AGENTS.md generado por OpenCode de Maure**

```
# AGENTS.md — Diario de Estudio
  
Web estática para registrar sesiones de estudio y motivarse viendo la racha de días seguidos. Proyecto didáctico: el código debe poder entenderlo alguien que empieza a programar.

## Stack y estructura
- HTML, CSS y JavaScript puros: sin frameworks, librerías, npm, bundler ni build.
- `index.html` (estructura), `styles.css` (estilos), `app.js` (lógica y datos).
- Debe funcionar abriendo `index.html` con doble clic (`file://`): nada de módulos ES (`type="module"`), `fetch` a archivos locales ni nada que requiera servidor.

## Convenciones
- Textos de la interfaz en español.
- Código simple, nombres descriptivos y comentarios solo donde aporten.
- Diseño limpio y responsive; cualquier pantalla nueva debe verse bien en el móvil.

## Datos
- localStorage, clave `diario-estudio-sesiones`: array de `{ date: "AAAA-MM-DD", topic, minutes }`.
- Si cambias la forma de los datos, mantén compatibilidad con lo ya guardado o el usuario perderá sus sesiones.
  
## Fechas y racha (fácil equivocarse)
- Trabaja siempre con la fecha local del usuario. Nunca uses `toISOString()` ni `new Date("AAAA-MM-DD")`: se interpretan en UTC y desplazan el día.
- Racha = días consecutivos con al menos 1 sesión que terminan hoy. Si hoy no hay sesión pero ayer sí, la racha sigue viva y se cuenta desde ayer.
- Varias sesiones el mismo día cuentan como un solo día. Las fechas futuras no suman.

## Forma de trabajar
- Haz solo lo que se pide: no añadas funcionalidades por tu cuenta.
- Cambios pequeños y enfocados; no reescribas lo que ya funciona.
- Al terminar, resume qué has cambiado y cualquier decisión que deba revisar.

## Límites
- ✅ Siempre: respetar las reglas de fechas y racha, mantener los textos en español.
- ⚠️ Pregunta antes: crear archivos nuevos, cambiar el formato de los datos guardados.
- 🚫 Nunca: añadir dependencias, frameworks o un paso de build.

## Verificación
- No hay tests ni lint. Probar abriendo `index.html` en el navegador.
- Para empezar de cero: DevTools → Application → Local Storage → borrar la clave `diario-estudio-sesiones`.

## Memoria
- Al empezar, lee `MEMORY.md` para conocer el estado del proyecto y las decisiones tomadas.
- Al terminar una tarea, actualízalo: estado actual, decisiones importantes (con su porqué) y errores a evitar.
- Mantenlo breve (máximo ~50 líneas): resume o elimina lo que ya no aporte.
- Si algo se convierte en una regla permanente, propón moverlo a `AGENTS.md` en lugar de dejarlo en la memoria.
- No guardes nunca datos sensibles (claves, tokens, datos personales).
```

**AGENTS.md generado en mi OpenCode utilizando BigPickle:**
```
# AGENTS.md — Diario de Estudio

Web estática para registrar sesiones de estudio y motivarse con la racha de días seguidos.

Proyecto didáctico: el código debe poder entenderlo alguien que empieza a programar.

## Estructura
- Solo tres archivos: `index.html` (estructura), `styles.css` (estilos), `app.js` (lógica).
- Sin frameworks, librerías, CDN, npm ni bundler. Nunca añadir un paso de build.
- Debe funcionar con `file://` (doble clic). Nada de `type="module"`, `fetch` a archivos locales ni nada que requiera servidor.
- `app.js` se carga con `<script src="app.js">` al final de `<body>`: por eso puede leer el DOM directamente arriba. Si lo mueves a `<head>` o lo pasas a módulo, `getElementById` devuelve `null` y hay que envolverlo en `DOMContentLoaded`.
- No es un repo git, no hay `package.json`, ni tests, ni lint, ni CI. No inventes comandos que no existan.

## Verificación (no hay tests: esto es todo lo que hay)
- Abre `index.html` en el navegador y Pruébalo. El navegador de las herramientas **no acepta URLs `file://`**: usa `browser.preview` con la ruta del archivo, o levanta un `python3 -m http.server 8931` temporal y ábrelo por `localhost` (mata el proceso al terminar).
- `node --check app.js` para la sintaxis.
- Para probar la lógica de fechas/racha sin navegador: la parte de arriba de `app.js` (hasta el marcador `// --- Pintar la página ---`) no toca el DOM, así que se puede `eval`ar en Node y llamar a `calcularRacha()` / `aISO()` / `diaAnterior()` con fechas fijas. Cubre casos como "hoy sin sesión pero ayer sí", huecos, futuro y varias sesiones el mismo día.

## Datos
- localStorage, clave `diario-estudio-sesiones`: array de `{ date: "AAAA-MM-DD", topic, minutes }`.
- Si cambias la forma de los datos, mantén compatibilidad con lo ya guardado o el usuario
perderá sus sesiones.
- Para empezar de cero: DevTools → Application → Local Storage → borrar esa clave.
- El texto del tema lo escribe el usuario: siempre `textContent`, nunca `innerHTML`.

## Fechas y racha (fácil equivocarse)
- Trabaja siempre con la fecha local. Nunca uses `toISOString()` ni `new Date("AAAA-MM-DD")`: se interpretan en UTC y desplazan el día. `aFecha(iso)` usa `new Date(anio, mes-1, dia, 12)` a propósito (el mediodía evita el salto de día por zona horaria); no lo cambies sin motivo.
- Racha = días consecutivos con al menos 1 sesión que terminan hoy. Si hoy no hay sesión pero ayer sí, la racha sigue viva y se cuenta desde ayer: no se rompe hasta que termina el día.
- Varias sesiones el mismo día cuentan como un solo día. Las fechas futuras no suman (pero sí se pueden guardar: el input de fecha no lleva `max` a propósito).

## Convenciones
- Textos de la interfaz y comentarios en español.
- Código simple, nombres descriptivos, comentarios solo donde aporten. Cambios pequeños; no reescribas lo que ya funciona ni añadas funcionalidades que no se pidan.
- Responsive de verdad: los inputs usan `font-size: 1rem` (16px) para que iOS no haga zoom al escribir. Cualquier pantalla nueva debe verse bien en móvil.

## Memoria
- Lee `MEMORY.md` al empezar: contiene el estado y las decisiones de la versión actual.
- Actualízalo al terminar (estado, decisiones con su porqué, errores a evitar, máx. ~50 líneas).
Si algo se convierte en regla permanente, muévelo a este archivo en lugar de dejarlo ahí.
- No guardes datos sensibles (claves, tokens, datos personales).
```


## Archivo MEMORY

**Ejemplo de Maure**

```
# MEMORY.md
— Diario de Estudio Memoria del proyecto entre sesiones. Máximo ~50 líneas: resume o elimina lo que ya no aporte.

## Estado actual
- v1 funcionando: registrar sesiones (fecha, tema, minutos), racha actual y lista de sesiones.
- Datos en localStorage.

## Decisiones (y por qué)
- Sin backend ni dependencias: cualquiera debe poder abrirlo con doble clic.
- Fecha editable en el formulario: permite registrar días pasados y ver la racha crecer.

## Aprendizajes y errores a evitar
- (vacío por ahora)

## Próximos pasos
- (vacío por ahora)
```

Cuando usemos un **MEMORY.md** es importante agregar al **AGENTS.md** lo siguiente:

```
## Memoria
- Al empezar, lee `MEMORY.md` para conocer el estado del proyecto y las decisiones tomadas.
- Al terminar una tarea, actualízalo: estado actual, decisiones importantes (con su porqué) y errores a evitar. 
- Mantenlo breve (máximo ~50 líneas): resume o elimina lo que ya no aporte. 
- Si algo se convierte en una regla permanente, propón moverlo a `AGENTS.md` en lugar de dejarlo en la memoria. 
- No guardes nunca datos sensibles (claves, tokens, datos personales).
```

Y en la sección de límites:

```
✅ Siempre: actualizar `MEMORY.md` al terminar cada tarea.
```

**Prompt de ejemplo para utilizar el modo plan:**

```
Quiero añadir la "mejor racha": la racha más larga que he conseguido nunca, mostrada junto a la racha actual.

Antes de escribir código, prepárame un plan con:
1. Cómo vas a calcular la mejor racha a partir de las sesiones guardadas, respetando las reglas de fechas y racha de AGENTS.md.
2. Qué archivos vas a modificar y qué cambia en cada uno.
3. Los casos límite y las dudas que debo decidir yo antes de empezar.
4. Qué actualizarías en AGENTS.md y en MEMORY.md.
```

