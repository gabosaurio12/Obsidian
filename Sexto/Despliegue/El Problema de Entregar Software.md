## Comentarios del profesor
- Actualmente se usan metodologías ágiles
	- Scrum ya es casi un estándar
- La mejor solución para mantener un mismo ambiente entre la máquina de desarrollo y el servidor en el que se desplegará la aplicación es con contenedores.
	- Con estos ayuda a disminuir la cantidad de variables que pueden fallar
- Los cambios a ambientes se hacen de noche
- Los scripts son muy útiles para configurar
- Los fallos son cotidianos, no hay que juzgar, no importa cuántas veces te equivoques sigue intentando
	- "Falla lo más temprano posible"
## Antipatrones de liberación (release)
### Desplegar Software manualmente
La mayoría de aplicaciones de cualquier tamaño son complejas de desplegar. Muchas organizaciones liberan software manualmente.
Desplegar software manualmente es tratar a cada paso requerido para desplegar esa aplicación como individuo y atómico, cada uno llevado a cabo por un individuo o equipo.
#### Señales del antipatrón:
- La producción de documentación extensa y detallada que describe los pasos que se deben seguir y las formas en las que pueden salir mal
- Dependencia de pruebas manueales para cofnirmar que la aplicación está corriendo correctamente
- Llamadas frecuentes al equipo de desarrollo para explicar por qué el despliegue está fallando en el día de liberación
- Correcciones frecuentes al proceso de liberación durante el curso de la liberación
- Ambientes en un cluster con distinta configuración
	- Servidores de aplicación con diferentes connection pool settings, archivos de sistema con diferentes layouts, etc.
### Desplegar a un ambiente tipo producción solo cuando el desarrollo está completo
- Se debe desplegar de la misma forma en todos los ambientes
- Se debe hacer una integración lo antes posible
### Gestión de configuración manual de ambientes de producción
### Mentalidad reactiva en lugar de preventiva
- "Si algo falla lo componemos en el servidor"
	- Si se realiza esto y falla debemos detener el servidor y la gente no puede trabajar
## ¿Cómo podemos entregar software de manera rápida, confiable y con bajo riesgo?
**Entregando softare de manera continua**, como en las metodologías ágiles.
Pasos:
1. **Crear un proceso repetible y confiable para liberar software**
	- A este proceso se le llama _Pipeline_ (tubería)
2. Automatizar **casi todo**
	- Construcción
	- Pruebas
	- Despliegue
	- Provisionamiento de entornos
		- Enviar con un script por ejemplo a crear una máquina virtual con lo necesario
3. Usar controladores de versiones
	- **Git**
4. Desarrollar, probar y verificar en un entorno parecido al de producción
	- La mejor tecnología para esto son los **contenedores**
5. Probar lo más pronto y a menudo posible
6. Construir con calidad
	- La calidad se construye desde el **principio** y no se construye hasta el **final**
7. **Todos** somos **responsables** del proceso de entrega
8. Es ideal que cada vez que se termina de escribir código ya esté listo para liberarse
	- Cada _commit_ debe estar listo para producción (significa haberlo probado)
## DevOps
- Se busca un flujo continuo y reduce el trabajo
- Ayudó para ya no lanzar culpas