## Autenticación
- ¿Quién eres?
- Validación de credenciales
- Credenciales
- Datos biométricos
- MFA
- Certificados
- Tokens
## Autorización
- ¿Qué puedes hacer?
- Validación de permisos
- Modelos:
	- RBAC: Role-Based Access Control
	- ABAC: Attribute-Based Access Control
		- Usuario
		- Permiso
		- Dinero
		- Límite
	- Basada en política: Políticas que se definen en el aplicativo 
## Sesión
- Es una función de seguridad que mantiene la identidad y los datos confidenciales de un usuario seguros mientras navega por sitios web o aplicaciones
### Funcionalidad
- Un servidor asigna un identificador único a cada usuario cuando inica una sesión
- Esta información se usa para autenticar al usuario en cada solicitud posterior, como el inicio de sesión con una contraseña
### Aporte en seguridad
- Protege contra ataques como el robo de identidad (spoofing) e infracciones de datos
- Garantiza que solo el usuario legítimo tenga acceso a su cuenta
## Ataques a contraseñas
### 1. Fuerza bruta
- Es un ataque donde el atacante prueba todas las combinaciones posibles de una contraseña hasta encontrar la correcta
#### Cómo funciona
- Si la contraseña es "1234" prueba "0000", "0001", y así hasta que llegue al "1234"
- Entre más larga y compleja es la contraseña, más difícil es romperla con este método
#### Ejemplo
- Un login sin límite de intentos -> atacantes pueden usar bots para intentar miles de contraseñas por segundo
#### Mitigación
- Limitar intentos de login
- Captchas
- Contraseñas largas
- 2FA
### 2. Ataque de Diccionario
- Es como el de fuerza bruta pero más inteligente
- No prueba todas las combinaciones posibles, sino una lista de contraseñas comunes y probables
#### Cómo funciona
- El atacante tiene un archivo con contraseñas como:
	- password
	- 123456
	- qwerty
	- nombres
	- cumpleaños
	- palabras comunes
#### Ejemplo
- Si tu contraseña es perro123 un diccionario mezcla palabras comunes + números típicos y puede encontrarla "rápido"
#### Cómo se mitiga
- Usar contraseñas NO predecibles
- Bloqueo por intentos fallidos
- Sal y hash seguro
### 3. Fishing
- Engañar a una persona par que entregue su información sensible haciéndose pasar por una entidad confiable
#### Cómo funciona
- El atacante envía:
	- Un correo falso
	- Un mensaje de WhatsApp
	- Una página clonada
- Hace que el usuario entregue la información solicitada
#### Ejemplo
- Un correo que parece de banco diciendo
	"Tu cuenta será suspendida. Inica sesión aquí"
- Al dar clic te lleva a una página falsa -> tú mismo escribes la contraseña ahí
#### Mitigacón
- Revisar URLs
- No abrir enlaces sospechosos
- 2FA
- Correos con SPF/DKIM/DMARC
	- SPF -> Estándar técnico para verificar el correo electrónico
	- DKIM -> DomainKeys Identified Mail es un método de autenticación de correo electrónico que utiliza firmas digitales para verificar que un mensaje proviene de un remitente autorizado y no ha sido alterado en tránsito
	- DMARC -> Protocolo de seguridad que autentifica remitentes con SPF y DKIM
### 4. Robo de credenciales
- Cuando alguien obtiene tus credenciales directamente, no por adivinar ni engañarte
#### Cómo ocurre
- Malware (keyloggers que registran las teclas)
- Bases de datos filtradas
- Sniffing en redes públicas
- Acceso físico al dispositivo
- Captura de tokens de sesión
#### Ejemplo
- Instalas una app pirata -> trae un keylogger que captura todo lo que escribes
#### Mitigación
- Antivirus
- Evitar software pirata
- HTTPS
- 2FA
- Cambiar contraseñas luego de una filtración