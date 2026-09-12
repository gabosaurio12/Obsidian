## Confidencialidad
- Solo las personas autorizadas deben tener permiso y acceso a la información
## Integridad
- Los datos deben preservarse
- Por ejemplo una cuando se almacena una matrícula solo debe asignarse a un estudiante, no a más
## Disponibilidad (Availability)
- La información debe estar disponible y poderse consultar cuando las personas autorizadas lo requieran
# Modelado de amenazas
- Según OWASP, es un proceso que permite identificar, cuantificar y abordar los riesgos de seguridad asociados a una aplicación.
## Metologías
### STRIDE
- Framework diseñado por Microsoft, son siglas:
	- Spoofing (suplantación de identidad)
	- Tampering (manipulación)
	- Repudiation (repudio)
	- Information dsiclosure
	- Denial of service
	- Elevation of privilege
### ASF
- Web Aplication Security Framework
### PASTA
- Process for Atack Simulation and Threat Analysis (PASTA)
### DREAD
- Damage, Reproducibility, Exploitability, Affected users, Discoverability
### VAST
- Visual, Agile and Simple Threat
## Preguntas clave
1. En qué estamos trabajando?
2. Qué puede ir mal?
3. Qué vamos a hacer al respecto?
4. Hicimos un trabajo suficientemente bueno?
## Etapas
1. Descomposición de la aplicación para entender cómo funciona
2. Determinar y clasificar las amenazas
3. Determinar contramedidas y mitigación
4. Determinar la eficiciencia de las acciones
### 1. Descomponer la aplicación
- Recopilar la información sobre la aplicación a modelar
- Identificar los niveles de confianza
- Evaluar las dependencias externas
- Identificar los puntos de entrada y de salida
- Listar los activos que podrían ser atacados
#### Plantilla
- Nombre de la app
- Versión de la aplicación
- Descripción
- Propietario del documento
- Participantes
- Revisor
### Determinar y clasificar amenazas
- Se emplean metodologías coo STRIDE para identificar de una forma sistematizada y repetible las amenazas
- Analizar amenazas, teniendo en cuenta la porbabilidad de que ocurra un ataque
### Determinar contramedidas y mitigación
### Comprobar la mitigación de la amenaza
- Ejecutar la aplicación en un entorno de prueba y comprobar puertos (que no acepte http o que utilicen TLS como debe estar configurado)
