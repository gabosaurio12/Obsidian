# AGENTS.md — MasterMind
Es un videojuego basado en el juego de mesa MasterMind, va enfocado a personas que quieran divertirse un rato con amigos. Es un proyecto escolar. Tiene como objetivo ser un proyecto completo, seguro y de muy alta calidad.

## Stack y estructura
- C#
- .NET Framework 4.7.2.
- Entity Framework 6.5.2.
- Microsoft SQL Server.
- WPF.
- WCF.
- TempData/ es una carpeta con servicios temporales que terminará pasándose al servidor backend.

## Comandos
- Compilar con dotnet build para verificar que no haya errores.
- Correr las pruebas de la solución MasterMind_Client.Tests.

## Convenciones
- Seguir el estándar de código: coding_standard.md, no debe haber ninguna violación de código.

## Reglas de dominio / trampas conocidas
- Debes limitarte a las versiones de stack declaradas en el documento.
- Prioriza el uso de patrones de diseño o soluciones previamente probadas y que sean una buena práctica.
- El código final que generes deberá ser código limpio y con buenas prácticas.

## Forma de trabajar
- Antes de realizar cualquier cambio muestra los archivos que se veran afectados y pide confirmación.
- No realices ningún cambio sin recibir la confirmación antes.

## Límites
- ✅ Siempre: respetar las reglas del estándar de código y sus convenciones, actualizar `MEMORY.md` al terminar cada tarea.
- ⚠️ Pregunta antes: dependencias nuevas, archivos nuevos, cambios en el formato de
datos.
- 🚫 Nunca: debes tocar la base de datos sin confirmación previa, añadir dependencias, frameworks o un paso de build.

## Verificación
- Limpiar la solución con dotnet clean y luego compilar con dotnet build y debe salir sin errores.

## Memoria
- Al empezar, lee `MEMORY.md` para conocer el estado del proyecto y las decisiones
tomadas.
- Al terminar una tarea, actualízalo: estado actual, decisiones importantes (con su
porqué) y errores a evitar.
- Mantenlo breve (máximo ~50 líneas): resume o elimina lo que ya no aporte.
- Si algo se convierte en una regla permanente, propón moverlo a `AGENTS.md` en lugar de
dejarlo en la memoria.
- No guardes nunca datos sensibles (claves, tokens, datos personales). 
