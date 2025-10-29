- Una **arquitectura** es un conjunto de decisiones de diseño
- Esas decisiones nos ayudan a cumplir con cierta funcionalidad y asegurar los requisitos de atributos de calidad
- **Táctica =** decisión de diseño para controlar la respuesta a un estímulo
- Las tácticas son los bloques constructivos de los **patrones arquitectónicos**
- Un patrón arquitectónico combina varias tácticas para resolver problemas recurrentes
## ASR
Un ASR debe cumplir:
- **Impacto profundo en la arquitectura**
	- Si no se incluye probablemente se termine con otra arquitectura
- **Alto valor para el negocio**
	- Debe ser fundamental para los interesados
Los ASR casi siempre se capturan como escenarios de atributos de calidad
Según **ADD**::
- Algunos ASRs ligados a un CU específico
## Utility Tree
Es una herramienta para **registrar** los ASRs en un solo lugar
Permite establecer prioridades en dos dimensiones:
- Impacto en la arquitectura
- Valor para el negocio
Cada hoja del árbol = un **escenario de calidad priorizado**
### Estructura del utility tree
#### Raíz
- Utility (representa la bondad o calidad global del sistema)
#### Nivel 2
- Categorías amplias de atributos de calidad (Availabilty, Performance, Security, Usability, Modificability, etc)
#### Nivel 3 
- Refinamientos de cada atributo (ej. Performance -> latencia, Throughput)
#### Nivel 4:
- Escenarios concretos (ASRs priorizados con BV/TR)
#### Nota:
El refinamiento ya debe ser medible, por lo que debe acercarse a un criterio que pueda convertirse en escenario
#### Ejemplo
Performance -> Latencia -> "Inicio de reproducción < 250ms(P95)"
## Características de un buen refinamiento
- **Es específico y observable:** En vez de decir "la interfaz es bonita", un buen refinamiento dice "el botón de compra cambia de color al hacer hover". Define un comportamiento o una propiedad que puedas ver, sentir o percibir directamente
- **Es verificable:** No es suficiente con describirlo; tiene que ser algo que se pueda probar
- **Es cuantificable:** Incluye números. Un buen refinamiento tiene un umbral (un valor límite), una unidad y un contexto
	- Por ejemplo: En lugar de "el sistema es rápido" se diría "la respuesta se entrega en menos de 500ms"
- **Es accionable:** Un refinamiento debe guiar al equipo de desarrollo. Si un requisito dice que la eguridad debe ser "buena" ¿Qué le dice eso a un arquitecto de software? Un buen refinamiento diría "El sistema ddebe usar autenticación multifactor", permite al equipo diseñar y practicar las tácticas de implementación
## Desempeño - Refinamiento: Latencia
### Mal
"Tiempo de respuesta rápido"
- **¿Por qué es malo?**
	- Es vago, no sabemos para qué operación, bajo qué carga, ni cual es el limite aceptable de tiempo
### Bien
Ante una falla el proceso de Auth, el servicio se recupera en estado operativo en 60s (MTTR), manteniendo la página de login disponible con un mensaje de espera
### Análisis
Establece métrica realista (MTTR), umbral de tiempo, contexto (falla en Auth) y un comportamiento deseado (mensaje de espera)
## Eficiencia energética - Refinamiento: Consumo por transacción
### Mal
"Que consuma poca energía"
- **¿Por qué es malo?** "Poca" es subjetivo. No tiene unidad de medida ni contexto de carga
### Bien

## Quality Attribute Scenario (QAS)
- **Fuente** (quien): actor/sistema que origina el estímulo
- **Estímulo** (qué): evento/solicitud/falla/ataque
## Cosas a tener en cuenta
- La táctica debe estar representada en la descripción del caso de uso