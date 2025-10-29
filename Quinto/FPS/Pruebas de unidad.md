## Pruebas de caja blanca
- Cómo está programada una funcionalidad
- Nos metemos en el código
- ## Pruebas de caja negra
- No nos metemos en el código
- Solo se consideran los comportamientos esperados
## Pruebas de caja gris
- Consideramos el código
- Nos basamos completamente en los comportamientos esperados
## Características de la Prueba Unitaria
- Automatizables
	- Las herramientas libres no suelen ser tan poderosas como las de paga (suelen ser muy caras)
	- El beneficio se observa en:
		- Mantenimiento al probar los ecos que se pueden generar
	- Es redituable a largo plazo, no tanto en la etapa de depuración
- Completas
	- Tal vez no abarquen todo, pero que sí abarquen las zonas con mayor taza de error
- Repetibles / Reutilizables
	- No todos los casos de prueba son reutilizables
		- Porque si cambio alguna funcionalidad ya no servirá
- Independientes
	- Deben ser independientes del equipo en el que se ejecutan
- Profesionales
## Beneficios
- Fomentan la mejora continua
	- ¿Cuáles son los errores que más cometemos?
- Simplifican la integración
	- Los problemas se vuelven exclusivos de la integración, no del funcionamiento del módulo
- Documentan el código
- Pueden separar la interfaz de la implementación
	- Los CP analizan el comportamiento
- Los errores acotados son más fáciles de localizar
## Técnicas dinámicas
Las pruebas dinámicas unitarias pueden realizarse a través de diversas técnicas:
### Caja negra
- Partición de equivalencias
- Análisis de valores límite
- Pruebas de caso de uso
- Tablas de decisión
- Tablas de transición de estado
- Diagramas causa-efecto
### Caja blanca (flujos)
- Cobertura de sentencias
- Cobertura de condiciones
- Cobertura de caminos
### Basadas en la experiencia
