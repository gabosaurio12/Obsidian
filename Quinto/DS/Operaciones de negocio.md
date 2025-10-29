- Son las funciones implementadas como parte de los servicios de negocio
- Encapsulan reglas de negocio
## Descubrimiento de operaciones de negocio
1. Proceso de descubrimiento:
	- Análisis de cada operación de la interfaz del sistema
	- Creación de uno o más diagramas de colaboración por cada operación
2. Uso de diagramas de colaboración:
	- Cada diagrama muestra interacciones y posibles flujos de ejecución
	- Representación visual de cada interacción como un flujo de ejecución distinto
3. Interacciones y flujos alternativos
	- Identificación de flujos alternativos importantes
	- Diseño de interacciones adicionales para abarcar estas alternativas
- Cada diagrama de colaboración es una herramienta de exploración para una operación específica
- Los flujos alternativos deben considerarse para una cobertura exhaustiva del comportamiento del sistema
## Ejemplos
### Operación getHotelDetails()
- Objetivo de getHotelDetails():
	- Proporcionar una lista de hoteles basada en un témrino de búsqueda
- Entradas de la operación:
	- Cadena para hacer "match" con nombres de hotel
- Salida de la operación:
	- Identificadores únicos de hoteles y una lista de tipos de habitaciones disponibles que cada hotel tiene
- Diseño de Respuesta:
	- Uso de identificadores para manejar nombres no únicos
	- Inclusión de tipos de habitación para futuras operaciones en el caso de uso
- Tipos de Datos estructurados
	- Definición de HotelDetails para organizar la información de retorno