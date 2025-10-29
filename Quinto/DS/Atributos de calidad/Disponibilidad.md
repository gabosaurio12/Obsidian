- La capacidad de un sistema para estar disponible listo para realizar su tarea cuando se necesita
- Incluye la capacidad de recuperación tras una falla
- Relacionado con la fiabilidad, robustez y otros atributos de calidad
- Afecta la disponibilidad cuando no es planeada la pausa
- **Importancia:** Asegura que el tiempo de inactividad no exceda un valor requerido en un intervalo de tiempo especificado
- **Falla:** Desviación del sistema respecto a su especificación, que es visible externamente es el resultado final de un error en el sistema
- **Defecto(fault):** La causa de una falla. Puede ser un defecto en el código, diseño o en el proceso
- **Error:** Acción incorrecta realizada por un desarrollador o usuario que introduce un defecto en el sistema
- **Resiliencia:** Capacidad del sistema para prevenir, tolerar, eliminar o anticiparse a defectos para evitar que se conviertan en fallas
## Disponibilidad y otros atributos
- Disponibilidad y Seguridad:
	- Un ataque de denegación de servicio (DoS) busca hacer que un sistema no esté disponible
- Disponibilidad y Rendimiento:
	- Un sistema lento puede confundirse con un sistema que ha presentado una falla
- Disponibilidad y Protección:
	- Evita que el sistema entre en un estado peligroso y limita el daño en caso de fallas
### Comprensión de las fallas
- **Desafío Principal:** Identificar y entender la naturalidad de las fallas que pueden surgir durante la operación del sistema
- **Importancia:** Una vez comprendidas, se pueden diseñar estrategias de mitigación efectivas
### Mitigación de Fallas
- Diseñar el sistema para minimizar el impacto de las fallas y reducir el tiempo de inactividad
### Observabilidad de las fallas
- **Definición:** Una falla es observable cuando es perceptible por los usuarios, ya sea a través de retraso o una interrupción más significativa
- **Tiempo de reparación:** El tiempo necesario para que la falla deje de ser observable por los usuarios
- **Ejemplo extremo:** El tiempo que toma enviar a a alguien a reparar una máquina en una ubicación remota
- **Modo degradado**: Nivel de capacidad que queda cuando se produce una falla
### Gestión de fallas
1. **Prevención:** Evitar la introducción de defectos en el sistema
2. **Tolerancia:** Diseñar el sistema para que continúe operando correctamente incluso si se produce una falla
3. **Eliminación:** Detectar y corregir defectos para evitar que causen fallas
4. **Predicción:** Anticipar la aparición de fallas y tomar medidas preventivas
- **Resiliencia:** Un sistema se vuelve resiliente al manejar adecuadamente las fallas a través de las acciones mencionadas
### Medición de la Disponibilidad
- La probabilidad de que el sistema proporcione los servicios especificados dentro de los límites requeridos durante un intervalo de tiempo determinado
#### Fórmula para calcular la Disponibilidad
	Disponibilidad = MTBF / (MTBF + MTTR)
	Falla = 1 - Dispnibilidad
- **MTBF** (Tiempo Medio Entre Fallas): Promedio de tiempo que el sistema opera sin fallar
- **MTTR** (Tiempo Medio de Reparación): Promedio de tiempo necesario para reparar el sistema tras una falta
##### Interpretación en Software
- **MTBF:** Evalúa qué factores podrían causar la falla del sistema y con qué frecuencia pueden ocurrir
- **MTTR:** Considera cuánto tiempo se necesitará para reparar el sistema después de una falla
- **Importancia:** Esta fórmula es fundamental para cuantificar la disponibilidad y planear estrategias de mantenimiento y recuperación
#### MTBF (Tiempo Medio Entre Fallas)
- Este valor se calcula dividiendo el tiempo de operación del sistema entre el número total de fallas ocurridas durante ese tiempo
- Ejemplo: Si un servidor ha funcionado 10,000 horas y ha fallado 5 veces, su MTBF es de 2,000 horas
#### MTTR (Tiempo Medio de Reparación)
- Se calcula dividiendo el tiempo total dedicado a reparar fallas entre el número de fallas reparadas
#### Ejemplo
- El sistema tiene una disponibilidad del 99.999% o
- Hay una posibilidad del 0.001 de que el sistema no esté disponible cuando se necesite
### Tiempos de Inactividad Programados
- **Definición:** Periodos en los que el sistema se detiene intencionalmente de servicio
- **Impacto en la Disponibilidad:** Los tiempos de inactividad programados no se consideran en el cálculo de la disponibilidad ya que se asume que el sistema "no es necesario" durante esos tiempos (Eminus en épocas de vacaciones por ejemplo)
### Service Level Agreement (SLA)
- **Definición:** Un SLA especifica el nivel de disponibilidad garantizado por el proveedor de un servicio
	- También suele incluir las penalizaciones aplicables si no se cumple el nivel de servicio acordado
- Ejemplo de SLA - Amazon EC2
	- **Compromiso de Servicio:** Amazon se compromete a mantener un porcentaje de tiempo de actividad mensual de al menos 99.999% en cada región de AWS
	- **Compensación:** Si los servicios incluidos no cumplen con el compromiso de servicio, os clientes son elegibles para recibir un crédito de servicio
### Alta disponibilidad
- Se refiere a diseños que apuntan a una disponibilidad de 99.999% o superior (conocido como 5 nueves)
- Solo las interrupciones no programadas se consideran en el cálculo del tiempo de inactividad del sistema
#### Requisitos de Disponibilidad
- Los SLA suelen especificar los requisitos de disponibilidad incluyendo valores umbrales aceptables para el tiempo de inactividad medido en periodos de observación de 90 días o un año
## Actividad: Cálculo de Disponibilidad
- El sistema ha operado 100,000 horas
- En ese tiempo se han registrado 10 fallas y se han dedicado 20 horas a reparaciones
MTTR = tiempo de reparación / fallas = 20 / 10 = 2
MTBF = Hrs operando / fallas = 100000 / 10 = 10000
D = MTBF / (MTBF + MTTR) = 10000 / (10000 + 2) = 0.99980004
### Escenario 2
8 Fallas
4320 horas
16 hrs de reparación
MTTR = 2
MTBF = 540
D = 0.9963
### Escenario 3
15 fallas
15000 horas
60 hrs reparación
MTTR = 4
MTBF = 1000
D = 0.99601
### Escenario 4
12 fallas
2160 horas
72 hrs de reparación
MTTR = 6
MTBF = 180
D = 0.967741

# Investigación
- Estándares cuyo objetivo sea definir atributos de calidad
	- **Familia ISO/IEC 25000**
		- SQuaRE: System and Software Quality Requirements and Evaluation
			- Reglas internacionales enfocadas en la calidad y evaluación de sistemas y productos de software
	- **ISO/IEC 25010** - Estándar que define un modelo comprensible de calidad de software y las características (atributo) que describen la calidad de los productos de software
	- **IEEE Std 1062** - Detalla las métricas de calidad del software
	- **IEEE Std 730** - Cubre los planes de QA (Quality Assurance)
		- Provee los requisitos uniformes, mínimos aceptables para la planeación de QA, así como el formato que deben tener dichos planes y su contenido, se une con el **IEEE/EIA 12207**
	- **IEEE 1633** - Tiene técnicas para administrar y mejorar la fiabilidad del software (reliability)
		- Métodos para evaluar y predecir la fiabilidad del software basados en un  acercamiento al ciclo de vida
- Estándares de privacidad
	- **GDPR** - El más importante, requiere completa legalidad, transparencia, fairness, limitación de propósito, el mínimo de información, limitación de almacenamiento, integridad y contabilidad.
		- Reglamento General de Protección de Datos
		- Ley de la unión europea que establece normas para proteger los datos personales de los residentes y darles control sobre esa información
		- Afecta a todas las organizaciones sin importar donde estén ubicadas si procesan datos de ciudadanos de la UE
	- **ISO/IEC 27701** - Para sistemas de administración de privacidad de información
	- **ISO/IEC 27001**
	- **ISO/IEC 27550**
	- **IEEE 7002-2022** - Estándar para procesos de la Privacidad de Datos
		- Es independiente de productos, servicios y sistemas
		- Define requisitos para sistemas de procesos de ingeniería orientados a la privacidad, se extiende por el ciclo de vida desde políticas a desarrollo, QA y valoración 
- Estándares de seguridad
	- **ISO/IEC 27001:2022** - Provee requisitos para un ISMS (Information Security Management System) para proteger los activos de información.
		- Ofrece un framework para el manejo de riesgo y controles de seguridad
	- La IEEE no cuenta con estándares para la seguridad, pero sí algunos relacionados
		- **IEEE P1228** - Protección crítica de software
		- **IEEE P3390** - Seguridad para software de código abierto
- Fiabilidad (Reliability) - Probabilidad de que el software hará las funciones requeridas sin fallas por un tiempo en específico en un ambiente específico
- Robustez
	- Desarrollar sistemas que puedan manejar errores, entradas inválidas y condiciones ambientales inesperadas de manera segura y eficiente, sin fallar o bloquearse