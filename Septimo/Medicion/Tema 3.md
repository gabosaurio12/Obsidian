## Un proceso transforma una entrada en un resultado

1. Entrada
	- Historia, bug o solicitud
2. Actividades
	- Acciones que cambian el producto
3. Decisiones
	- ¿Pasa? ¿Se devuelve?
4. Roles
	- Quién ejecuta o aprueba
5. Salida
	- Resultado observable

**Regla de oro:** cada paso debe comenzar con un verbo y producir algo verificable
## Cómo construir el mapa sin complicarlo

1. Delimita -> Escribe dónde inicia y donde termina
2. Ordena -> Una acción por nota; conéctalas con flechas
3. Asigna -> Coloca cada acción en el carril del responsable
4. Decide -> Agrega preguntas Sí/No y sus rutas
5. Señala -> Marca espera, retrabajo o error en rojo
## Caso: botón de propina para el repartidor

> El cliente pide:
> "Quiero que el usuario pueda dejar propina al repartidor"
> Aún no es suficiente para desarrollar

**Antes de mapear aclaren:**
- ¿Monto fijo, porcentaje o ambos?
- ¿Cuándo se cobra la propina?
- ¿Puede modificarse o reembolsarse?
- ¿Quién visualiza el monto?

**Microreto: redacten un criterio de aceptación comprobable**

> El monto que se debe cobrar debe coincidir con el procentaje o monto fijo seleccionado

## Mapa de flujo

### 1. Definir
> Responsable -> Product owner
> Salida: Historia + criterios
### 2. Diseñar
> Responsable: Technical Lead
> Salida: API + datos
### 3. Desarrollar
> Responsable: Peer Developer
> Salida: Código + pruebas unitarias
### 4. Revisar
> Responsable: Peer Developer>
> Salida: PR Aprobado
### 5. Probar
> Responsable: QA (Quality Assurance)
> Salida: Evidencia de prueba
### 6. Desplegar
> Responsable: Development and Operations
> Salida: Función en vivo

## Ejercicio

**CASO: Recuperación de contraseña cuando el usuario no puede iniciar sesión**

Debe incluir:
- Inicio y salida
- 6-10 actividades
- 2 decisiones Si/No
- Flujo de error
- 1 espera o retrabajo
### 1. Definir
> Responsable -> QA?
> Salida: Historia + criterios
### 2. Diseñar
> Responsable: Backend
> Salida: API + datos
### 3. Desarrollar
> Responsable: Backend
> Salida: Código + pruebas unitarias
### 4. Revisar
> Responsable: QA
> Salida: PR Aprobado
### 5. Probar
> Responsable: QA y Usuario (pruebas de usabilidad)
> Salida: Evidencia de prueba
### 6. Desplegar
> Responsable: DevOps
> Salida: Función en vivo
### Usuario