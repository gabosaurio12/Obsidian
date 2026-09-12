## Funcionalidades
- Al crear una cuenta se hace una pequeña encuesta
- Feed principal con publicaciones de usuarios con gustos similares y follows
- Función de foros (comunidades)
- Perfiles personales
- Follows a perfiles
- Chat privado
- Filtrado de mensajes
- Evitar que se use para finales ilícitos
- Recomendación de usuarios con gustos similares
- Moderación con bot
- Reporte de publicaciones ofensivas o inapropiadas
- Biblioteca de juegos del usuario
- Recomendaciones de perfiles
- Publicaciones multimedia
- Reacciones a las publicaciones
- Sistema de eventos
- Sistema de spoilers
- Modo claro/oscuro

# System Request

## Red Social de Gaming

### 1. Nombre o alias del proyecto

**Let's Play (Switch 2 Live Station vita x64 TWO) S2LSvx64T - GameLink**  
_Red social especializada para jugadores y comunidades gaming._

---
## 2. Descripción de la problemática y propuesta de solución

Actualmente existen múltiples plataformas destinadas a la interacción social entre usuarios y también numerosas plataformas enfocadas en videojuegos. Sin embargo, gran parte de estas soluciones separan diferentes necesidades de los jugadores: comunicación, descubrimiento de videojuegos, búsqueda de compañeros de juego, comunidades, publicación de contenido y seguimiento de otros usuarios.

Las redes sociales generales permiten publicar contenido y establecer relaciones entre usuarios, pero no están diseñadas específicamente para representar los intereses y hábitos de una persona como jugador. Por otro lado, plataformas especializadas en videojuegos pueden concentrarse principalmente en noticias, distribución de videojuegos, estadísticas o comunicación, sin ofrecer necesariamente una experiencia social integrada y personalizada.

Esta fragmentación dificulta que los jugadores encuentren personas con intereses similares. Un usuario puede jugar determinados géneros, plataformas o títulos y tener dificultades para encontrar una comunidad compatible con sus preferencias, especialmente cuando busca compañeros para jugar, discutir estrategias, compartir contenido o participar en comunidades específicas. Además, los algoritmos de redes sociales generales pueden mostrar contenido que no corresponde con los intereses del usuario, generando una experiencia poco relevante.

Otro problema importante es la seguridad dentro de las comunidades digitales. Las plataformas sociales relacionadas con videojuegos pueden presentar situaciones como spam, acoso, lenguaje ofensivo, publicaciones inapropiadas, suplantación de identidad, intentos de fraude o interacciones no deseadas. Una plataforma enfocada en gaming necesita mecanismos que permitan detectar, reportar y moderar este tipo de comportamiento, manteniendo un entorno adecuado para la interacción entre sus usuarios.

También existe la necesidad de mejorar el descubrimiento de contenido y personas. Un jugador puede conocer únicamente a usuarios de su círculo cercano, aunque existan muchas otras personas con gustos prácticamente idénticos. Una plataforma que utilice la información proporcionada durante el registro, los videojuegos favoritos, las publicaciones, los follows y las interacciones podría generar recomendaciones más relevantes.

Como propuesta de solución se plantea **GameLink**, una red social especializada en videojuegos que permita a los usuarios crear un perfil orientado a sus intereses gaming, descubrir personas con gustos similares, seguir usuarios, participar en comunidades, publicar contenido, comunicarse mediante chats privados y acceder a recomendaciones personalizadas.

Durante el registro, el usuario responderá una encuesta breve sobre sus preferencias, como géneros favoritos, videojuegos de interés, plataformas utilizadas y otros aspectos relacionados con sus hábitos de juego. Esta información permitirá construir un perfil inicial y generar recomendaciones personalizadas desde el comienzo.

El sistema contará con un feed principal donde se mostrarán publicaciones de personas seguidas, comunidades y usuarios con intereses similares. Los usuarios podrán publicar texto, imágenes y contenido relacionado con videojuegos, así como reaccionar, comentar, compartir y guardar publicaciones.

La plataforma también incorporará foros y comunidades para organizar las conversaciones alrededor de videojuegos, géneros, plataformas o intereses específicos. Esto permitirá que las interacciones no dependan exclusivamente del perfil individual y facilitará la creación de grupos especializados.

Una de las funcionalidades principales será la búsqueda y recomendación de jugadores. El sistema podrá identificar coincidencias entre usuarios utilizando información como videojuegos favoritos, géneros, plataformas y actividad dentro de la plataforma. De esta forma, un usuario podrá descubrir personas con las que potencialmente tenga intereses en común o con quienes pueda jugar.

Para complementar esta experiencia se incluirá una biblioteca personal de videojuegos, donde cada usuario podrá indicar qué juegos posee, juega o ha jugado. Esta información también podrá utilizarse para recomendar nuevos videojuegos, comunidades y usuarios.

La seguridad será un componente fundamental del proyecto. Se implementará filtrado de mensajes y contenido, mecanismos de bloqueo y silenciamiento, reportes de publicaciones o usuarios y herramientas de moderación automática. Un bot de moderación podrá identificar contenido potencialmente ofensivo, inapropiado o asociado con comportamientos abusivos, enviándolo a revisión cuando sea necesario. Asimismo, se contemplarán mecanismos para prevenir el uso de la plataforma para actividades ilícitas, fraudes, amenazas o distribución de contenido prohibido.

Finalmente, el sistema contará con un panel administrativo para gestionar usuarios, reportes, publicaciones y acciones de moderación. Esto permitirá mantener un control sobre el funcionamiento de la plataforma y responder ante incidentes de seguridad o incumplimiento de las reglas.

En conjunto, GameLink busca proporcionar un espacio digital especializado donde los jugadores puedan **descubrir personas, comunidades y contenido relevante**, al mismo tiempo que cuentan con mecanismos de seguridad y moderación que favorezcan una comunidad sana.

---

## 3. Lista inicial de requerimientos — Wishlist de funcionalidades

### Gestión de usuarios

- Registro de usuarios.
- Inicio y cierre de sesión.
- Recuperación de contraseña.
- Encuesta inicial de preferencias gaming.
- Perfiles personales.
- Edición de perfil.
- Foto de perfil.
- Biografía.
- Configuración de privacidad.
- Seguimiento de usuarios.
- Bloqueo y silenciamiento de usuarios.

### Personalización y descubrimiento

- Feed personalizado.
- Recomendación de usuarios con gustos similares.
- Recomendación de videojuegos.
- Búsqueda de usuarios.
- Búsqueda de videojuegos.
- Búsqueda de publicaciones.
- Biblioteca personal de videojuegos.
- Filtros por género, plataforma y otros intereses.
- Sistema para encontrar compañeros de juego.

### Publicaciones

- Creación de publicaciones.
- Publicaciones de texto.
- Publicaciones con imágenes.
- Publicación de clips o contenido multimedia.
- Comentarios.
- Reacciones.
- Etiquetas de videojuegos.
- Marcado de contenido como spoiler.
- Encuestas.

### Comunidades (Foros)

- Unirse y abandonar comunidades.
- Publicaciones dentro de comunidades.
- Reglas específicas por comunidad.

### Comunicación

- Chat privado.
- Conversaciones individuales.
- Conversaciones grupales.
- Notificaciones de mensajes.
- Filtrado automático de mensajes.
- Detección de spam.
- Bloqueo de mensajes no deseados.

### Videojuegos

- Catálogo de videojuegos.
- Géneros.
- Plataformas.
- Juegos favoritos.
- Juegos jugados.
- Juegos que posee el usuario.
- Calificación de videojuegos.
- Reseñas.
- Estadísticas básicas del usuario.
- Logros o insignias.

### Seguridad y moderación

- Reporte de publicaciones.
- Reporte de usuarios.
- Reporte de mensajes.
- Moderación automática mediante bot.
- Detección de spam.
- Detección de lenguaje ofensivo.
- Detección de contenido inapropiado.
- Detección de comportamiento sospechoso.
- Prevención del uso de la plataforma para actividades ilícitas.
- Sistema de sanciones.
- Historial de moderación.
- Sistema de apelaciones.
- Panel administrativo.

### Notificaciones

- Nuevos seguidores.
- Nuevos comentarios.
- Reacciones.
- Menciones.
- Mensajes.
- Recomendaciones.
- Actividad en comunidades.
- Eventos.

### Eventos

- Creación de eventos.
- Torneos comunitarios.
- Organización de partidas.
- Invitaciones.
- Calendario de eventos.

---

## 4. Alcances del proyecto

### Dentro del alcance

- Desarrollo de una aplicación web de red social especializada en gaming.
- Registro y autenticación de usuarios.
- Creación y administración de perfiles.
- Encuesta inicial de preferencias.
- Feed personalizado.
- Publicaciones y comentarios.
- Sistema de follows.
- Recomendación de usuarios.
- Foros y comunidades.
- Chat privado.
- Sistema de reportes.
- Filtrado y moderación automática.
- Sistema básico de administración.
- Notificaciones.
- Búsqueda de contenido y usuarios.
- Gestión básica de videojuegos.
- Configuración de privacidad.
- Bloqueo y silenciamiento.

### Fuera del alcance inicial

- Desarrollo de videojuegos.
- Venta o distribución de videojuegos.
- Procesamiento de pagos.
- Streaming de videojuegos.
- Servicio de almacenamiento ilimitado de videos.
- Integración obligatoria con todas las plataformas de videojuegos.
- Sistema avanzado de estadísticas provenientes directamente de servidores externos.
- Aplicaciones móviles nativas para iOS y Android en la primera versión.
- Moderación humana disponible las 24 horas.
- Garantía de eliminación absoluta de contenido inapropiado mediante inteligencia artificial.

Estas funcionalidades podrán considerarse para versiones posteriores.

---

## 5. Justificación

El proyecto se justifica por la necesidad de contar con un espacio especializado para la interacción entre jugadores. Una red social enfocada exclusivamente en gaming permite utilizar los intereses relacionados con videojuegos como elemento principal para conectar usuarios, organizar comunidades y personalizar el contenido.

A diferencia de una red social general, GameLink puede utilizar información específica del entorno gaming para mejorar las recomendaciones y facilitar la búsqueda de personas con intereses compatibles.

Además, la incorporación de mecanismos de moderación, reportes, privacidad y bloqueo permite abordar uno de los principales problemas de las comunidades digitales: la presencia de contenido y comportamientos que pueden perjudicar la experiencia de los usuarios.

El proyecto también representa una oportunidad para aplicar conocimientos de ingeniería de software en áreas como autenticación, bases de datos, desarrollo web, sistemas de recomendación, comunicación en tiempo real, inteligencia artificial, seguridad y arquitectura de software.

---

## 6. Valor generado al negocio

Aunque el proyecto se plantea inicialmente como una plataforma académica, su propuesta podría generar valor mediante:

- **Mayor retención de usuarios:** las recomendaciones personalizadas pueden incentivar que los usuarios regresen a la plataforma.
- **Mayor interacción:** comunidades, foros, publicaciones y chats incrementan la actividad.
- **Segmentación:** los intereses gaming permiten conocer mejor las preferencias de los usuarios.
- **Personalización:** el contenido puede adaptarse a cada usuario.
- **Construcción de comunidades:** los usuarios pueden desarrollar comunidades alrededor de videojuegos específicos.
- **Escalabilidad:** la plataforma podría incorporar posteriormente nuevas funciones o servicios.
- **Potencial comercial:** en una versión comercial podrían incorporarse publicidad segmentada, colaboraciones con desarrolladores, eventos patrocinados u otros modelos de monetización.
- **Diferenciación:** la especialización en gaming permite diferenciar la plataforma de redes sociales generalistas.

---

## 7. Restricciones

- El proyecto estará limitado al tiempo disponible para su desarrollo académico.
- Las funcionalidades deberán priorizarse de acuerdo con el tiempo y recursos del equipo.
- El sistema deberá utilizar tecnologías compatibles con los conocimientos y herramientas disponibles para el equipo.
- La infraestructura disponible puede limitar el almacenamiento de contenido multimedia.
- La moderación mediante inteligencia artificial puede producir falsos positivos o falsos negativos.
- Las recomendaciones dependerán de la cantidad y calidad de información disponible de los usuarios.
- La integración con servicios externos dependerá de la disponibilidad y condiciones de sus APIs.
- El sistema deberá cumplir con las leyes y regulaciones aplicables sobre privacidad y protección de datos.
- No se permitirá utilizar la plataforma como medio para facilitar actividades ilícitas.
- El contenido generado por los usuarios deberá estar sujeto a reglas de comunidad y mecanismos de moderación.
- La primera versión priorizará las funcionalidades esenciales sobre características avanzadas.

---

## 8. Elaboró

**Todos los integrantes del equipo**

| Integrante   | Participación                  |
| ------------ | ------------------------------ |
| Integrante 1 | Leonardo Daniel Ortega Teoba   |
| Integrante 2 | Seth Márquez Rodríguez         |
| Integrante 3 | Gabriel Antonio González López |

---

## 9. Autorizó

**Mario Alberto Hernández Pérez**

> Sustituir por el nombre del docente correspondiente.

---

## 10. Resumen del proyecto

**GameLink** será una red social especializada en videojuegos cuyo objetivo será conectar jugadores con intereses similares y proporcionarles un espacio para compartir contenido, participar en comunidades, comunicarse y descubrir nuevos videojuegos y jugadores.

La plataforma combinará:

- Red social.
- Sistema de recomendaciones.
- Foros y comunidades.
- Chat.
- Catálogo de videojuegos.
- Búsqueda de compañeros de juego.
- Publicaciones multimedia.
- Moderación automática.
- Reportes y herramientas de seguridad.
- Administración de usuarios y contenido.

El objetivo principal será crear una experiencia social **personalizada, segura y centrada en los intereses gaming de cada usuario**.