**Atributos de calidad:** Son propiedades medibles o comparables de un sistema que se usan para comparar qué tan bien satisface las necesidades de los interesados
## Tipos de cambio y su impacto
**Funcionales:** Adición, eliminación o modificación en las funcionalidades que el sistema ofrece
- Añadir una funcionalidad de búsqueda avanzada en una aplicación de comercio electrónico para mejorar la experiencia del usuario
**Tecnológicos:** Adaptaciones a nuevas plataformas o tecnologías
**Regulatorio:** Ajustes para cumplir con nuevas normativas
- Actualización de un sistema de gestión gubernamental para cumplir con los requisitos de protección de datos según la GDPR
**Capacidad y Escalabilidad:** Cambios para soportar más usuarios o aumentar la capacidad del sistema
- Escalar una aplicación web para manejar 10 veces más tráfico durante un evento de ventas masivas
	- Implica la adición de más servidores a un cluster
### Factores del cambio
- Qué puede cambiar
- Probabilidad de cambio
- **Cuándo y quien realiza el cambio**
	- Cualquier fase del desarrollo de software, pueden ser realizados por desarrolladores, usuarios finales, administradores del sistema o incluso el sistema mismo
- **Costo del cambio:** Involucra los recursos para implementar mecanismos para facilitar cambios y los recursos necesarios para realizar cambios
#### Qué puede cambiar
**Cualquier aspecto de un sistema**
- Las funciones que el sistema realiza
- La plataforma: El hardware, el sistema operativo, el middleware
- El entorno en el que opera: Los sistemas con los que debe interoperar, los protocolos que utiliza para comunicarse con el resto del mundo
- Las cualidades del sistema: Su desempeño, confiabilidad, futuras modificaciones y capacidad (número de usuarios soportados y de operaciones simultáneas)
#### Cuál es la probabilidad del cambio
- No es posible diseñar para todos los cambios potenciales pues es inviable
	- **Altos costos:** Incrementa significativamente el costo del desarrollo
	- **Problemas de calidad:** Podría comprometer otras dimensiones como rendimiento o seguridad
	- Priorizar cambios probables: Enfocarse en los cambios más probables durante el CDV
- Evaluación de impacto
	- Coste-beneficio: Analizar qué cambios son más rentables de soportar
### Cuándo se realizan los cambios
- En la implementación: Modificación directa del código fuente - Desarrolladores
- Durante la compilación: Uso de switches de compilación para adaptar el comportamiento - Usuarios finales
- Durante la construcción: Selección de bibliotecas específicas para la construcción del sistema - Administradores de sistemas
- En la configuración: Ajustes durante la configuración - Sistemas auto-adaptativos (el software se ajusta automáticamente en respuesta del entorno)
### Costo del cambio
**Dos tipos de costo**
### Cambio simple
- **Mecanismo**
	- Cambiar el código fuente directamente tras recibir una solicitud del cambio
- **Costos**
	- **Introducción**: Ninguno ya que no se introduce un mecanismo especial
	- **Realización**: Costo de modificar el código y revalidar el sistema
### Generador de Aplicaciones (Ej. Constructores de interfaces)
- **Mecanismo**
	- Uso de herramientas que generan código basado en la descripción de la UI
### Sistemas Auto-Adaptativos
- **Mecanismo**
	- Sistemas que detectan su entorno, aprenden y se modifican automáticamente
- **Costos**
	- **Introducción:** Alto, debido a la implementación y pruebas de mecanismos de aprendizaje
	- **Realización:** Casi nulo, ya que el sistema se modifica automáticamente
## Justificación del mecanismo
- **Considerar el costo de oportunidad:** Los recursos podrían destinarse a mejorar otras áreas
- **Evaluar el impacto temporal:** A veces es mejor un mecanismo a largo plazo, pero los plazos pueden limitar esta opción
- **Evitar deuda técnica:** Cambios continuos sin un mecanismo adecuado pueden acumular deuda técnica
## Deuda técnica
- **Elementos** (decisiones) de diseño o implementación que son convenientes en el corto plazo pero que crean un contexto técnico que puede hacer que un cambio futuro sea más costos o imposible
	- Limita las cualidades internas: mantenibilidad y la facilidad de evolución
	- Introduce complejidades adicionales y obstáculos que dificultan la implementación de cambios futuros
	- Existen diferentes tipos de deuda técnica
- **Ejemplos**
	- Parche rápido para corrección de errores
	- Uso de bibliotecas o frameworks obsoletos
	- Código duplicado en varias partes del sistema
	- Comentarios inadecuados o ausentes
## Evaluar el costo de los cambios
**N + Costo de hacer el cambio sin mecanismo ≥ Costo de crear el mecanismo + (N + Costo de hacer el cambio usando el mecanismo)**
- **N:** Número anticipado de modificaciones utilizando el mecanismo
- **Costo de hacer el cambio sin el mecanismo:** Costo de implementar cambios directamente en el código fuente cuando se necesite, sin ningún soporte o herramienta que facilite el proceso
- **Costo de crear el mecanismo:** Costo de desarrollar o adquirir un mecanismo que facilita futuros cambios en el software
- **Costo de hacer el cambio usando el mecanismo:** Costo de realizar modificaciones con el mecanismo. En general, es más bajo que hacer cambios directamente en el código
### Cómo interpreto esta fórmula
**N + Costo de hacer el cambio sin el mecanismo ≥ Costo de crear el mecanismo + (N + Costo de hacer el cambio usando el mecanismo)**
- Si el costo total de hacer N cambios sin un mecanismo es mayor o igual que el costo de crear el mecanismo más el costo de usarlo, entonces es justificable invertir en crear el mecanismo
### Costo de hacer el cambio sin el mecanismo
### Costo de crear el mecanismo
Esfuerzo inicial de desarrollar o adquirir un mecanismo que facilite futuros cambios, considerando la capacitación, integración y el desarrollo o adquisición de la herramienta
### Costo de hacer el cambio usando el mecanismo
Esfuerzo necesario para realizar modificaciones una vez que el mecanismo de modificabilidad está en su lugar
### Resumiendo
- Costo de hacer el cambio sin mecanismo: Tiempo de desarrollo, complejidad del código, pruebas
- Costo de crear el mecanismo: Desarrollo/adquisición