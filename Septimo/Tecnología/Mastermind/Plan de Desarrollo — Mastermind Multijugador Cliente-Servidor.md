## 1. Información general

| Elemento              | Definición                                |
| --------------------- | ----------------------------------------- |
| Proyecto              | Mastermind Multijugador                   |
| Tipo                  | Aplicación de escritorio cliente-servidor |
| Desarrolladores       | 1                                         |
| Duración              | 13 semanas                                |
| Cliente               | WPF                                       |
| Framework             | .NET Framework                            |
| Comunicación          | WCF                                       |
| Persistencia          | Entity Framework                          |
| Base de datos         | SQL Server                                |
| Control de versiones  | Git + GitHub/GitLab/Bitbucket             |
| Idiomas               | Español / Inglés                          |
| Jugadores por partida | 2                                         |
| Arquitectura          | Cliente-servidor                          |
| Persistencia          | Entity Framework                          |
| Pruebas mínimas       | 300                                       |
| Modelo de juego       | Multijugador competitivo                  |
| Servidor autoritativo | Sí                                        |

---

# 2. Objetivo del proyecto

Desarrollar una aplicación de escritorio multijugador basada en el juego **Mastermind**, utilizando una arquitectura cliente-servidor donde el servidor sea la autoridad sobre:

- Estado de las partidas.
- Generación del código secreto.
- Validación de intentos.
- Temporizadores.
- Número de intentos.
- Resultado de las partidas.
- Presencia de jugadores.
- Usuarios y permisos.
- Sistema de baneos.
- Marcadores.

El cliente será responsable principalmente de:

- Presentación de la interfaz.
- Interacción del usuario.
- Envío de acciones al servidor.
- Recepción de eventos.
- Renderizado del estado recibido.

> **Regla fundamental:** el cliente nunca debe poseer el código secreto.

---

# 3. Alcance funcional

## 3.1 Gestión de usuarios

El sistema deberá permitir:

- Registro.
- Verificación mediante código o correo electrónico.
- Inicio de sesión.
- Cambio de contraseña.
- Recuperación/cambio de contraseña.
- Cerrar sesión.
- Jugar como invitado.
- Personalización del perfil.
- Selección de avatar.
- Persistencia de avatar mediante almacenamiento accesible para múltiples clientes.

### Usuario autenticado

```text
Usuario
 ├── Id
 ├── Username
 ├── Email
 ├── PasswordHash
 ├── IsVerified
 ├── IsBanned
 ├── AvatarId
 ├── CreatedAt
 └── LastLogin
```

Nunca se deberá almacenar una contraseña en texto plano.

---

# 4. Amigos y presencia

El sistema deberá soportar:

- Agregar amigos mediante código/email.
- Aceptar/rechazar solicitudes.
- Eliminar amigos.
- Visualizar lista de amigos.
- Mostrar presencia.
- Detectar conexión/desconexión.
- Invitar amigos a una sala.

Estados mínimos:

```text
Offline
Online
InLobby
InGame
Away
```

La presencia deberá manejarse principalmente en memoria del servidor y sincronizarse con los clientes mediante WCF.

---

# 5. Lobby

El sistema deberá permitir:

- Crear sala.
- Unirse a sala.
- Abandonar sala.
- Visualizar jugadores.
- Invitar amigos.
- Chat.
- Configurar reglas.
- Configurar dificultad.
- Seleccionar modalidad.
- Iniciar partida.

Una sala podrá contener únicamente los jugadores necesarios para una partida de dos jugadores.

---

# 6. Chat

El chat deberá funcionar:

- En lobby.
- Durante la partida.

El servidor será responsable de distribuir los mensajes.

Modelo:

```text
ChatMessage
 ├── MessageId
 ├── SenderId
 ├── RoomId
 ├── Content
 └── Timestamp
```

El servidor deberá validar:

- Longitud máxima.
- Usuario autorizado.
- Sala existente.
- Usuario perteneciente a la sala.
- Estado de conexión.

---

# 7. Sistema de baneos y reportes

El sistema deberá permitir:

- Reportar jugador.
- Registrar motivo.
- Consultar reportes.
- Aplicar ban.
- Impedir inicio de sesión de usuarios baneados.
- Impedir entrada a partidas a usuarios baneados.

Modelo conceptual:

```text
Report
 ├── Id
 ├── ReporterId
 ├── ReportedUserId
 ├── Reason
 ├── CreatedAt
 └── Status
```

```text
Ban
 ├── Id
 ├── UserId
 ├── Reason
 ├── CreatedAt
 ├── ExpiresAt
 └── IsActive
```

### Efecto opcional

Al aplicar un ban:

> **"PAL LOBBYYY"**

acompañado de un efecto de audio.

El audio deberá considerarse una funcionalidad secundaria y no afectar el flujo principal del sistema.

---

# 8. Reglas del Mastermind

## 8.1 Código

El servidor genera un código secreto.

Configuración:

```text
Longitud:
4 o 5 posiciones

Colores:
N colores configurables
```

El código debe existir únicamente dentro del servidor.

### Prohibición crítica

Nunca enviar:

```csharp
SecretCode
```

al cliente.

Tampoco deberá enviarse:

```text
SecretCode
HiddenCode
CorrectCombination
Solution
```

ni ninguna variante equivalente dentro de un DTO.

---

# 9. Intentos

Cada jugador deberá poder realizar intentos mientras:

- La partida esté en progreso.
- Le queden intentos.
- No haya terminado el tiempo.
- No haya terminado la ronda.

Ejemplo:

```text
Intento:
[Rojo][Azul][Verde][Amarillo]

Resultado:
Negras: 2
Blancas: 1
```

---

# 10. Sistema de pistas

El servidor calculará:

### Negra

Color correcto + posición correcta.

### Blanca

Color correcto + posición incorrecta.

La información enviada al cliente será únicamente:

```csharp
GuessResultDto
{
    int BlackPegs;
    int WhitePegs;
}
```

Nunca:

```csharp
SecretCode
```

---

# 11. Modalidades competitivas

## Modalidad A — Tiempo

Gana el jugador que:

1. Descubra correctamente el código.
    
2. Antes de que termine el tiempo.
    
3. Y tenga el menor tiempo válido.
    

Ejemplo:

```text
Jugador A → 00:42.350
Jugador B → 01:13.812

Ganador → A
```

Si ningún jugador descubre el código:

```text
Resultado → Empate / derrota de ambos
```

según la regla final definida en la configuración.

---

## Modalidad B — Intentos

Gana quien descubra correctamente el código utilizando menos intentos.

Ejemplo:

```text
Jugador A → 4 intentos
Jugador B → 6 intentos

Ganador → A
```

---

# 12. Dificultad

|Dificultad|Intentos|Tiempo|
|---|--:|--:|
|Fácil|10–12|3 min|
|Medio|8|2 min|
|Difícil|6|1 min|
|Ultra Instinto|3|30 s|

La dificultad deberá ser una configuración del servidor y no una decisión del cliente.

---

# 13. Máquina de estados

La partida deberá implementar explícitamente una máquina de estados.

```text
┌────────────────────┐
│ EsperandoCodigo    │
└─────────┬──────────┘
          │ Código generado
          ▼
┌─────────────────────────┐
│ EnProgresoAdivinanza    │
└──────────┬──────────────┘
           │
           ├── Código encontrado
           │
           ├── Tiempo agotado
           │
           ├── Intentos agotados
           │
           └── Error/abandono
           │
           ▼
┌────────────────────┐
│ RondaTerminada     │
└────────────────────┘
```

## Estados

### `EsperandoCodigo`

Responsabilidades:

- Confirmar jugadores.
- Generar código.
- Inicializar contador.
- Inicializar temporizador.
- Preparar partida.

### `EnProgresoAdivinanza`

Responsabilidades:

- Recibir intentos.
- Validar intentos.
- Calcular pistas.
- Actualizar tiempo.
- Controlar intentos.
- Determinar ganador.

### `RondaTerminada`

Responsabilidades:

- Bloquear nuevos intentos.
- Determinar resultado.
- Persistir resultado.
- Actualizar ranking.
- Notificar clientes.

---

# 14. Arquitectura propuesta

```text
                         ┌──────────────────────┐
                         │      SQL Server      │
                         │                      │
                         │ Usuarios             │
                         │ Amigos               │
                         │ Partidas             │
                         │ Resultados            │
                         │ Reportes              │
                         │ Baneos                │
                         └──────────▲───────────┘
                                    │
                             Entity Framework
                                    │
┌──────────────┐             ┌──────┴───────────┐             ┌──────────────┐
│   Cliente A  │◄─── WCF ───►│     Servidor     │◄─── WCF ───►│   Cliente B  │
│              │             │                   │             │              │
│ WPF          │             │ Game Server       │             │ WPF          │
│ UI           │             │ Game Logic        │             │ UI           │
│ ViewModels   │             │ State Machine     │             │ ViewModels   │
└──────────────┘             │ Auth              │             └──────────────┘
                             │ Lobby              │
                             │ Presence           │
                             └────────────────────┘
```

---

# 15. Capas de software

Se recomienda una arquitectura por capas:

```text
Mastermind.Client
Mastermind.Server
Mastermind.Contracts
Mastermind.Domain
Mastermind.Persistence
Mastermind.Tests
```

## `Mastermind.Client`

Responsabilidades:

- WPF.
- Views.
- ViewModels.
- Navegación.
- Estado visual.
- Localización.
- Comunicación WCF.

## `Mastermind.Server`

Responsabilidades:

- Servicios WCF.
- Autenticación.
- Lobby.
- Presencia.
- Partidas.
- Máquina de estados.
- Validación.
- Reglas.

## `Mastermind.Contracts`

Responsabilidades:

- DTOs.
- Interfaces WCF.
- Enums.
- Mensajes.

Ejemplo:

```text
LoginRequestDto
LoginResponseDto
CreateRoomRequestDto
JoinRoomRequestDto
GuessRequestDto
GuessResultDto
GameStateDto
PlayerDto
RoomDto
ChatMessageDto
```

## `Mastermind.Domain`

Contendrá:

- Entidades de dominio.
- Reglas.
- Máquina de estados.
- Servicios de dominio.
- Value Objects.

## `Mastermind.Persistence`

Contendrá:

- Entity Framework.
- DbContext.
- Configuración de entidades.
- Repositorios cuando realmente sean necesarios.
- Migraciones.

## `Mastermind.Tests`

Contendrá:

- Unit tests.
- Integration tests.
- Tests de servicios.
- Tests de seguridad.
- Tests de persistencia.
- Tests de comunicación.

---

# 16. Seguridad de información

## Principio principal

> El servidor nunca debe confiar en el cliente.

El cliente podría modificar:

```text
Tiempo
Intentos
Resultado
Código
Estado
Usuario
Dificultad
```

Por lo tanto, el servidor deberá validar todos estos valores.

---

# 17. Seguridad del código secreto

Arquitectura incorrecta:

```text
Servidor
   ↓
GameStateDto
   ├── SecretCode
   ├── Attempts
   └── Timer
```

Arquitectura correcta:

```text
Servidor
   │
   ├── SecretCode ← SOLO servidor
   │
   └── PublicGameStateDto
          ├── Attempts
          ├── Timer
          ├── GameState
          └── PreviousGuesses
```

El código secreto nunca deberá formar parte del contrato público.

---

# 18. Compensación por latencia

Para la modalidad por tiempo, el servidor deberá ser la autoridad temporal.

No se deberá confiar en:

```csharp
DateTime.Now
```

del cliente.

Se recomienda utilizar timestamps del servidor:

```text
ServerStartTime
ServerEndTime
ServerReceivedGuessTime
```

Conceptualmente:

```text
Tiempo válido =
ServerReceivedTime - ServerStartTime
```

El cliente solamente muestra un contador visual aproximado.

La compensación de delay debe aplicarse de manera controlada y documentada para evitar que un cliente pueda manipular artificialmente su tiempo.

---

# 19. Entity Framework

Entity Framework será responsable de persistir:

- Usuarios.
- Perfiles.
- Avatares.
- Amigos.
- Solicitudes de amistad.
- Salas persistentes si aplica.
- Historial de partidas.
- Resultados.
- Marcadores.
- Reportes.
- Baneos.

No todo estado de tiempo real debe persistirse.

Por ejemplo:

```text
Presencia → memoria del servidor
Timer → memoria del servidor
Estado temporal de partida → memoria del servidor
Código secreto → memoria del servidor
```

Mientras que:

```text
Usuario → BD
Resultado → BD
Ban → BD
Reporte → BD
```

---

# 20. Seguridad de la base de datos

La aplicación deberá utilizar un usuario de BD específico.

### Incorrecto

```text
Aplicación
     ↓
sa / superadmin
```

### Correcto

```text
Aplicación
     ↓
MastermindAppUser
     ↓
Permisos únicamente necesarios
```

Principio:

> **Least Privilege / Mínimo privilegio**

El usuario de aplicación no deberá tener permisos administrativos innecesarios.

---

# 21. Contraseñas

Nunca:

```text
Password = "123456"
```

Ni:

```text
Password = "MiPassword"
```

La BD deberá almacenar un hash seguro.

```text
Contraseña
    ↓
Password Hash
    ↓
Base de datos
```

El login deberá verificar:

```text
Password ingresada
        ↓
Hash/Verificación
        ↓
Hash almacenado
        ↓
Match / No Match
```

---

# 22. WCF

WCF será utilizado como framework de comunicación.

Servicios conceptuales:

```text
IAuthenticationService
ILobbyService
IFriendService
IGameService
IChatService
IProfileService
IReportService
```

Para comunicación bidireccional se recomienda utilizar callbacks WCF.

Ejemplo conceptual:

```text
Cliente
   │
   │ Request
   ▼
Servidor
   │
   │ Callback
   ▼
Cliente
```

Esto será especialmente útil para:

- Chat.
- Presencia.
- Inicio de partida.
- Cambios de estado.
- Resultado de partida.
- Invitaciones.

---

# 23. WPF

La interfaz utilizará WPF.

Se recomienda aplicar:

```text
MVVM
```

Estructura:

```text
View
  ↓
ViewModel
  ↓
Service
  ↓
WCF
```

Evitar:

```text
Button_Click()
{
    // reglas de negocio
    // SQL
    // WCF
    // validación
    // navegación
}
```

La UI no deberá contener reglas de negocio importantes.

---

# 24. Internacionalización

Idiomas:

- Español.
- Inglés.

No se deberán escribir textos directamente en las Views:

```xml
<TextBlock Text="Iniciar sesión"/>
```

Preferentemente:

```xml
<TextBlock Text="{DynamicResource LoginText}"/>
```

Recursos:

```text
Resources/
 ├── Strings.es.resx
 └── Strings.en.resx
```

Todo texto visible deberá ser localizable.

También deberá contemplarse:

- Mensajes de error.
- Botones.
- Estados.
- Chat.
- Notificaciones.
- Menús.
- Validaciones.
- Resultados.    

---

# 25. Antipatrones a evitar

|Antipatrón|Prevención|
|---|---|
|God Object|Separación por responsabilidades|
|God Class|Servicios especializados|
|Spaghetti Code|Capas + interfaces|
|Big Ball of Mud|Arquitectura definida|
|Copy/Paste Programming|Reutilización|
|Magic Numbers|Constantes/configuración|
|Magic Strings|Enums/recursos|
|SQL desde UI|Persistence Layer|
|Lógica en View|MVVM|
|Singleton excesivo|Dependency Injection|
|Repository genérico innecesario|Repositorios solo cuando aporten valor|
|Anemic Domain Model|Reglas relevantes en dominio|
|Trust Client|Validación en servidor|
|DTO contaminado|Contratos específicos|
|Catch(Exception) indiscriminado|Manejo específico|
|Código muerto|Limpieza continua|
|Métodos gigantes|Métodos pequeños y cohesionados|

---

# 26. Artefactos por etapa de desarrollo

El proyecto deberá producir evidencia de cada etapa.

## Etapa 1 — Inicio

Artefactos:

- Acta de inicio.
- Objetivo.
- Alcance.
- Restricciones.
- Stakeholders.
- Riesgos iniciales.
## Etapa 2 — Análisis

Artefactos:

- Requisitos funcionales.
- Requisitos no funcionales.
- Historias de usuario.
- Casos de uso.
- Reglas del juego.
- Matriz de requisitos.
- Criterios de aceptación.

## Etapa 3 — Diseño

Artefactos:

- Arquitectura.
- Diagrama de componentes.
- Diagrama de despliegue.
- Diagrama de clases.
- Diagrama entidad-relación.
- Máquina de estados.
- Diagramas de secuencia.
- Diseño de DTOs.
- Diseño de servicios WCF.
- Diseño de seguridad.

## Etapa 4 — Implementación

Artefactos:

- Código fuente.
- Commits.
- Pull/Merge Requests si se utilizan.
- Issues.
- Branches.
- Migraciones.
- Scripts BD.
- Configuración.
- Registro de cambios.

## Etapa 5 — Pruebas

Artefactos:

- Plan de pruebas.
- Casos de prueba.
- Evidencia de ejecución.
- Reporte de cobertura.
- Registro de errores.
- Correcciones.
- Resultados finales.

## Etapa 6 — Liberación

Artefactos:

- Release.
- Manual de instalación.
- Manual de usuario.
- Configuración de BD.
- Script de creación de BD.
- Configuración del servidor.
- Notas de versión.

## Etapa 7 — Cierre

Artefactos:

- Informe final.
- Lecciones aprendidas.
- Métricas.
- Problemas encontrados.
- Revisión de requisitos.
- Evidencia de pruebas.
- Release final.

---

# 27. Estrategia de Git

Repositorio:

```text
mastermind/
├── src/
├── tests/
├── docs/
├── database/
├── scripts/
└── README.md
```

Branches:

```text
main
develop
feature/*
bugfix/*
release/*
```

Ejemplos:

```text
feature/authentication
feature/game-state-machine
feature/wcf-game-service
feature/friends
feature/chat
feature/localization
bugfix/timer-calculation
```

---

# 28. Convención de commits

Ejemplo:

```text
feat: implement user registration
feat: add mastermind state machine
feat: implement WCF game callbacks
test: add guess validation tests
fix: prevent invalid game state transition
security: restrict database application user
docs: add deployment architecture
refactor: extract game scoring service
```

Cada semana deberá existir evidencia de avance.

---

# 29. Definición de terminado

Una funcionalidad únicamente se considera terminada cuando:

```text
Código
 ↓
Compila
 ↓
Funciona
 ↓
Está probado
 ↓
Está documentado
 ↓
Está versionado
```

Por lo tanto:

> **Código que no se prueba no existe.**

---

# 30. Estrategia de pruebas

Objetivo:

## ≥ 300 pruebas

Se recomienda superar ligeramente el mínimo para tener margen.

Meta:

```text
≈ 330 pruebas
```

Distribución propuesta:

|Área|Pruebas|
|---|--:|
|Dominio / reglas|70|
|Máquina de estados|35|
|Autenticación|30|
|Usuarios/perfiles|20|
|Amigos/presencia|20|
|Lobby|25|
|Chat|15|
|Partidas|35|
|Seguridad|25|
|Persistencia EF|20|
|WCF|20|
|Localización|10|
|Integración|5|
|**Total**|**330**|

---

# 31. Cobertura de escenarios

Cada funcionalidad importante deberá contemplar:

### Flujo normal

```text
Usuario realiza acción válida
        ↓
Servidor valida
        ↓
Procesamiento
        ↓
Resultado exitoso
```

### Mínimo 3 flujos alternos

Ejemplo: login.

```text
1. Usuario correcto
2. Usuario no verificado
3. Usuario bloqueado
4. Contraseña incorrecta
```

### Excepciones

Ejemplos:

```text
BD no disponible
WCF desconectado
Timeout
Objeto inexistente
Estado inválido
Usuario no autorizado
Datos corruptos
Petición duplicada
```

---

# 32. Pruebas especialmente importantes

## Seguridad del código secreto

Debe existir una prueba que compruebe que:

```text
GameStateDto
GuessResultDto
GameResponseDto
RoomDto
```

no contienen el código secreto.

También debe probarse que un usuario malicioso no pueda solicitarlo mediante una operación WCF.

---

# 33. Pruebas de máquina de estados

Ejemplo:

```text
EsperandoCodigo
      ↓
EnProgresoAdivinanza
      ↓
RondaTerminada
```

Casos inválidos:

```text
RondaTerminada
      ↓
EnProgresoAdivinanza
```

debe rechazarse.

También:

```text
EsperandoCodigo
      ↓
RondaTerminada
```

deberá rechazarse salvo que exista una transición explícitamente definida.

---

# 34. Pruebas de Mastermind

Se deberán probar:

- Código correcto.
- Código incorrecto.
- Color correcto/posición correcta.
- Color correcto/posición incorrecta.
- Colores repetidos.
- Código con colores repetidos.
- Intentos máximos.
- Tiempo máximo.
- Código de 4 posiciones.
- Código de 5 posiciones.
- Diferentes dificultades.
- Empates.
- Abandono.
- Desconexión.
- Intentos simultáneos.
- Intento después de terminar.
- Intento duplicado.

---

# 35. Plan de 13 semanas

## Semana 1 — Análisis y planificación

### Objetivos

- Definir alcance.
- Formalizar reglas.
- Definir requisitos. 
- Identificar riesgos.
- Crear repositorio.
- Crear estructura inicial.
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
# Semana 2 — Arquitectura y diseño

### Objetivos

- Definir arquitectura.    
- Diseñar BD.
- Diseñar DTOs.
- Diseñar WCF.
- Diseñar máquina de estados.
- Definir seguridad.
- **Descripciones de casos de uso de bajo nivel.**
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
# Semana 3 — Infraestructura

### Implementar

- Solution.
- Proyectos.
- Entity Framework.
- DbContext.
- SQL Server.
- Usuario limitado de BD.
- WCF básico.
- WPF básico.
- Configuración.
- Logging.
- **Scripts de base de datos y verificar el charset.**
- **Todas las etiquetas, botones, modales en los prototipos que la interfaz lanzará.**
### Pruebas objetivo

```text
10–15
```

---
# Semana 4 — Autenticación y usuarios

### Implementar

- Registro.
- Login.
- Logout.
- Verificación.
- Cambio de contraseña.
- Invitado.
- Hash de contraseñas.
- Baneos básicos.
- **30% de interfaces internacionalizadas.**
### Pruebas acumuladas

```text
≈ 50
```

---
# Semana 5 — Perfil, avatares y amigos

### Implementar

- Perfil.
- Avatar.
- Almacenamiento/roaming.
- Solicitudes.
- Lista de amigos.
- Presencia.
### Pruebas acumuladas

```text
≈ 85
```

---
# Semana 6 — Lobby y chat

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
# Semana 7 — Motor Mastermind

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
# Semana 8 — Máquina de estados y partidas

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

# Semana 9 — Multiplayer y sincronización

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
# Semana 10 — UI, localización y personalización

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
# Semana 11 — Seguridad y pruebas intensivas

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
# Semana 12 — Integración y estabilización

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
# Semana 13 — Release y documentación

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

---

# 36. Distribución de esfuerzo

Para una sola persona:

|Área|Prioridad|
|---|---|
|Motor de juego|Crítica|
|Máquina de estados|Crítica|
|Seguridad|Crítica|
|WCF|Crítica|
|Persistencia|Alta|
|Multiplayer|Crítica|
|Pruebas|Crítica|
|Autenticación|Alta|
|Lobby|Alta|
|UI|Media|
|Chat|Media|
|Amigos|Media|
|Avatares|Media|
|Personalización visual|Baja|
|Audio del ban|Baja|

---

# 37. Riesgos principales

|Riesgo|Probabilidad|Impacto|Mitigación|
|---|---|---|---|
|WCF complejo|Alta|Alto|Prototipo temprano|
|Multiplayer difícil|Alta|Alto|Implementarlo antes de UI final|
|Código secreto expuesto|Media|Crítico|DTOs públicos sin secret|
|300 pruebas consumen tiempo|Alta|Alto|Escribir pruebas desde el inicio|
|UI consume demasiado tiempo|Alta|Medio|MVVM + diseño sencillo|
|Concurrencia|Media|Alto|Servidor autoritativo|
|Desconexiones|Alta|Alto|Diseñar desde arquitectura|
|EF mal configurado|Media|Medio|Implementarlo semana 3|
|Localización tardía|Media|Medio|Recursos desde el inicio|
|Baneos complicados|Media|Medio|Implementación simple inicialmente|
|Scope creep|Alta|Crítico|Congelar funcionalidades semana 10|

---

# 38. Priorización MoSCoW

## MUST

- Registro.
- Login.
- Invitado.
- WCF.
- WPF.
- Entity Framework.
- SQL Server.
- Multiplayer.
- Lobby.
- Partida.
- Mastermind.
- Máquina de estados.
- Código secreto protegido.
- Dos modalidades.
- Dificultades.
- Marcadores.
- Pruebas ≥300.
- Seguridad BD.
- Español/Inglés.

## SHOULD

- Amigos.
- Presencia.
- Chat.
- Perfil.
- Avatares.
- Reportes.
- Baneos.
## COULD

- Personalización avanzada.
- Efectos.
- Audio.
- Animaciones.
- Estadísticas avanzadas.
## WON'T / POST-V1

Si el tiempo se vuelve crítico:

- Sistema social avanzado.
- Matchmaking complejo.
- Sistema de ranking sofisticado.
- Replays.
- Espectadores.
- Personalización extremadamente avanzada.

---

# 39. Backlog de alto nivel

```text
EPIC 01 — Arquitectura
EPIC 02 — Usuarios
EPIC 03 — Autenticación
EPIC 04 — Perfiles
EPIC 05 — Amigos
EPIC 06 — Presencia
EPIC 07 — Lobby
EPIC 08 — Chat
EPIC 09 — Partidas
EPIC 10 — Mastermind
EPIC 11 — Máquina de estados
EPIC 12 — Multiplayer
EPIC 13 — Ranking
EPIC 14 — Reportes
EPIC 15 — Baneos
EPIC 16 — Localización
EPIC 17 — Seguridad
EPIC 18 — Pruebas
EPIC 19 — Documentación
EPIC 20 — Release
```

---

# 40. Definition of Ready

Una historia puede comenzar cuando:

- Tiene descripción.
- Tiene criterios de aceptación.
- Tiene dependencias identificadas.
- Tiene prioridad.
- Tiene estimación.
- Se conoce cómo probarla.

---

# 41. Definition of Done

Una historia está terminada cuando:

-  Implementación terminada.    
-  Compila.
-  Pruebas unitarias.
-  Pruebas de integración cuando corresponda.
-  Casos alternos.
-  Excepciones.
-  Validación de seguridad.
-  Documentación.
-  Código versionado.
-  Revisión de antipatrones.
-  Sin errores críticos conocidos.

---

# 42. Criterios de aceptación del proyecto

El proyecto podrá considerarse terminado cuando:

 - [ ] Dos jugadores pueden conectarse.
 - [ ] Pueden autenticarse.
 - [ ] Pueden crear/unirse a una sala.
 - [ ] Pueden comunicarse mediante chat.
 - [ ] Pueden iniciar una partida.
 - [ ] El servidor genera el código.
 - [ ] El código nunca llega al cliente.
 - [ ] Ambos jugadores reciben el mismo desafío.
 - [ ] Los intentos son validados por el servidor.
 - [ ] Las pistas son correctas.
 - [ ] Se controla el tiempo.
 - [ ] Se controlan los intentos.
 - [ ] Se determina ganador.
 - [ ] Se soportan ambas modalidades.
 - [ ] Se soportan las cuatro dificultades.
 - [ ] Se soportan múltiples partidas.
 - [ ] Se persisten resultados.
 - [ ] Funciona el ranking.
 - [ ] Se soporta presencia.
 - [ ] Se soportan amigos.
 - [ ] Se soportan perfiles.
 - [ ] Se soportan avatares.
 - [ ] Se soportan baneos.
 - [ ] Se soporta español.
 - [ ] Se soporta inglés.
 - [ ] La BD utiliza un usuario limitado.
 - [ ] No se utiliza superadministrador.
 - [ ] Existen ≥300 pruebas.
 - [ ] Existen flujos normales.
 - [ ] Existen ≥3 flujos alternos por funcionalidad relevante.
 - [ ] Se cubren excepciones.
 - [ ] Existe documentación técnica.
 - [ ] Existe documentación de usuario.
 - [ ] Existe evidencia de Git.
 - [ ] Existe release final.

---

# 43. Métricas del proyecto

Al finalizar se deberán reportar como mínimo:

```text
Número de commits
Número de issues
Número de funcionalidades
Número de pruebas
Pruebas exitosas
Pruebas fallidas
Cobertura de código
Bugs encontrados
Bugs corregidos
Bugs pendientes
Número de requisitos cumplidos
Número de releases
```

---

# 44. Estructura final de documentación

```text
docs/
│
├── 01-inicio/
│   ├── acta-inicio.md
│   ├── alcance.md
│   └── riesgos.md
│
├── 02-analisis/
│   ├── requisitos.md
│   ├── historias-usuario.md
│   ├── casos-uso.md
│   └── matriz-requisitos.md
│
├── 03-diseno/
│   ├── arquitectura.md
│   ├── maquina-estados.md
│   ├── base-datos.md
│   ├── wcf.md
│   ├── dto.md
│   └── seguridad.md
│
├── 04-pruebas/
│   ├── plan-pruebas.md
│   ├── casos-prueba.md
│   └── resultados.md
│
├── 05-deployment/
│   ├── instalacion.md
│   └── configuracion.md
│
└── 06-cierre/
    ├── informe-final.md
    └── lecciones-aprendidas.md
```

---

# 45. Orden técnico recomendado

La prioridad real de implementación debería ser:

```text
1. Arquitectura
       ↓
2. Base de datos
       ↓
3. WCF
       ↓
4. Dominio Mastermind
       ↓
5. Máquina de estados
       ↓
6. Autenticación
       ↓
7. Multiplayer
       ↓
8. Lobby
       ↓
9. Persistencia
       ↓
10. WPF
       ↓
11. Funcionalidades sociales
       ↓
12. Localización
       ↓
13. Seguridad
       ↓
14. 300+ pruebas
       ↓
15. Integración
       ↓
16. Release
```

Este orden evita uno de los errores más peligrosos del proyecto: **hacer primero una UI bonita y descubrir después que la arquitectura multijugador no funciona**.

---

# 46. Arquitectura mínima viable para la semana 8

Al terminar la semana 8 debería existir ya este flujo:

```text
Cliente A ────────┐
                  │
                  ▼
             ┌─────────┐
             │ WCF     │
             └────┬────┘
                  │
                  ▼
          ┌───────────────┐
          │ Game Server   │
          │               │
          │ Secret Code   │
          │ State Machine │
          │ Game Rules    │
          └───────┬───────┘
                  │
                  ▼
             ┌─────────┐
             │   EF    │
             └────┬────┘
                  │
                  ▼
             SQL Server
```

Y deberá poder ejecutarse:

```text
Jugador A
   ↓
Se conecta
   ↓
Jugador B
   ↓
Se conecta
   ↓
Partida
   ↓
Servidor genera código
   ↓
Adivinanzas
   ↓
Pistas
   ↓
Victoria
   ↓
Resultado persistido
```

Si esto funciona al final de la semana 8, el proyecto tiene una base sólida para llegar a la semana 13.

---

# 47. Estrategia general de las 13 semanas

```text
SEM 1–2
████████████████████
Análisis + Diseño

SEM 3
██████████
Infraestructura

SEM 4–6
██████████████████████████████
Usuarios + Social + Lobby

SEM 7–9
████████████████████████████████
Motor + Estado + Multiplayer

SEM 10
██████████████
UI + Localización

SEM 11
██████████████
Seguridad + Pruebas

SEM 12
██████████████
Integración + Estabilización

SEM 13
██████████████
Release + Documentación
```

---

# 48. Recomendación final de alcance

Para una sola persona, **13 semanas es viable, pero ajustado**.

La funcionalidad que debe protegerse por encima de todo es:

```text
WPF
  +
WCF
  +
Entity Framework
  +
SQL Server
  +
Servidor autoritativo
  +
Mastermind
  +
Máquina de estados
  +
Multiplayer
  +
Seguridad
  +
300+ pruebas
```

Los elementos sociales y cosméticos deben implementarse después del núcleo.

La prioridad del proyecto debe ser:

> **Correctitud → Seguridad → Multiplayer → Pruebas → Persistencia → UX → Estética.**

Y el principio arquitectónico más importante será:

> **El cliente solicita; el servidor decide.**

Esto aplica especialmente a código secreto, tiempo, intentos, resultados, estados, permisos y victorias.