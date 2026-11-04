## Información general

- **Distribución:** openSUSE
- **Versión:** 20261020 (opensuse-tumbleweed)
- **Fecha de inicio:** 26 de octubre del 2026
- **Fecha de finalización:** 2 de noviembre del 2026
- **Arquitectura:** ARM64
- **Entorno de escritorio:** Xfce
- **Gestor de paquetes:** Zypper y Flatpak
- **Virtualizador:** Parallels Desktop
- **Recursos asignados:** 2 CPU / 4 GB RAM / 50 GB almacenamiento

---

## 1. Rúbrica de evaluación

**Escala de calificación**

| Puntuación | Significado |
|---:|---|
| 1–2 | Muy deficiente |
| 3–4 | Deficiente |
| 5–6 | Aceptable |
| 7–8 | Bueno |
| 9–10 | Excelente |

Calificar cada criterio del 1 al 10. La puntuación final se calcula mediante el promedio ponderado.

| Criterio                      |      Peso | Calificación (1–10) | Puntuación ponderada |
| ----------------------------- | --------: | ------------------: | -------------------: |
| Facilidad de instalación      |      10 % |                  10 |                   10 |
| Usabilidad diaria             |      15 % |                   9 |                 13.5 |
| Configuración inicial         |      10 % |                  10 |                   10 |
| Personalización               |      10 % |                   9 |                    9 |
| Instalación de programas      |      10 % |                 8.5 |                  8.5 |
| Entorno de desarrollo         |      15 % |                   9 |                 13.5 |
| Rendimiento en Parallels      |      10 % |                  10 |                   10 |
| Estabilidad y actualizaciones |      10 % |                   9 |                    9 |
| Documentación y comunidad     |       5 % |                   9 |                  4.5 |
| Experiencia general           |       5 % |                 9.5 |                 4.75 |
| **TOTAL**                     | **100 %** |                     |       **92.75 / 10** |

### Fórmula

Puntuación ponderada de cada criterio:

`(Calificación / 10) × Peso`

Puntuación final:

`Σ (Calificación × Peso) / 100`

---

## 2. Instalación y configuración

- [x] La imagen ISO se pudo obtener fácilmente.
- [x] La instalación fue exitosa en Parallels.
- [x] El instalador fue intuitivo.
- [x] El sistema reconoció correctamente el hardware virtual.
- [x] La configuración inicial fue sencilla.
- [x] El idioma y teclado se configuraron correctamente.
	- Cuando inició por primera vez después de la instalación no se había guardado la distribución del teclado
- [x] Las actualizaciones se instalaron sin problemas.
- [x] Las herramientas de integración con Parallels funcionan correctamente.

**Tiempo de instalación:** 1 hora aprox

**Principales dificultades:** Ninguna

**Aspectos positivos:** Muy fácil de instalar, next-next

---

## 3. Usabilidad diaria

- [x] La interfaz es intuitiva.
- [x] Es fácil encontrar aplicaciones y configuraciones.
- [x] El gestor de archivos es cómodo.
- [x] La terminal es accesible y funcional.
- [x] La gestión de ventanas y escritorios es satisfactoria.
- [x] Los atajos de teclado son útiles.
- [x] El sistema permite trabajar sin interrupciones frecuentes.

**¿Qué tan cómodo fue utilizarlo durante una semana?** Bastante cómodo, es muy sencillo y diría que intuitivo. Sobre todo para usuarios de windows.

**¿Qué funciones me gustaron más?** Me gustó su gestor de ventanas, es cómodo y fluido.

**¿Qué funciones me resultaron frustrantes?** Zypper me pareció un poco problemático porque incluso con el refresh me mandaba errores que se resolvían lanzando el install de nuevo, aunque puede ser por que es una VM.

---

## 4. Personalización

- [x] Es sencillo cambiar temas y colores.
- [x] Permite modificar iconos y fuentes.
- [x] Es fácil configurar el panel, dock o barra de tareas.
	- Me parecieron un poco limitadas las opciones por defecto
- [x] Permite personalizar los atajos de teclado.
- [x] La terminal puede adaptarse a mis preferencias.
- [x] Es posible modificar el entorno de escritorio sin demasiadas dificultades.

**Nivel de personalización:** Medio

**¿Qué tan difícil fue conseguir la apariencia deseada?** Fue sencillo

**¿Qué limitaciones encontré?** Para lo que necesité no me pareció encontrar dificultades

**Aplicaciones que instalé porque no me gustaron las default:**
- Nautilus: Trae por defecto thunar, pero se me olvidaba como se llamaba, por lo que instalé nautilus (aparte de que se ve más bonito)
- Alacritty: Trae por defecto una terminal común de linux, pero en mi día a día uso alacritty

---

## 5. Instalación y gestión de programas

- [ ] La tienda o gestor gráfico de aplicaciones es útil.
	- No la utilicé
- [x] El gestor de paquetes funciona correctamente.
	- En casi todos los casos sí
- [x] Es sencillo instalar programas mediante la terminal.
	- Es muy sencillo, me gustó
- [ ] Los repositorios ofrecen una selección suficiente.
	- A medias, porque algunas cosas me parece que estaban deprecadas para opensuse
- [x] La instalación de aplicaciones externas es sencilla.
- [x] Los formatos universales (Flatpak, Snap, AppImage u otros) funcionan según corresponda.
	- Estuve utilizando flatpak entonces sí
- [x] Las actualizaciones de aplicaciones son fáciles de gestionar.

**Gestor de paquetes principal:** Zypper

**Métodos de instalación probados:**

- [ ] Gestor gráfico
- [x] Repositorios oficiales
- [x] Terminal
- [x] Flatpak
- [ ] Snap
- [ ] AppImage
- [ ] Otro: 

**¿Qué tan sencillo fue instalar las aplicaciones necesarias?** Sencillo, algunas un poco más difícil porque había que utilizar comandos específicos

---

## 6. Entorno de desarrollo

### Herramientas

- [x] Git
- [x] Visual Studio Code o editor equivalente
- [x] Node.js y npm
- [x] Python y pip
- [ ] Java y su JDK
- [ ] Docker o alternativa compatible
- [ ] Herramientas de compilación
- [ ] SSH y administración de claves
- [ ] Base de datos o cliente correspondiente
- [ ] Navegadores para pruebas web

### Pruebas prácticas

- [x] Clonar un repositorio.
- [x] Configurar un proyecto existente.
- [ ] Instalar dependencias.
- [x] Ejecutar y depurar una aplicación.
- [x] Realizar un commit con Git.
- [ ] Ejecutar pruebas automatizadas.
- [ ] Configurar variables de entorno.
- [x] Ejecutar una aplicación local en un puerto de desarrollo.

**¿Cuánto tiempo tardé en preparar el entorno?** Fue relativamente rápido, tal vez 30 minutos a lo mucho

**¿Qué herramientas dieron problemas?** Apache fue la que más me costó, pero realmente no hubo problemas. Instalar vscode fue un poco complicado, pero igual, nada grave

**¿Qué tan adecuada es esta distro para mi carrera?** Diría que si eres estudiante de los primeros semestres te viene bien, pero siento que le falta un poco más de punch para desarrollo más avanzado porque para ciertas cosas como Apache, sí está el paquete pero no un gestor visual como ManagerOSX, o similares, pero tampoco me quejo porque es muy fácil de usar.

---

## 7. Rendimiento y estabilidad

- [x] El arranque es rápido.
- [x] El escritorio responde con fluidez.
- [x] El consumo de RAM es razonable.
- [x] El consumo de CPU es razonable.
- [x] Las aplicaciones se abren rápidamente.
- [x] No hubo bloqueos ni errores importantes.
- [x] Las actualizaciones no provocaron problemas.
- [x] La integración con macOS y Parallels es satisfactoria.

**RAM en reposo:** 1.47 GiB / 3.81 GiB

**RAM durante el desarrollo:** 2.62 GiB

**Consumo de CPU observado:**  No noté un consumo masivo

**Tiempo de arranque aproximado:** < 10 segundos

**Errores o fallos detectados:** Ninguno

> Nota: las mediciones de rendimiento solo son comparables si mantengo recursos virtuales, condiciones de prueba y cargas de trabajo similares.

---

## 8. Actualizaciones, documentación y mantenimiento

- [x] La documentación oficial es clara.
- [x] Encontré soluciones a los problemas con facilidad.
- [ ] La comunidad es activa.
	- No lo puse a prueba
- [x] El sistema explica correctamente los errores.
- [x] Las actualizaciones son sencillas de realizar.
- [x] Entiendo cómo recuperar el sistema ante un fallo.
- [x] El mantenimiento requerido es razonable.

**¿Cuánto mantenimiento necesita?** Hasta donde pude probar, muy poco

**¿Qué tan fácil fue solucionar los problemas?** Bastante sencillo, no hubo fallos críticos

**¿Qué aprendí sobre Linux gracias a esta distro?** Nada nuevo, pero al ser una distro muy usable desde el primer momento es normal. Aunque sí profundicé un poco más en cómo usar flatpak.

---

## 9. Registro diario

### Día 1 — Instalación
- Actividades: Instalé el SO, brave y nvim
- Problemas: Ninguno
- Aprendizajes: Aprendí sobre zypper y flatpak

### Día 2 — Aplicaciones
- Actividades: VS code, alacritty y obsidian
- Problemas: VS code me costó un poco porque su paquete no funcionaba bien
- Aprendizajes: Ninguno

### Día 3 — Desarrollo
- Actividades: Un poco de html y java script, instalé opencode
- Problemas: Ninguno
- Aprendizajes: Ninguno

### Día 4 — Proyecto práctico
- Actividades: En este caso el proyecto fue continuar el proyecto de tecno, así que utilicé Remmina para conectarme en remoto a mi PC y continuar desarrollando, funcionó muy bien
- Problemas: Ninguno
- Aprendizajes: En general, conocí la app de Remmina

### Día 5 — Personalización
- Actividades: Personalicé la terminal, cambié de bash a zsh para poder utilizar starship
- Problemas: Ninguno
- Aprendizajes: Cambiar de bash a zsh en opensuse

### Día 6 — Mantenimiento
- Actividades: Ninguno mas que actualizaciones
- Problemas: Ninugno
- Aprendizajes: Me familiaricé más con zypper

### Día 7 — Uso libre y evaluación
- Actividades: Uso diario, toma de notas, uso de repos con git
- Problemas: Ninguno
- Aprendizajes: Ninguno, muy cómodo la verdad

---

## 10. Imágenes

![[Captura de pantalla 2026-11-02 a la(s) 3.43.08 p.m..png]]
![[Captura de pantalla 2026-11-02 a la(s) 3.43.13 p.m..png]]
![[Captura de pantalla 2026-11-02 a la(s) 3.45.19 p.m..png]]

---

## 11. Evaluación final

**Tamaño final de la máquina virtual:** 25.57 GB

**Calificación final:** 9 / 10

### Lo mejor
1. Fácil de usar
2. Fácil de personalizar
3. Muy eficiente con su rendimiento

### Lo peor
1. Me dio la impresión que varios paquetes están deprecados para opensuse
2. Se siente que trae muchas aplicaciones que no usas
3. No te explica los shortcuts para cambiar de escritorio como bienvendia (sería útil)

### Principal sorpresa

 Lo fácil y cómodo que es de usar y el excelente rendimiento que tiene con recursos muy límitados

### Principal frustración

 No presenté ninguna.

### ¿La utilizaría como sistema operativo principal?
- [ ] Sí
- [x] Sí, con algunos cambios
- [ ] Tal vez
- [ ] No

### ¿Para quién recomendaría esta distro?

 Principiantes, personas que no hayan usado linux jamás y desarrolladores que quieran un sistema operativo al que no deban invertirle tiempo para usarlo.

### Mejor caso de uso
- [x] Uso doméstico
- [x] Desarrollo de software
	- Me parece que es bueno para desarrollo pero hasta cierto punto, es decir, tal vez programación no muy avanzada
- [x] Gaming
	- Jugué varios juegos web y funcionaban muy bien
- [ ] Ciberseguridad
- [x] Administración de servidores
- [ ] Aprendizaje de Linux
- [x] Equipos con recursos limitados
- [ ] Personalización avanzada
- [x] Otro: 
	- Tomar clases y ofimática

### Veredicto personal

 Es una gran distro, muy **cómoda** y usable para el día a día, puedes hacer lo que quieras en ella.

---

## 11. Resultado en una frase

**«Esta distribución destaca por su comodidad, usabilidad y confiabilidad, pero tiene dificultades en variedad de paquetes actuales. La recomendaría para estudiantes o principiantes que quieran utilizar linux, personas que no quieran desarrollar y solo quieran un sistema operativo confiable para el uso día a día».**