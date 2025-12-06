Es la protección brindada a un sistema de información automatizado para alcanzar los objetivos aplicables de preservar la CIA de los recursos (software, hardware, firmware, etc).

**Confidencialidad**
- Confidencialidad de datos: la información no está disponible para individuos no autorizados
**Privacidad** 
- Individuos controlan quienes pueden ver y/o almacenar su información o para quienes está dirigida
**Integridad**
- Integridad de datos: asegura que los datos yu los programas pueden ser modificados solo en una forma específica y autorizada
- Integridad del sistema: asegura que un sistema realiza su función prevista de una forma intacta, libre de deliberada, inadvertida y/o no autorizada manipulación del sistema
**Disponibilidad**
- Asegura que el sistema funciona adecuadamente y el servicio no es negado para usuarios autorizados
## Recomendaciones
- Inyección
	- Validar entradas
	- Escapar/limpiar valores
	- Consultas parametrizadas
	- Consultas parametrizadas
	- Utilizar herramientas y/o frameworks en lugar de crear todo manualmente
		- SQL
		- JPA
		- Sistema Operativo
		- XML
		- Javascript
		- LDAP
## Análisis estático de código
- Es el proceso de evaluar código sin ejecutarlo
- Una herramienta de análisis estático puede explorar varios escenarios "what if"
- Buenas herramientas proveen una forma consistente y detallada de la evaluación de código
### Ventajas
- Verificación de tipos
- Verificación de estilo
- Verificación de propiedades
- Búsqueda de defectos
- Revisión de seguridad
### Desventajas
- Falsos positivos
- Falsos negativos