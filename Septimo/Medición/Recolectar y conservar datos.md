Un análisis convincente puede fracasar si los registros mezclan reglas, periodos o contextos.

>**Pregunta de entrada**
> Qué tendría que saber otra persona para confiar en cada valor?

## La recolección también tiene entradas, controles y salidas

### Diseñar
- Campos, reglas y momento de captura
### Capturar
- Registrar cerca del evento
### Validar
- Detectar faltantes y rangos imposibles
### Entregar
- Conservar contexto y trazabilidad
### Revisar
- Corregir el método si genera errores

> La calidad del inidcador depende también de la calidad del proceso que lo produce

## Cuatro fallas comunes cambian la historia que cuentan los datos

**Secuencia**
Ordenar por fecha de cierre oculta cuándo comenzó la espera.

**Contexto**
Mezclar versiones o equipos crea comparaciones injustas

**Redondeo**
Convertir 1.4 y 1.6 horas en 2 elimina variación útil

**Método**
Cmabiar la regla a mitad del proyecto crea un falso cambio

## Cuatro criterios antes de analizar

| Criterio     | Pregunta de control                        | Ejemplo de falla                  |
| ------------ | ------------------------------------------ | --------------------------------- |
| Veracidad    | ¿El valor y el cálculo son correctos?      | Duración negativa                 |
| Sincronía    | ¿Las variables pertenecen al mismo evento? | Defecto de otra versión           |
| Consistencia | ¿La regla fue la misma?                    | Un equipo cuenta reaperturas      |
| Validez      | ¿Representa el atributo?                   | Commits usados como productividad |

## Detective de datos

**Situación**
Una base de tiempos mezcla horas y días, contiene una fecha vacía, un registro de otra versión y un cambio de reglas desde la semana 4.

**Tu misión**
Marca cada problema con V, S, C o VA: veracidad, sincronía, consistencia o validez. Después decide qué registros corregir, separar o excluir.

**Entrega**
Una lista priorizada de problemas y una frase sobre si la comparación todavía es defendible.

| Problema                 | Marca | Solución                                     |
| ------------------------ | ----- | -------------------------------------------- |
| Mezcla de horas y días   | V     | Separar horas y días                         |
| Contiene una fecha vacía | C     | Ver si puedo estimarla                       |
| Registro de otra versión | S     | Excluír si los registros son de otra versión |
| Cambio de reglas         | C     | Corregir a las reglas actuales               |
