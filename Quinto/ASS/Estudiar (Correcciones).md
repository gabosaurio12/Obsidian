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


## JWS
## Cookies (Simples y medidas de seguridad)
## HTTP/HTTPS
