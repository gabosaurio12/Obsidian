## Universidad
### Universidad Veracruzana
## Facultad
### Facultad de Estadística e Informática
## Carrera
### Ingeniería de Software
## Experiencia Educativa
### Taller de Pruebas
## Profesora
### María Angélica Cerdán
## Matricula
### S23014038
## Estudiante
### Gabriel Antonio González López

<div class="page-break" style="page-break-before: always;"></div>

## Captura de pantalla del error (Fase RED)
![[Captura de pantalla 2026-02-27 a la(s) 5.51.01 p.m..png]]
## Análisis del fallo
### ¿Qué esperaba el test?
- Que fallara porque es menor de edad.
### ¿Qué entregó la función?
- "ACCESO_CONCEDIDO".
### ¿Por qué el uso de OR en lugar de AND representa un riesgo de seguridad en este escenario?
- Porque conque se cumpla una condición dará acceso.
## Captura de Pantalla de Éxito (Fase GREEN)
![[Captura de pantalla 2026-02-27 a la(s) 5.55.04 p.m..png]]
## Código Final
```
def validar_registro(edad, tiene_id):
    if edad >= 18 and tiene_id:
        return "ACCESO_CONCEDIDO"
    else:
        return "ACCESO_DENEGADO"
```
## Autoevaluación
### ¿Qué fue más difícil: instalar la herramienta o entender por qué fallaba la lógica?
- Considero que ninguna de las dos fue difícil de hacer o instalar.
- Pip es un manejador para instalaciones de herramientas de python muy sencilla y cómoda de usar.
- Entender el por qué fallaba la lógica solo era leer la problemática planteada.