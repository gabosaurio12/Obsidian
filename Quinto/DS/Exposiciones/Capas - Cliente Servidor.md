## Estilo Monolítico
Unidad de despliegue única de todo el código
- Arquitectura en capas
- Arquitectura de tuberías
- Arquitectura de microkerel
## Estilo Distribuido
Múltiples unidades de implementación conectadas a través de protocolos de acceso remoto
- Arquitectura basada en servicios
- Arquitectura impulsada por eventos
- Arquitectura basada en el espacio
- Arquitectura orientada a servicios
- Arquitectura de microservicios
## Particionado
Puede ser por **dominio** o por **enfoque**
**Tier/niveles:** Físico
**Layer/capas:** Lógico
## Propósito
- Qué tipo de problema arquitectónico es el que resuelve
- Qué necesidades o atributos de calidad atiende
- En qué contextos o dominios se aplica mejor el estilo
## Estructura y comportamiento
- Estructura y comportamietno dinámica de ese estilo
- Componentes y conectores
- Flujo de información y control entre esos componentes
- Restricciones que impone ese estilo arquitectónico
## Impacto en los atributos de calidad
- Atributos que favorece
- Atributos que debilita
- Tácticas o decisiones de diseño que suelen acompañar a esos estilos arquitectónicos para equilibrar esos atributos
## Ejemplos reales de esos estilos
- Que sistemas, frameworks y productos utilizan ese estilo arquitectónico
	- Banco digital (móvil)
		- Presentación: App móvil para ver saldo y hacer transferencias
		- Aplicación: Servicio "Transferir"
		- Negocio: Validar saldo, aplicar comiciones, límites diarios
		- Datos: Base de datos de cuentas + conexión a SPEI/SWIFT
	- Sistema de historial clínico
		- Presentación(UI): Página web
		- Lógica/Negocio:
		- Datos: Base de datos con los pacientes
- Evidencia de la efectidad del estilo
## Variantes y combinaciones de ese estilo arquitectónico
### Hexagonal y Clean Arquitecture
