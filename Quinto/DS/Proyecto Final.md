## Visión
Sistema centralizado de reservaciones para maximizar ocupacón, simplificar operación y asegurar trazabilidad
## Propósito
Desarrollar un sistema de reservaciones centralizado que permita:
### Gestionar el ciclo de vida de la reserva
Consulta de disponibilidad básica, pago en línea al reservar, confirmación, registro de consumos y trazabilidad de cambios de tarifa
### Maximizar ocupación
Política de overbooking del 10% por tipo de habitación y fecha, previniendo dobles reservas
### Eficiencia operativa
Interfaz para que recepcionistas novatos ejecuten tareas básicas tras ~10 minutos de instrucción
### Administración centralizada
Control de tarifas dinámicas por día, inventario y políticas de negocio
## Objetivo de la primera versión
- Flujo de reserva extermo a extremo (disponibilidad mínima -> confirmación -> pago)
- Operaciones esenciales de recepición: **check-in /check-out**
## Actores
- **Huesped (web/app):** Consulta, reserva, paga y cancela
- **Recepción (hotel):** check-in, check-out, cambios de habitación, registro de consumos
- **Administración (cadena/hotel):** Catálogo, precios diarios, políticas de overbooking
- **Auditoría y cumplimiento:** trazabilidad de operaciones
## Metas
- **Eficiencia en recepción:** Tareas básicas operables por personal novato con ~10 minutos de isntrucción
- **Confianza en la reserva:** Evitar dobles reservas y dobles cobros; consistencia
- **Control y visibilidad centralizados:** Sobre inventario, precios y overbooking
## Alcance
### Canales y pago
- Sitio web y app oficiales de la cadena
- Pago: monto completo al reservar
### Inventario y backoffice
- Overbooking 10% por tipo/fecha
- Backoffice básico: hoteles, tipos de habitación, habitaciones, precios diarios
## Fuera de alcance
- Búsquedas complejas (filtros avanzados, recomendaciones)
- Integraciones con Agencias de vijaes en línea, contabilidad o fidelidad
- Otras funciones no escenciales (p. ej., programación del personal, facturación)
## Funcionalidad esperada
- Reserva con pago
- Consulta de disponibilidad mínima
- Check-in, check-out
- Registro de consumos/servicios
- Administración de precios por día
## Restricciones
- Modelo de pago: pago completo al reservar
- Política de inventario: overbooking 10% por tipo/fecha
- Datos: RDBMS para reservas y pagos (evitar dobles cargso y dobles reservas)
## Preocupaciones
- Gestión de inventario bajo concurrencia