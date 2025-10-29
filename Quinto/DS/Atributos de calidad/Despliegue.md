-  **Definición:** Proceso de hacer que un software esté disponible para su uso
	- Asegura que el software funcione correctamente en el entorno de producción
	- Permite la entrega de nuevas características y correcciones
	- Minimiza el tiempo de inactividad y los errores
- **Rollback:** Proceso de revertir un despliegue si se detectan problemas
## Métodos de despliegue
- **Despliegue Manual:** Control completo, pero más propenso a errores y más lento
- **Despliegue Automático Básico:** Utiliza scripts para automatizar algunos pasos, mayor rapidez
- **Despliegue Automatizado Completo (CI/CD):** Todo el proceso es automático, ideal para grandes proyectos y despliegues frecuentes
## Evolución en los Ciclos de Despliegue
- En el pasado, los despliegues de software eran poco frecuentes y acumulaban muchas actualizaciones
- Se realizaban despliegues mensuales, trimestrales o incluso anuales
### Presión Competitiva
- Especialmente en e-commerce, la competencia ha llevado a ciclos de despliegue mucho más cortos
- Los despliegues ahora pueden ocurrir en cualquier momento, incluso varias veces al día
## Despliegue continuo
- **Proceso automatizado**
## Pipeline de Despliegue
- Secuencia de herramientas y actividades que comienza con el registro (push) del código en un sistema de control de versiones y finaliza con el despliegue de la aplicación
- Incluye la configuración de la infraestructura en donde se desplegará el software
- Incluye también integración, pruebas automáticas de funcionalidad, rendimiento, seguridad y cumplimiento de licencias
## Entornos en el Pipeline de Despliegue
### Entorno de Desarrollo
- Desarrollo de código y ejecución de pruebas unitarias para módulos individuales
- Código revisado y enviado al control de versiones
### Entorno de Integración
- Construye una versión ejecutable del servicio
- Un servidor de integración continua compila el código nuevo o modificado junto con las versiones compatibles más recientes del código de otros módulos
- Realiza pruebas unitarias de integración para el sistema completo
- Si pasan las pruebas, el servicio se promociona al entorno de staging
### Entorno de Staging
- Pruebas de rendimiento, seguridad, conformidad de licencias y pruebas de usuario
- Uso de simuladores para sistemas embebidos
- Despliegue en producción después de pasar todas las pruebas, usando modelos como blue/green o actualizaciones continuas
### Entorno de Producción
- Monitoreo cercano hasta garantizar la calidad del servicio
- Si se detectan problemas, es posible revertir a una versión anterior mientras se resuelven los defectos
### Ejemplo de Pipeline de Despliegue
1. **Desarrollo:** Push de Código al repositorio remoto
2. **CI Pipeline:** Compilación -> Pruebas Unitarias -> Análisis de código
3. **Integración**: Integración de Código -> Pruebas de Integración
4. **Staging**: Despliegue en Staging -> Pruebas de Usuario y QA -> Pruebas de Seguridad y Rendimiento
5. **Producción**: Despliegue en Producción -> Monitoreo Post-Despliegue
# Efecto de la Virtualización en los Entornos
## Entornos Físicos Tradicionales
- Cada entorno (desarrollo, integración, staging) consistía en hardware específico operado por diferentes equipos
- Las diferencias de hardware causaban problemas de inconsistencias en las pruebas entre entornos
## Beneficios de la Virtualización
- **Paridad de Entornos:** Virtualización permite que los entornos difieran en escala pero no en tipo de hardware o estructura
- **Herramientas de Aprovisionamiento:** Facilitan la creación de entornos comunes que imitan el entorno de producción lo más cerca posible
- **Reducción de Inconsistencias:** Menos tiempo resolviendo problemas causados por diferencias de entorno
## Ventajas de despliegue continuo
- **Corrección rápida de errores:** Los errores se pueden solucionar y liberar inmediatamente
- **Liberación de nuevas funcionalidades:** Las nuevas características no necesitan esperar a la próxima liberación programada
### Limitaciones
- No es viable en todos los dominios, especialmente en sistemas con muchas dependencias, sistemas embebidos, o aquellos en ubicaciones de difícil acceso
### Facilidad de despliegue
- **Definición**: Propiedad del **software** que indica que puede ser **desplegado** en un entorno de ejecución dentro de un **tiempo, esfuerzo y riesgo predecibles y aceptables**
- Incluye la posibilidad de **revertir** el despliegue si no cumple con las especificaciones
- Es crucial para la entrega continua y despliegue continuo, permitiendo un despliegue rápido y confiable de los **cambios** en la **producción**
## Implicación del despliegue
- Diseñar para la facilidad de despliegue implica razonar sobre la pipeline de despliegue, **asegurando tiempos y esfuerzos predecibles** para el despliegue
	- Incluye **automatizar** el **proceso** de despliegue
	- **Minimizar** las **diferencias** entre entornos
	- **Separar** la **aplicación** y la **configuración**
### Medición de la Calidad del Pipeline de Despliegue
#### Tiempo de Ciclo
- Mide la rapidez con la que se avanza a través del pipeline
- Organizaciones con despliegues frecuentes (varias o cientos de veces al fía) requieren mínima intervención humana y coordinación entre equipos
#### Trazabilidad
- Capacidad de recuperar todos los artefactos que llevaron a un problema en un elemento
- Incluye código, dependencias, casos de prueba y herramientas utilizadas
- La información de trazabilidad es almacenada en una base de datos de artefactos
#### Repetibilidad
- Obtener el mismo resultado al realizar la misma acción con los mismos artefactos
- Ejemplos de desafíos: versiones de bibliotecas cambiantes y modificaciones de bases de datos por pruebas anteriores
## Aspectos a considerar en el Despliegue
### Llegada al Host: ¿Cómo llega el software a la máquina donde se ejecutará?
- **Método de Entrega**
	- Push: Las actualizaciones se despliegan automáticamente sin solicitud
		- Ej. Actualizaciones automáticas en sistemas operativos como Windows Update
	- Pull: Los usuarios o administradores deben solicitar explícitamente las actualizaciones
		- Ej. Descarga manual de parches y actualizaciones de seguridad en servidores Linux
- **Preguntas clave:**
	- ¿Cómo se entregan las actualizaciones a los usuarios?
	- Qué método es más adecuado para nuestro sistema?
**Integración en el sistema existente:** ¿Cómo el nuevo software o actualización se incorpora al sistema existente y cómo se ejecuta
- **Aspectos de integración:**
	- **Integración en caliente:** Capacidad de integrar y ejecutar software mientras el sistema está en funcionamiento
	- **Integración en frío:** Requiere detener el sistema antes de la integración
**Medio y empaquetado:** Formato en el que el software se empaqueta y el medio a través del cual se se entrega al host
- **Preguntas clave**
	- ¿Cuál es el medio más efectivo para nuestro entorno?
	- ¿El empaquetado actual maximiza la compatibilidad y la facilidad de uso
### Eficiencia y Control del Proceso de Despliegue
- Factores de Eficiencia
	- Uso de Recursos: Minimizar el impacto en la CPU, memoria y almacenamiento
		- Ej. Sistemas que utilizan tecnologías como Kubernetes para escalar automáticamente según demanda
	- Tiempo de Despliegue: Reducir el tiempo necesario para que la actualización esté lista para el uso
		- Uso de pipelines CI/CD optimizados para automatizar pruebas y despliegues
- **Preguntas clave**
	- ¿Cuánto tiempo y recursos se requieren para completar el despliegue?
	- ¿Se maximiza la eficiencia del proceso?
### Control del Proceso de despliegue
Capacidad para controlar y revertir el despliegue si es necesario
- Elementos de Control
	- **Versionado:** Gestión de diferentes versiones del software durante y después del despliegue
		- Uso de Git para gestionar cambios y controlar el despliegue de versiones específicas
	- **Acceso controlado:** Restricciones de quién puede desplegar y qué puede ser desplegado
		- Implementación de políticas de seguridad que requieren autenticación multifactor
- Preguntas clave
	- ¿Qué tan fácil es revertir un despliegue fallido?
	- ¿Qué mecanismos existen para monitorear y ajustar el despliegue?
## La arquitectura debería permitir despliegues...
### Granulares
- Permiten desplegar todo el sistema o elementos específicos de manera independiente
- **Beneficios:**
	- **Reducción de riesgos:** Al actualizar solo partes del sistema se minimiza el impacto de posibles errores
	- **Flexibilidad:** Facilita la implementación de nuevas funciones sin afectar el resto del sistema
- **Ejemplo**
	- Uso de microservicios para actualizar únicamente un módulo autenticación sin necesidad de redesplegar todo el sistema