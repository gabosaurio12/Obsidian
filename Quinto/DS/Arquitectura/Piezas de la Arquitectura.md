### Características arquitectónicas
- **Son atributos de calidad o -ilities**
- **Criterios de éxito** del sistema más allá de la funcionalidad
- **Ejemplo**: La seguridad y la disponibilidad son más importantes que la interfaz gráfica
### Decisiones arquitectónicas
- Elecciones de diseño con impacto a largo plazo (si no tiene impacto a largo plazo no es una decisión arquitectónica
- Microservicios vs monolito; SQL vs NoSQL; política de redundancia
- "All architecture is about trade-offs" Richards & Ford
- [https://learning-oreilly-com.ezproxy.uv.mx/library/view/fundamentals-of-software/9781492043447/](https://learning-oreilly-com.ezproxy.uv.mx/library/view/fundamentals-of-software/9781492043447/)
- Ejemplo: Un banco que prioriza disponibilidad puede elegir redundancia de servidores a costa de mayor costo
### Componentes lógicos
- Bloques funcionales que representan el dominio
- Ejemplo: cuentas, pagos, préstamos, notificaciones
- No son el código final, sino abstracciones que guían el diseño y el mantenimiento
### Estilo arquitectónico
- Plantillas que definen cómo se organizan los componentes
- Qué atributos de calidad cuidarán los componentes
- Ejemplos: capas, cliente-servidor, microservicios, event-driven
### Caso de estudio: Banco Digital
- Usuarios acceden por **App móvil, Web y Cajeros automáticos**
- Un backend distribuido con microservicios maneja cuentas, pagos, créditos
	- Backend se usa para referirse a servidores
	- El backend distribuido es que va a estar en varias computadores
	- Microservicios poquitas solicitudes
- Los datos se guardan en bases de datos seguras (transacciones críticas y auditoría)
- La infraestructura es híbrida (nube + centro de datos propio) por temas de seguridad y regulación
- **CDN** es una Content Delivery Network (Red de Entrega de Contenido)
	- Es una red de servidores distribuidos geográficamente que acelera la entrega de contenido web a los usuarios
	- Funciona almacenando copias del contenido (imágenes, videos, etc.) en servidores más cercanos a los usuarios, reduciendo la latencia y mejorando la velocidad de carga de las páginas
	- Si alguien tiene Netflix y se mueve a Japón le darán video de la red de Corea, si se mueve a Reino Unido de Reino Unido y si se va a México de USA por ejemplo
### Características arquitectónicas
- **Seguridad**: cifrado y autenticación multifactor
- **Disponibilidad**: alta redundancia (99.99%)
- **Escalabilidad**: auto-scaling horizontal
	- Horizontal = Más hardware
- **Facilidad de evolución**: versionado de APIs
### Decisiones arquitectónicas
- Microservicios vs Monolito: se eligen microservicios para permitir releases independientes
- Separar cuentas y pagos
- Usar una DB transaccional para operaciones críticas
### Escenarios de calidad (light)
- **Disponibilidad**
	- Si un servidor falla en plena operación, otro entra de inmediato en funcionamiento para que el servicio no se interrumpa
		- El sistema sigue activo aún en caso de fallos
- **Escalabilidad**
	- En un día de quincena, cuando el número de transacciones se multiplica, el sistema agrega capacidad automáticamente para atender a todos los usuarios
		- Responde a picos de carga sin caerse
- **Seguridad**
	- Si alguien intenta acceder de forma no autorizada, el sistema detecta el intento y bloquea la entrada antes de que comprometa los datos
		- Se protege la información de accesos indebidos
- **Facilidad de evolución**
	- Si entra en vigor una nueva regulación, el sistema puede actualizarse rápidamente sin detener operaciones ni afectar a los clientes
		- Se adapta con agilidad a cambios externos
### Componentes lógicos
- **Cuentas**: apertura, saldos, movimientos
- **Pagos**: transferencias, SPEI, tarjetas
- **Créditos**: solicitud y pagos (amortizaciones)
- **Notificaciones**: correo, SMS, push
- **Cumplimiento normativo**: auditoría, antifraude, reportes regulatorios
### Estilo arquitectónico
- Microservicios distribuidos con mensajería asíncrona
- Integración con sistemas legacy vía adaptadores
- Observabilidad integrada - es un atributo de calidad
	- Son registros de lo que está pasando en nuestro sistema, como logs, métricas y tazas

### Conclusión
La arquitectura de un sistema bancario no es solo un diagrama bonito.
Son decisiones técnicas que permiten garantizar seguridad, continuidad en la operación y cumplimiento regulatorio.