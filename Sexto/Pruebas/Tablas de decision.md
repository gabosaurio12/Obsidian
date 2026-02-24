De caja negra
## Motivación
- Determinación de descuentos y promociones que aplican según políticas establecidas, en las "ventas nocturnas"
- Definir si un alumno puede o no inscribirse con determinada carga académica en créditos, en función de su avance reticular y condiciones del estatuto escolar
## Qué es una tabla de decisión
- Herramienta lógica y visual
- Organiza reglas de negocio complejas
- Formato tabular
### Estructura
- Identificación de condiciones: Detalla las situaciones variables que pueden ocurrir
- Identificación de acciones: Describe las acciones referentes a los distintos comportamientos según los valores de prueba

|                               | Reglas de decisiones   |
| ----------------------------- | ---------------------- |
| Identificación de CONDICIONES | Valores de condiciones |
| Identificación de ACCIONES    | Valores de acciones    |
## Tipos
### Entrada limitada
- Utiliza valores binarios para indicar los valores de condiciones y acciones
### Entrada extendida
- Se describe la acción que se debe ejecutar
### Entrada mixta
- Se combinan las características de entrada limitada y mixta
### Tablas limitadas o extendidas
- Las extendidas deben convertirse a limitadas
## Métrica de cobertura
### Cobertura de reglas
- Métrica principal, que indica que las pruebas han cubierto las reglas de negocio.
- CAda columna se considera una regla de negocio a detalle
### Cobertura de reglas negativas
- MIde si se han probado combinaciones de entrada que deberían ser imposibles o disparan excepciones de validación