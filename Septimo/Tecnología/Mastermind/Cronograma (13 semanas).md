## Semana 1 — Análisis y planificación (17/08 - 23/08)

### Objetivos

- [x] Definir alcance.
- [x] Formalizar reglas.
- [x] Definir requisitos. 
- [x] Identificar riesgos.
- [x] Crear repositorio.
- [x] Crear estructura inicial.
### Entregables

```text
README
Requisitos
Historias de usuario
Casos de uso
Matriz de requisitos
Backlog
Plan de proyecto
Registro de riesgos
```
### Git

```text
feat: initialize project structure
docs: define project requirements
docs: add project architecture draft
```

---
# Semana 2 — Arquitectura y diseño (24/08 - 30/08)

### Objetivos

- [ ] Definir arquitectura.    
- [x] Diseñar BD.
- [ ] Diseñar DTOs.
- [ ] Diseñar WCF.
- [ ] Diseñar máquina de estados.
- [x] Definir seguridad.
- [x] Descripciones de casos de uso de bajo nivel.
### Entregables

```text
Diagrama arquitectura
ERD
Diagrama de clases
Diagrama de componentes
Diagrama de secuencia
Máquina de estados
Diseño WCF
Diseño DTO
Modelo de seguridad
```
### Resultado esperado

Arquitectura técnicamente validada antes de construir funcionalidades grandes.

---
# Semana 3 — Infraestructura (31/08 - 6/09)

### Implementar

- [x] Solution.
- [ ] Proyectos.
- [ ] Entity Framework.
- [ ] DbContext.
- [x] SQL Server.
- [x] Usuario limitado de BD.
- [ ] WCF básico.
- [ ] WPF básico.
	- [ ] Signup
	- [ ] Login
	- [ ] MainPage
	- [ ] Profile
	- [ ] SuccessModal
	- [ ] ErrorModal
	- [ ] RoomsPage
		- [ ] CreateRoom
	- [ ] FriendsModal
- [ ] Configuración.
- [ ] Logging.
- [x] Scripts de base de datos y verificar el charset.
- [ ] Todas las etiquetas, botones, modales en los prototipos que la interfaz lanzará.
	- [x] Signup
	- [x] Login
	- [x] MainPage
	- [x] Profile
	- [ ] SuccessModal
	- [ ] ErrorModal
	- [x] RoomsPage
		- [x] CreateRoom
	- [ ] FriendsModal
### Pruebas objetivo

```text
10–15
```

---
# Semana 4 — Autenticación y usuarios (7/09 - 13/09)

### Implementar

- [ ] Registro.
- [ ] Login.
- [ ] Logout.
- [ ] Verificación.
- [ ] Cambio de contraseña.
- [ ] Invitado.
- [ ] Hash de contraseñas.
- [ ] Baneos básicos.
- [ ] 30% de interfaces internacionalizadas.
### Pruebas acumuladas

```text
≈ 50
```

---
# Semana 5 — Perfil, avatares y amigos (14/09 - 20/09)

### Implementar

- [ ] Perfil.
- [ ] Avatar.
- [ ] Almacenamiento/roaming.
- [ ] Solicitudes.
- [ ] Lista de amigos.
- [ ] Presencia.
### Pruebas acumuladas

```text
≈ 85
```

---
# Semana 6 — Lobby y chat (21/09 - 27/09)

### Implementar

- Crear sala.    
- Unirse.
- Salir.
- Invitaciones.
- Chat.
- Presencia dentro de lobby.
- Configuración de partida.

### Pruebas acumuladas

```text
≈ 120
```

---
# Semana 7 — Motor Mastermind (28/09 - 4/10)

### Implementar

- Generación de código.
- Validación de combinación.
- Cálculo de negras.
- Cálculo de blancas.
- Intentos.
- Dificultades.
- Reglas.
### Prioridad

Esta semana es **100 % lógica de dominio**.

No invertir tiempo excesivo en estética.
### Pruebas acumuladas

```text
≈ 170
```

---
# Semana 8 — Máquina de estados y partidas (5/10 - 11/10)

### Implementar

```text
EsperandoCodigo
EnProgresoAdivinanza
RondaTerminada
```

Además:

- Inicio de partida.
- Fin por código encontrado.
- Fin por tiempo.
- Fin por intentos.
- Abandono.
- Desconexión.
- Persistencia de resultados.
### Pruebas acumuladas

```text
≈ 215
```

---

# Semana 9 — Multiplayer y sincronización (12/10 - 18/10)

### Implementar

- Callbacks WCF.
- Sincronización de jugadores.
- Actualización de estado.
- Chat en partida.
- Invitaciones.
- Inicio simultáneo.
- Manejo de desconexiones.
- Múltiples partidas simultáneas.
### Punto crítico

Probar:

```text
Partida A
   ├── Jugador 1
   └── Jugador 2

Partida B
   ├── Jugador 3
   └── Jugador 4
```

El estado de A nunca debe mezclarse con B.
### Pruebas acumuladas

```text
≈ 250
```

---
# Semana 10 — UI, localización y personalización (19/10 - 25/10)

### Implementar

- Interfaz completa.
- Tablero.
- Selector de colores.
- Temporizador.
- Historial de intentos.
- Perfil.
- Lobby.
- Chat.
- Inglés.
- Español.
- Personalización visual.
### Pruebas acumuladas

```text
≈ 275
```

---
# Semana 11 — Seguridad y pruebas intensivas (26/10 - 1/11)

### Revisar

- Código secreto.
- DTOs.
- Autenticación.
- Autorización.
- SQL.
- Permisos.
- Inputs.
- WCF.
- Sesiones.
- Baneos.
- Manipulación de paquetes.
- Estados inválidos.
### Objetivo

Superar:

```text
300 pruebas
```

Objetivo recomendado:

```text
≈ 320–330
```

---
# Semana 12 — Integración y estabilización (2/11 - 8/11)

### Actividades

- Integration testing.
- Pruebas multijugador.
- Pruebas de desconexión.
- Pruebas de concurrencia.
- Pruebas de rendimiento básicas.
- Corrección de bugs.
- Refactorización.
- Revisión de arquitectura.
- Revisión de antipatrones.
### Regla

No introducir funcionalidades grandes nuevas.

Esta semana debe servir para **estabilizar**.

---
# Semana 13 — Release y documentación (9/11 - 15/11)

### Actividades

- Pruebas finales.
- Smoke test.
- Regression testing.
- Manual de instalación.
- Manual de usuario.
- Documentación técnica.
- Diagramas finales.
- Evidencia de Git.
- Evidencia de pruebas.
- Release.
### Entregable

```text
Mastermind v1.0
```
