- Se refiere a **qué tan fácil** es para el usuario **completar** una **tarea** deseada
- También se enfoca en el tipo de **soporte** que el **sistema proporciona** al usuario
- **Importancia**
	- Es una de las formas más económicas y fáciles de mejorar la calidad de un sistema
	- Mejora la percepción del usuario sobre la calidad del sistema y aumenta la satisfacción del usuario final
## Áreas de la usabilidad
- **Aprendizaje de funcionalidades:**
	- Facilita que el usuario aprenda a utilizar el sistema, cuando no está familiarizado con él o una parte de él. Por ejemplo, con funciones de ayuda
	- Qué tan rápido se aprende a usar el sistema
- **Uso eficiente del sistema:**
	- Lo que hace el sistema para mejorar la eficiencia del usuario. Por ejemplo, el usuario puede suspender una tarea, desarrollar varias operaciones simultáneamente o continuar con una tarea
	- Qué tan rápido se puede hacer la tarea
- **Minimización del impacto de los Errores:**
	- Reducir el impacto de los errores del usuario mediante opciones para cancelar o deshacer acciones
	- Se miden por la cantidad de errores que no se pueden deshacer
- **Adaptación a las Necesidades del usuario:**
	- Personalizar el sistema para facilitar tareas del usuario, como autocompletar
	- Algunas necesidades ya entran como accesibilidad
- **Aumento de Confianza y Satisfacción:**
	- Proporcionar retroalimentación que indique el progreso de tareas, aumentando la confianza del usuario
	- Calificación que se le da al aplicativo
## Iniciativa del Usuario y del Sistema
- **Iniciativa del Usuario:**
	- El usuario toma la iniciativa para realizar acciones específicas y cómo procede la interacción
	- Ejemplo: Cancelar un comando
- **Iniciativa del Sistema:**
	- El sistema toma la iniciativa para realizar acciones o proporcionar información
	- Ejemplo: Mostrar un indicador de progreso durante una operación
- **Iniciativa mixta:**
	- Combinación de ambas iniciativas para mejorar la interacción
	- Ejemplo: Durante una cancelación, el usuario inicia la acción y el sistema proporciona retroalimentación visual sobre el progreso
- **Aplicación en Usabilidad:**
	- Estos conceptos se utilizan para diseñar tácticas que mejoren la usabilidad, balanceando las iniciativas del usuario y del sistema
## Relación entre Usabilidad y Modificabilidad
- Iteración en el Diseño de la interfaz
	- El diseño de la interfaz de usuario es un **proceso iterativo** que requiere ajustes y mejoras constantes
	- Es improbable que se obtenga un diseño perfecto en el primer intento
- La capacidad de modificar el sistema fácilmente facilita la mejora continua de la usabilidad
- A medida que se corrigen las deficiencias del diseño, la interfaz se adapta mejor a las necesidades del usuario
## Patrones para la usabilidad
- Se han desarrollado para **apoyar el diseño de UI** enfocándose en la facilidad de modificación para mejorar la usabilidad
- Promueven la **separación de responsabilidades** para facilitar la iteración en el diseño de interfaces de usuario
- **Modificar** el sistema **repetidamente**, basándose en el aprendizaje del comportamiento y las necesidades del usuario, es  **clave** para **lograr** una **alta usabilidad**
### Modelo-Vista-Controlador (MVC)
- Patrón que separan la lógica del negocio (modelo) de la interfaz de usuario (vista) y del controlador que gestiona la interacción
	- **Variantes:** MVP (Model-View-Presenter), MVVM(Model-View-ViewModel), MVA (Model-View-Adapter)
- **Beneficios**
	- Facilita cambios en la UI sin afectar la lógica del sistema
	- Permite el desarrollo y pruebas paralelas de cada componente
	- Un modelo puede usarse con diferentes vistas y viceversa
- **Compromisos (tradeoffs)**
	- Puede ser complicado para UIs complejas
	- Añade complejidad inicial que puede no ser necesaria para UIs simples
	- Introduce una pequeña latencia en la interacción del usuario
### Observer
- Se puede usar para vincular funcionalidades con una o más vistas
- Consiste en un sujeto (entidad observada) y uno o más observadores que se registran para recibir notificaciones de cambios de estado en el sujeto
- **Beneficios**
	- **Separación de Funcionalidades:** Facilita la separación entre la funcionalidad subyacente y cómo se presenta
	- **Flexibilidad en Tiempo de Ejecución:** Permite cambiar los vínculos entre el sujeto y los observadores durante la ejecución del programa
- **Compromisos (tradeoffs)**
	- **Complejo para múltiples vistas:** Puede ser innecesario si no se requieren múltiples vistas del sujeto
	- **Problemas de Registro:** Los observadores deben registrarse y cancelar su registro; no hacerlo puede causar fugas de memoria y afectar el rendimiento
	- **Procesamiento Innecesario:** Los observadores pueden necesitar procesar cada cambio de estado, incluso si no todos los cambios son relevantes
### Memento
- **Complejo para múltiples vistas:** Puede ser innecesario si no se requieren múltiples vistas del sujeto
- **Problemas de Registro:** Los observadores deben registrarse y cancelar su registro; no hacerlo puede causar fugas de memoria y afectar el rendimiento
- **Procesamiento Innecesario:** Los observadores pueden necesitar procesar cada cambio del estado, incluso si no todos los cambios son relevantes
- Permite implementar una función de deshacer (undo) en un sistema)
	- **Originador:** Procesa eventos que cambian su estado
	- **Cuidador**: Procesa eventos que cambian su estado
	- **Cuidador:** Envía eventos al originador que modifican su estado y pueden solicitar un memento para guardar el estado actual
	- **Memento:** Una instantánea
- **Beneficios**
	- Se delega el complicado proceso de implementar la función de deshacer y determinar qué estado conservar a la clase que realmente crea y administra ese estado
	- Se conserva la abstracción del creador y el resto del sistema no necesita verlo
- **Compromisos**
	- **Uso de memoria:** El memento puede consumir mucha memoria dependiendo del tamaño del estado que se guarda, lo cual puede afectar el rendimiento
	- **Complejidad en algunos lenguajes:** En ciertos lenguajes de programación, puede ser complicado manejar cómo se guarda y restaura el estado de forma eficiente
## Actividad: Evaluación de Usabilidad en un Sistema
### Retroalimentación actividad
Se trabajó con el **Heuristic Evaluation Workbook de Nielsen Norman Group** aplicando las **10 heurísticas de usabilidad** a un sistema real. Esto permitió observar desde la perspectiva del usuario, diversos problemas en la interacción:
- Falta de **visibilidad del estado del sistema:** La aplicación no siempre comunica claramente qué está ocurriendo después de una acción
- **Inconsistencias** entre pantallas o funciones, lo que obliga al usuario a reaprender cada vez
- Uso de **terminología técnica o interna** que no corresponde con el lenguaje del dominio del usuario
- Dificultades para **recuperarse de errores**, ya que no siempre hay mensajes claros ni opciones de deshacer
**Reflexión clave:** Aunque en la práctica se evaluaron síntomas "visibles" en la interfaz, muchos de estos problemas tienen raíces más profundo en la arquitectura de software.
## Definición de usabilidad
**Según la ISO/IEC 25010:2011:** Es el grado en el que un producto o sistema puede ser utilizado por usuarios específicos para lograr objetivos específicos con efectividad, eficiencia y satisfacción en un contexto de uso especificado.
Importante: la usabilidad **no es solo estética ni diseño gráfico,** es un atributo de calidad que debe verificarse y evaluarse en escenarios arquitectónicos.
Diferenciar:
- **Usabilidad:** Atributo de calidad con métricas observables
- **Experiencia de usuario (UX):** Disciplina más amplia que incluye percepciones y emociones
### Tácticas arquitectónicas para la usabilidad
1. Mejorar la capacidad del usuario para comprender el sistema
	- **Consistencia:** Decisiones arquitectónicas que fuerzan la uniformidad de flujos y operaciones
	- **Modelo conceptual explícito:** Reflejar en la estructura de módulos el modelo de tareas del dominio
	- **Reducir complejidad visible:** Uso de capas y encapsulación que oculten detalles técnicos irrelevantes para el usuario
2. Reducir la carga de trabajo del usuario
	- **Automatización de tareas repetitivas:** Incluir componentes que validen, completen valores por defecto o sugieran acciones
	- **Personalización y adaptación:** Mecanismos de almacenamiento de preferencias y perfiles de usuario
	- **Soporte a accesibilidad e internacionalización:** Integrados como servicios transversales en la arquitectura
3. Aumentar la confianza del usuario en el sistema
	- **Feedback inmediato:** Soportado por conectores que garanticen comunicación en tiempo real (eventos, colas, mensajería)
	- **Prevención de errores:** Validaciones centralizadas, restricciones arquitectónicas que eviten estados inconsistentes
	- **Recuperación de errores:** Módulos que aseguren mensajes de error consistentes y mecanismos de rollback