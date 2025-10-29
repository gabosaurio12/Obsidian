## Imposibilidad de Pruebas Exhaustivas
Esta es la limitación más citada (*Principio n° 2 de pruebas*)
- **Combinaciones infinitas:** En la mayoría del software, la cantidad de posibles combinaciones de datos de entrada, condiciones, entornos de hardware y secuencias de operaciones es **prácticamente infinita.** Probarlas todas consumiría una cantidad de tiempo y recursos ilimitada
- **Decisión necesaria:** Debido a esta limitación, el *testing* siempre debe ser selectivo. Los *testers* deben utilizar técnicas como la **Partición de Equivalencia** y el **Análisis de Valores Límite** para reducir el número de casos de prueba a un conjunto manejable y de alto impacto.
## Las pruebas demuestran presencia no ausencia de defectos
Se mencionó en la frase célebre de Dijkstra (*Principio n° 1 de pruebas*)
- **Falsos negativos:** Si una prueba no encuentra un bug, solo significa que el bug no se manifestó bajo esas condiciones específicas; no prueba que el sistema esté libre de defectos. **Un testing exitoso significa que se encontraron defectos**, no que el software es perfecto
- **Riesgo Remanente:** Siempre queda un riesgo de defectos no descubiertos (residual risk) que pueden manifestarse solo en producción
## Limitaciones de Tiempo y Presupuesto
En un entorno de desarrollo real, el tiempo y el dinero son finitos:
- **Presión del mercado:** Los lanzamientos bajo presión suelen obligar a limitar la profundidad o alcance de las pruebas
- **Compromiso de calidad:** La gerencia a menudo debe equilibrar el *riesgo* de liberar software con defectos contra el *costo* de retrasar el lanzamiento para probar
## Paradoja del Pesticida
Esta es la limitación relacionada con la repetición (*Principio n°5 de pruebas*)
- Si se ejecutan las mismas pruebas repetidamente (incluso automatizadas), se vuelven ineficaces para encontrar nuevos defectos ya que los *bugs* originales ya fueron corregidos
- **Necesidad de actualización:** Los *testers* deben **actualizar, variar y crear continueamente nuevas pruebas** y enfoques para seguir encontrando defectos
## El factor humano (sesgos)
El *testing* es realizado por humanos, lo que introduce sesgos y errores:
- **Sesgo del desarrollador:** Los programadores que pureban su propio código tienden a probar lo que *creen* que escribieron y no lo que realmente está ahí
- **Limitación de la documentación:** Si los requisitos del sistema son ambiguos, incompletos o incorrectos, las pruebas basadas en ellos también serán incorrectas o incompletas. 
- Las pruebas solo pueden ser tan buenas como la especificación en la que se basan
## Grado de automatización
Automatizar ciertos aspectos del diseño de pruebas es probablemente imposible.
El beneficio de la automatización es agilizar la aplicación de los casos, lo que ahorra tiempo y esfuerzo en el desarrollo y aplicación del control de calidad.
## Dependencia de la especificación
La prueba usa como punto de referencia los requerimientos y demás especificaciones de ingeniería y estos pueden ser incorrectos o estar incompletos.
- Si se diseña la prueba bajo supuestos requeridos incorrectos, la prueba no va a descubrir los errores verdaderos
- Es necesario implementar un sistema de gestión de calidad completo, que no sólo se base en la prueba