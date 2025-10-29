Es una medida de la capacidad del sistema para proteger datos e información. Controla el acceso no autorizado, mientras permite el acceso a personas y sistemas autorizados
## Características clásicas: CIA
- **Confidencialidad:** Propiedad que garantiza que los datos o servicios estén protegidos contra el acceso no autorizado
	- **Objetivo:** Que no haya filtración de información
	- **Ejemplo:** Cifrado de datos sensibles para protegerlos contra accesos no autorizados
	- En STRIDE es la Information Disclosure
- **Integridad:** Propiedad que garantiza que los datos o servicios no sean manipulados de manera no autorizada
	- **Objetivo:** Prevenir la modificación o eliminación no autorizada de los datos
	- **Ejemplo:** Controles de acceso que aseguran que solo usuarios autorizados puedan modificar registros
	- En STRIDE es el Tampering
- **Disponibilidad:** Propiedad que garantiza que el sistema esté disponible para el uso legítimo (Availability)
	- **Objetivo:** Evitar retrasos significativos o apagados no autorizados
	- **Ejemplo:** Implementación de redundancia en servidores para prevenir tiempos de inactividad
	- En STRIDE es el Denial of Service
## Estándar de oro
- **Autenticación:** Es el proceso de verificar que alguien es quien dice ser
	- **Objetivo:** Asegurar que solo usuarios autorizados puedan acceder al sistema
	- **Ejemplo**: Cuando inicias sesión en un sistema web y te piden tu nombre de usuario y contraseña. el sistema web verifica que la información proporcionada coincide con la que tiene registrada para confirmar tu identidad
	- Uso de autenticación multifactor (MFA) para verificar la identidad de un usuario
	- En STRIDE es el Spoofing
- **Autorización:** Es el proceso de asegurarse de que solo las personas correctas pueden hacer ciertas cosas en el sistema
	- **Objetivo:** Garantizar que solo los usuarios con los permisos adecuados puedan realizar ciertas acciones
	- **Ejemplo:** Después de iniciar sesión, el sistema verifica qué acciones puedes realizar, como acceder a ciertas funciones, editar archivos o cambiar configuraciones. Solo puedes hacer lo que te está permitido
	- En STRIDE es la Elevation of Privilege
- **Auditoría:** Es el proceso de mantener un registro de todas las acciones que realiza el sistema por cada usuario
	- **Objetivo:** Proporcionar un historial de actividades para la detección y prevención de abusos
	- **Ejemplo:** Un registro de auditoría puede mostrar quién accedió a un archivo, cuándo lo hizo y qué cambios realizó. Esto ayuda a rastrear actividades y prevenir abusos
	- En STRIDE es la Repudiation
- **Ataque**
	- Acción realizada contra un sistema informático con la intención de causar daño y puede tomar varias formas
	- Ejemplos:
		- Intento no autorizado de acceder a datos o servicios
		- Intento de modificar datos de forma no autorizada
		- Intento de negar servicios a usuarios legítimos (DoS)
- **Superficie de Ataque (Attack Surface)**
	- Totalidad de puntos de entrada que un atacante o usuario podría usar para lanzar un ataque
	- Entre más amplia sea más expuesto está el sistema
	- **Ejemplo**:
		- El casco de un barco es una superficie de ataque para un torpedo
		- En Software una aplicación con muchas APIs expone una superficie de ataque más grande que una con menos interfaces
- **Amenaza**
	- Es cualquier circunstancia o evento con potencial de causar daño a un sistema de información a una organización mediante acceso no autorizado, destrucción, divulgación, modificación o denegación de servicio
		- **Intencionales:** Acciones deliberadas como ataques cibernéticos
		- **Accidentales:** Errores humanos o desastres naturales que pueden comprometer la seguridad del sistema o la integridad de la situación
	- **Ejemplos**
		- Ciberataque: Un hacker intenta obtener acceso no autorizado
		- Error humano: Un empleado borra accidentalmente archivos importantes
		- Desastre natural
- **Categorías de amenazas**
	- **Spoofing -** Fingir ser algo o alguien que no eres
	- **Tampering -** Modificar algo que no se debería modificar
	- **Repudiation -** Afirmar que no hiciste algo, independientemente de si lo hiciste o no
		- Algunos atacantes se borran de los logs
	- **Information Disclosure (Divulgación) -** Exponer información a personas que no están autorizadas para verla
	- **Denial of Service -** Ataques diseñados para impedir que un sistema proporciones un service
		- Ransomware 
	- **Elevation of Privilege -** Cuando un programa o usuario puede realizar acciones para las que no tiene permiso
		- Inyección SQL
## Agentes o actores (Threat agents)
- Es cualquier individuo o grupo que puede manifestar una amenaza contra los activos de una organización
- **Importancia:** Identificar quién podría explotar los activos y cómo podrían hacerlo es clave para la seguridad
### Tipos de agentes
- **No específicos al objetivo:** Virus informáticos, gusanos, troyanos
- **Crimen organizado:** Criminales que buscan información valiosa como cuentas bancarias o propiedad intelectual
- **Empleados:** Personal molesto, contratistas, personal de mantenimiento
- **Corporaciones:** Competidores o socios involucrados
- **Humano no intencional:** Accidentes, descuidos
- **Humano, intencional:** Insiders malintencionados, atacantes externos
- **Natural:** Desastres naturales
## Acciones potenciales de los Agentes
- **Acceso no autorizado:** Acceso a activos sin permiso
- **Uso indebido:** Uso de activos para propósitos no autorizados, como robo de identidad
- **Divulgación:** Revelación de información sensible
- **Modificación:** Cambios no autorizados en los activos
- **Denegación de Acceso:** Destrucción o robo de activos (assets)
## Impacto de ls Acciones de los agentes
- Pérdida de Productividad: Depende de la criticidad del activo
- Pérdida de Ventaja Competitiva: Divulgación de información sensible puede afectar la reputación 
- Pérdida de activos
# Privacidad
Es el control que un individuo tiene sobre la recolección uso y difusión de su información personal
**Objetivo:** Proteger la información personal identificable (PII) y garantizar que solo personas o sistemas autorizados tengan acceso e ella
**Relación con la Seguridad:** La seguridad ayuda a proteger la privacidad implementando medidas que previenen el acceso no autorizado y aseguran que solo las personas correctas tengan acceso a la información sensible

| Seguridad                                                                             | Privacidad                                                              |
| ------------------------------------------------------------------------------------- | ----------------------------------------------------------------------- |
| Protección de sistemas y datos contra accesos no autorizados                          | Control del uso y difusión de la información personal                   |
| Se enfoca en la confidencialidad, integridad y disponibilidad de la información (CIA) | Se enfoca en los derechos del individuo sobre su información personal   |
| **Ejemplo:** Proteger una base de datos contra hackers                                | **Ejemplo:** Limitar quién puede ver datos personales en una red social |
| Mecanismos para preservar la privacidad                                               | Es un derecho                                                           |
## Modelado de amenazas
Proceso de identificar sistemáticamente las amenazas a un sistema de software para poder registrarlas, rastrearlas y mitigarlas. Implica dibujar un diagrama del sistema, identificar límites de confianza y considerar amenazas realistas
**Objetivo:** Determinar los posibles ataques que pueden comprometer la confidencialidad, integridad o disponibilidad (CIA) de un sistema
**Enfoque Proactivo:** Permite a los ingenieros diseñar e implementar medidas para prevenir o mitigar amenazas antes de que ocurran
- STRIDE
- PASTA
### Importancia
- Identificación de amenazas
- Diseño de contramedidas
- Reducción de Riesgos
### Modelos en el modelado de amenazas
- Un modelo de sistema es una abstracción o representación de un sistema diseñado para ser analizado en busca de amenazas
- Ayuda a visualizar cómo los cambios en el diseño del sistema pueden afectar su seguridad y facilita la identificación de posibles vulnerabilidades