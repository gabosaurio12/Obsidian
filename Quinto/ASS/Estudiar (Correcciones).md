## Contraseñas con MD5 y sal

**MD5** es un algoritmo de resumen de mensajes (Message-Digest Algorithm 5) que genera un id único de 128 bits (com un hash) a partir de cualquier entrada de datos.
Se usa para verificar la integridad de archivos, asegura que no se han modificado.
Ya no se considera seguro para la encriptación debido a vulnerabilidades de colisó. Se recomienda usar algoritmos modernos como SHA256 o SHA512.

**MD5 con sal** es la práctica de usar sal criptográfica para añadir aleatoriedad al hash MD5.

**Sal criptográfico** es un dato aleatorio que se añade a una contraseña antes de aplicarle un hash, asegurando que incluso contraseñas idénticas generen hashes únicos.

**MD5 sin sal:** Si dos usuarios tienen la misma contraseña, el MD5 genera el mismo hash
**MD5 con sal:** Al añadir una sal, el resultado final del hash será diferente para cada contraseña aunque sean iguales

**Contra qué protege**
Aumenta la seguridad y protege contra ataques de diccionario
## OAuth 2.0

Es un estándar abierto de autorización que permite a una aplicación (cliente) acceder a recursos protegidos en otro servidor (servidor de recursos) en nombre de un usuario, sin compartir las credenciales (usuario/contraseña).

Funciona mediante tokens de acceso temporales y acotados, concediendo permisos específicos (scopes), lo que mejora la seguridad, es como usar Google o Facebook para iniciar sesión en otra app, delegando acceso de forma controlada.
### Componentes clave

- **Dueño del Recurso (Resource Owner):** El usuario que posee los datos
- **Cliente (Client):** La aplicación que solicita acceso
- **Servidor de Recursos (Resource Server):** El servidor que aloja los datos protegidos (ej. Google Drive, Facebook)
- **Servidor de Autorización (Authorization Server):** Autentica al usuario y emite los tokens
### Ejemplo

1. El usuario quiere usar una app (Cliente) que necesita datos de Google (Servidor de Recursos)
2. La app redirige al usuario a Google para iniciar sesión y pedirle permiso
3. El usuario aprueba (ej. "Permitir acceso a mi perfil")
4. Google (Servidor de Autorización) emite un Código de Autorización (un token temporal) a la app
5. La app intercambia este código por un Token de Acceso (que expira) y un Token de Refresco (para obtener nuevos tokens)
6. La app usa el Token de Acceso para pedir datos a Google, sin haber visto la contraseña del usuario
### Flujos (Grant Types)

OAuth 2.0 tiene varios "flujos" para diferentes tipos de aplicaciones (web, móviles, dispositivos limitados), siendo el Código de Autorización con PKCE el más seguro para apps modernas
### Importancia

- **Seguridad:** Nunca compartes credenciales (usuario/contraseña) con apps de terceros
- **Control:** Los usuarios pueden revocar permisos en cualquier momento
- **Flexibilidad:** Permite acceso delegadoa a APIs, siendo estándar en Google, Facebook, Twitter, etc.

https://auth0.com/es/intro-to-iam/what-is-oauth-2
## JWS
## Cookies (Simples y medidas de seguridad)
## HTTP/HTTPS
