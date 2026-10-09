# Índice
```table-of-contents
title: 
style: nestedList # TOC style (nestedList|nestedOrderedList|inlineFirstLevel)
minLevel: 0 # Include headings from the specified level
maxLevel: 3 # Include headings up to the specified level
```
<div class="page-break" style="page-break-before: always;"></div>

# 1. Fundamentos y modelos

## 1.1. Fundamentos

### ¿Qué es una red?

Una **red informática** es un conjunto de dispositivos que intercambian información mediante protocolos y medios de comunicación.

Los elementos básicos son:

- **Host:** dispositivo conectado a una red.
- **Cliente:** inicia una comunicación.
- **Servidor:** ofrece un servicio.
- **Router:** conecta redes diferentes.
- **Switch:** conecta dispositivos dentro de una misma red.
- **Access Point:** proporciona conectividad inalámbrica.
- **Firewall:** controla tráfico según reglas.
- **Protocolo:** conjunto de reglas para comunicarse.
- **Puerto:** identifica un servicio/proceso dentro de un host.
- **IP:** identifica una interfaz dentro de una red.

## 1.2. LAN, WAN, Internet e Intranet

| Concepto     | Descripción                                     |
| ------------ | ----------------------------------------------- |
| **LAN**      | Red local, como una casa, oficina o universidad |
| **WAN**      | Red que conecta redes geográficamente separadas |
| **Internet** | Red global de redes interconectadas             |
| **Intranet** | Red privada de una organización                 |
| **VPN**      | Conexión lógica segura sobre otra red           |
| **VLAN**     | Segmentación lógica de una red física           |

## 1.3. Términos

**DNS**

- Sistema que traduce las direcciones web en ip numéricas
   **DHCP**
- Dynamic Host Configuration Protocol, asigna direcciones IP dinámicamente al conectarte a una red

## 1.4. Modelos

### Modelo OSI

El modelo **OSI** divide la comunicación en 7 capas:

| # | Capa         | Función                               | Ejemplos             |
| - | ------------ | ------------------------------------- | -------------------- |
| 7 | Aplicación   | Servicios utilizados por aplicaciones | HTTP, DNS, SMTP      |
| 6 | Presentación | Formato, codificación, cifrado        | TLS, JSON, JPEG      |
| 5 | Sesión       | Administración de sesiones            | RPC, sesiones        |
| 4 | Transporte   | Comunicación extremo a extremo        | TCP, UDP             |
| 3 | Red          | Direccionamiento y routing            | IP, ICMP             |
| 2 | Enlace       | Comunicación dentro de una red        | Ethernet, Wi-Fi, ARP |
| 1 | Física       | Transmisión de bits                   | Fibra, cobre, radio  |

![[modelo_osi.png]]
#### Tip rápido para recordar

```
Aplicación → ¿Qué protocolo utiliza?
Transporte → ¿TCP o UDP?
Red        → ¿Qué IP?
Enlace     → ¿Qué dispositivo/interface local?
Física     → ¿Cómo viajan los bits?


```

#### Pequeña broma entre desarrolladores

> Seguro fue un error de Capa 8

Esta clásica broma se refiere a que fue un error del usuario, desarrollador y externo al sistema.

### Modelo TCP/IP

Es el modelo utilizado realmente por internet.

![[tcpip_protocols.png]]

### OSI vs TCP/IP

![[osi_tcpip.png]]

Para desarrollo de software, **TCP/IP** es generalmente el modelo más útil para razonar sobre sistemas reales.

## 1.5. Encapsulación

Cuando una aplicación envía datos:

```
Aplicación
    ↓
Datos

TCP
    ↓
Segmento

IP
    ↓
Paquete

Ethernet/Wi-Fi
    ↓
Trama

Medio físico
    ↓
Bits

```

Al recibirlos ocurre el proceso inverso:

```
Bits
 ↓
Trama
 ↓
Paquete
 ↓
Segmento
 ↓
Datos de aplicación

```

---
<div class="page-break" style="page-break-before: always;"></div>

# 2. Direccionamiento y transporte

## 2.1. Direcciones IP

Una dirección IP identifica una interfaz de red dentro de una red.

Existen dos versiones principales:

- IPv4
- IPv6

## 2.2. IPv4

IPv4 utiliza direcciones de **32 bits**.

Ejemplo:

```
192.168.1.25

```

Representación binaria:

```
11000000.10101000.00000001.00011001

```

### Direcciones privadas IPv4

Los rangos privados principales son:

| Rango            | Uso            |
| ---------------- | -------------- |
| `10.0.0.0/8`     | Redes privadas |
| `172.16.0.0/12`  | Redes privadas |
| `192.168.0.0/16` | Redes privadas |

Ejemplo:

```
192.168.1.10

```

No es directamente enrutable por Internet.

---

### Direcciones especiales

#### `127.0.0.1`

Loopback:

```
localhost

```

Representa al propio equipo.

#### `0.0.0.0`

Tiene diferentes significados dependiendo del contexto.

En un servidor:

```
0.0.0.0:8080

```

normalmente significa:

> Escuchar en todas las interfaces IPv4 disponibles.

#### `255.255.255.255`

Broadcast IPv4 limitado.

## 2.3. IPv6

IPv6 utiliza direcciones de **128 bits**.

Ejemplo:

```
2001:db8:85a3::8a2e:370:7334

```

Ventajas principales:

- Espacio de direcciones mucho mayor.
- Configuración automática.
- Mejor soporte para ciertos escenarios modernos.
- Elimina la necesidad de depender de NAT para conservar direcciones.

---

## 2.4. CIDR y subnetting

CIDR representa una red mediante:

```
IP/prefijo

```

Ejemplo:

```
192.168.1.0/24

```

`/24` significa que los primeros 24 bits representan la red.

Una red `/24` contiene:

```
256 direcciones

```

En una red IPv4 tradicional, normalmente:

```
1 dirección de red
254 hosts utilizables
1 dirección de broadcast

```

## 2.5. Máscaras comunes

| CIDR  | Máscara           | Direcciones |
| ----- | ----------------- | ----------- |
| `/8`  | `255.0.0.0`       | 16,777,216  |
| `/16` | `255.255.0.0`     | 65,536      |
| `/24` | `255.255.255.0`   | 256         |
| `/25` | `255.255.255.128` | 128         |
| `/26` | `255.255.255.192` | 64          |
| `/27` | `255.255.255.224` | 32          |
| `/28` | `255.255.255.240` | 16          |
| `/30` | `255.255.255.252` | 4           |

---

## 2.6. Gateway

El **default gateway** es el dispositivo al que un host envía tráfico destinado a otras redes.

Ejemplo:

```
PC
192.168.1.20
     │
     ▼
Router
192.168.1.1
     │
     ▼
Internet

```

Si el destino no pertenece a la red local:

```
PC → Gateway → Router → Internet

```

---

## 2.7. MAC Address

Una dirección MAC identifica una interfaz de red a nivel de enlace.

Ejemplo:

```
00:1A:2B:3C:4D:5E

```

Comparación:

| IP                 | MAC                          |
| ------------------ | ---------------------------- |
| Capa 3             | Capa 2                       |
| Lógica             | Asociada a interfaz          |
| Usada para routing | Usada dentro de la red local |
| Puede cambiar      | Puede cambiar/suplantarse    |

---

## 2.8. ARP

**ARP — Address Resolution Protocol**

Permite descubrir la MAC correspondiente a una IPv4 dentro de la red local.

Ejemplo:

```
Tengo:
IP = 192.168.1.50

Necesito:
MAC = ?

```

El host realiza una solicitud ARP:

```
¿Quién tiene 192.168.1.50?

```

El dispositivo correspondiente responde con su MAC.

> IPv6 utiliza mecanismos diferentes, principalmente **Neighbor Discovery (NDP)**.

---

## 2.9. Routing

El **routing** determina por dónde debe viajar un paquete para llegar a otra red.

Conceptualmente:

```
Cliente
   ↓
Router A
   ↓
Router B
   ↓
Router C
   ↓
Servidor

```

Cada router consulta su tabla de rutas.

---

## 2.10. Tabla de routing

Ejemplo conceptual:

```
Destino             Gateway          Interface

192.168.1.0/24      directo          eth0
10.0.0.0/8          192.168.1.1      eth0
0.0.0.0/0           192.168.1.1      eth0

```

`0.0.0.0/0` representa la **ruta por defecto**.

---

## 2.11. NAT

**NAT — Network Address Translation**

Permite traducir direcciones entre redes.

Ejemplo:

```
192.168.1.25:51520
        ↓
Router NAT
        ↓
203.0.113.20:43001

```

Es común que múltiples dispositivos privados compartan una IP pública.

---

## 2.12. PAT

**PAT — Port Address Translation**

Es una forma común de NAT que diferencia conexiones mediante puertos.

```
192.168.1.10:5000
        ↓
203.0.113.5:42001

192.168.1.11:5000
        ↓
203.0.113.5:42002

```

---

## 2.13. Puertos

Los puertos identifican servicios/procesos dentro de un host.

Rango:

```
0 – 65535

```

Categorías:

| Rango         | Nombre            |
| ------------- | ----------------- |
| `0–1023`      | Well-known        |
| `1024–49151`  | Registered        |
| `49152–65535` | Dynamic/ephemeral |

Ejemplo:

```
192.168.1.10:443

```

Significa:

```
IP      → 192.168.1.10
Puerto  → 443

```

---

## 2.14. Sockets

Un socket representa un endpoint de comunicación.

Conceptualmente:

```
IP + Puerto + Protocolo

```

Ejemplo:

```
TCP
192.168.1.20:52341
        ↕
TCP
142.250.x.x:443

```

En desarrollo aparecen frecuentemente:

```
socket()
bind()
listen()
accept()
connect()
send()
recv()
close()

```

---

## 2.15. TCP

**Transmission Control Protocol**

Características:

- Orientado a conexión.
- Confiable.
- Ordena los datos.
- Detecta pérdida.
- Retransmite segmentos.
- Controla flujo.
- Controla congestión.
- Es un flujo de bytes.

Ejemplos:

- HTTP/1.1
- HTTP/2
- SSH
- SMTP
- PostgreSQL
- MySQL

---

## 2.16. TCP Handshake

Antes de transmitir datos se establece la conexión:

```
Cliente                    Servidor

   SYN ───────────────────>

       <──────────────── SYN-ACK

   ACK ───────────────────>

       Conexión establecida

```

Se conoce como:

**Three-way handshake.**

---

## 2.17. TCP no conserva mensajes

Esto es fundamental al programar sockets.

Si envías:

```
"HELLO"

```

TCP no garantiza que el receptor reciba exactamente:

```
"HELLO"

```

en una sola operación `recv()`.

Podría recibir:

```
"HE"

```

y después:

```
"LLO"

```

O varios mensajes juntos:

```
"HELLOWORLD"

```

Por eso los protocolos sobre TCP necesitan implementar **framing**.

Ejemplos:

```
[4 bytes de longitud][payload]

```

o:

```
mensaje\n

```

---

## 2.18. UDP

**User Datagram Protocol**

Características:

- No establece conexión.
- No garantiza entrega.
- No garantiza orden.
- No retransmite automáticamente.
- Menor overhead.
- Basado en datagramas.

Útil cuando:

- La latencia importa.
- La pérdida ocasional es tolerable.
- La aplicación implementará su propia confiabilidad.
- Se necesita comunicación rápida.

Ejemplos:

- DNS tradicional.
- VoIP.
- Streaming.
- Juegos online.
- DHCP.

---

## 2.19. TCP vs UDP

| Característica | TCP             | UDP                   |
| -------------- | --------------- | --------------------- |
| Conexión       | Sí              | No                    |
| Orden          | Sí              | No                    |
| Retransmisión  | Sí              | No                    |
| Flujo de bytes | Sí              | No                    |
| Datagramas     | No              | Sí                    |
| Overhead       | Mayor           | Menor                 |
| Latencia       | Puede ser mayor | Generalmente menor    |
| Fiabilidad     | Integrada       | Depende de aplicación |

---

## 2.20. QUIC

**QUIC** es un protocolo de transporte moderno basado en UDP.

Incluye mecanismos como:

- Fiabilidad.
- Control de congestión.
- Multiplexación.
- Seguridad mediante TLS 1.3.
- Menor coste de establecimiento de conexión.

HTTP/3 utiliza QUIC.

```
HTTP/3
   ↓
QUIC
   ↓
UDP
   ↓
IP

```

---
<div class="page-break" style="page-break-before: always;"></div>

# 3. Servicios de infraestructura

## 3.1. DNS

**Domain Name System**

Traduce nombres a direcciones IP.

```
google.com
     ↓
DNS
     ↓
142.x.x.x

```

Sin DNS tendríamos que utilizar directamente las IP.

---

## 3.2. Registros DNS importantes

| Registro | Función                   |
| -------- | ------------------------- |
| `A`      | Nombre → IPv4             |
| `AAAA`   | Nombre → IPv6             |
| `CNAME`  | Alias de otro nombre      |
| `MX`     | Servidores de correo      |
| `NS`     | Servidores autoritativos  |
| `TXT`    | Texto/metadatos           |
| `SRV`    | Localización de servicios |
| `PTR`    | IP → nombre               |

---

## 3.3. Resolución DNS

Simplificada:

```
Aplicación
    ↓
Resolver
    ↓
Root DNS
    ↓
TLD (.com)
    ↓
Servidor autoritativo
    ↓
Respuesta

```

En la práctica, muchas consultas se resuelven desde cachés.

---

## 3.4. TTL de DNS

Los registros DNS tienen un:

**TTL — Time To Live**

Indica cuánto tiempo puede mantenerse una respuesta en caché.

Ejemplo:

```
example.com
TTL = 300

```

La respuesta puede mantenerse aproximadamente 300 segundos antes de necesitar una nueva resolución.

---


## 3.5. DHCP

**Dynamic Host Configuration Protocol**

Permite obtener automáticamente parámetros de red.

Normalmente:

```
DHCP Discover
        ↓
DHCP Offer
        ↓
DHCP Request
        ↓
DHCP ACK

```

Puede proporcionar:

```
IP
Subnet mask
Gateway
DNS
Lease time

```

---

## 3.6. ICMP

**Internet Control Message Protocol**

Se utiliza para mensajes de control y diagnóstico.

Herramienta conocida:

```
ping

```

Ejemplo:

```
ping 8.8.8.8

```

ICMP no es TCP ni UDP.

---

## 3.7. Ping

`ping` normalmente utiliza ICMP Echo Request/Reply en IPv4.

Sirve para comprobar:

- Alcanzabilidad.
- Latencia aproximada.
- Pérdida de paquetes.

No demuestra por sí solo que:

```
TCP puerto 443

```

esté disponible.

---

## 3.8. Traceroute

Permite observar el camino aproximado hacia un destino.

Linux/macOS:

```
traceroute example.com

```

Windows:

```
tracert example.com

```

Es útil para detectar problemas de routing y latencia.

---

## 3.9. Puertos conocidos

| Puerto | Protocolo/servicio |
| ------ | ------------------ |
| 20/21  | FTP                |
| 22     | SSH                |
| 23     | Telnet             |
| 25     | SMTP               |
| 53     | DNS                |
| 67/68  | DHCP               |
| 80     | HTTP               |
| 110    | POP3               |
| 143    | IMAP               |
| 443    | HTTPS              |
| 465    | SMTPS              |
| 587    | SMTP Submission    |
| 993    | IMAPS              |
| 995    | POP3S              |

> El puerto no garantiza qué protocolo está ejecutándose; simplemente es una convención.

---

## 3.10. Firewall

Un firewall controla tráfico según reglas.

Puede filtrar por:

```
IP
Puerto
Protocolo
Dirección
Interfaz
Estado de conexión
Aplicación

```

Ejemplo:

```
Internet
   ↓
Firewall
   ↓
TCP 443 → permitido
TCP 22  → restringido
TCP 3306 → bloqueado

```

---
<div class="page-break" style="page-break-before: always;"></div>

# 4. Web y APIs

## 4.1. HTTP

**Hypertext Transfer Protocol**

Es uno de los protocolos más importantes para desarrollo de software.

Modelo:

```
Cliente → Request → Servidor
Cliente ← Response ← Servidor

```

---

## 4.2. HTTP Request

Ejemplo:

```
GET /users/42 HTTP/1.1
Host: example.com
Accept: application/json
Authorization: Bearer TOKEN

```

Componentes:

```
Método
URL/path
Versión HTTP
Headers
Body opcional

```

---

## 4.3. HTTP Response

```
HTTP/1.1 200 OK
Content-Type: application/json

{
  "id": 42,
  "name": "Gabriel"
}

```

Componentes:

```
Status code
Headers
Body

```

---

## 4.4. Métodos HTTP

| Método    | Uso típico               |
| --------- | ------------------------ |
| `GET`     | Obtener recurso          |
| `POST`    | Crear/procesar           |
| `PUT`     | Reemplazar recurso       |
| `PATCH`   | Modificar parcialmente   |
| `DELETE`  | Eliminar                 |
| `HEAD`    | Obtener headers sin body |
| `OPTIONS` | Consultar capacidades    |

---

## 4.5. Safe e Idempotent

### Safe

No debería modificar el estado del recurso.

Ejemplo:

```
GET

```

### Idempotente

Repetir la operación produce el mismo efecto final.

Generalmente:

```
GET
PUT
DELETE
HEAD
OPTIONS

```

son idempotentes según la semántica HTTP.

`POST` normalmente no lo es.

---

## 4.6. HTTP Status Codes

### 1xx — Información

```
100 Continue

```

### 2xx — Éxito

```
200 OK
201 Created
202 Accepted
204 No Content

```

### 3xx — Redirección

```
301 Moved Permanently
302 Found
304 Not Modified
307 Temporary Redirect
308 Permanent Redirect

```

### 4xx — Error del cliente

```
400 Bad Request
401 Unauthorized
403 Forbidden
404 Not Found
405 Method Not Allowed
409 Conflict
413 Content Too Large
415 Unsupported Media Type
422 Unprocessable Content
429 Too Many Requests

```

### 5xx — Error del servidor

```
500 Internal Server Error
501 Not Implemented
502 Bad Gateway
503 Service Unavailable
504 Gateway Timeout

```

---

## 4.7. Headers HTTP importantes

### Generalmente relevantes

```
Host
Content-Type
Content-Length
Accept
Authorization
User-Agent
Cache-Control
Cookie
Set-Cookie
Origin
Referer
Location
ETag
If-None-Match
Accept-Encoding
Content-Encoding

```

---

## 4.8. Content-Type

Indica el tipo de contenido.

Ejemplos:

```
Content-Type: application/json

```

```
Content-Type: text/html

```

```
Content-Type: multipart/form-data

```

```
Content-Type: application/x-www-form-urlencoded

```

---

## 4.9. JSON

Formato muy utilizado para APIs.

```
{
  "id": 42,
  "name": "Gabriel",
  "active": true
}

```

HTTP no requiere JSON.

HTTP puede transportar prácticamente cualquier representación.

---

## 4.10. Cookies

Las cookies permiten almacenar información asociada a un dominio.

Servidor:

```
Set-Cookie: sessionId=abc123; HttpOnly; Secure

```

Cliente:

```
Cookie: sessionId=abc123

```

Atributos importantes:

```
HttpOnly
Secure
SameSite
Domain
Path
Max-Age
Expires

```

---

## 4.11. Sessions

Un patrón clásico:

```
Browser
   ↓
session cookie
   ↓
Server
   ↓
Session store

```

El navegador conserva un identificador.

El servidor conserva el estado.

---

## 4.12. Stateless vs Stateful

### Stateless

Cada request contiene la información necesaria para procesarla.

Ejemplo típico:

```
Authorization: Bearer <token>

```

### Stateful

El servidor conserva información asociada a la sesión.

Ejemplo:

```
Cookie → Session ID → Redis/DB

```

---

## 4.13. REST

REST es un estilo arquitectónico para sistemas distribuidos.

Ejemplo:

```
GET    /users
GET    /users/42
POST   /users
PATCH  /users/42
DELETE /users/42

```

Características comúnmente asociadas:

- Recursos.
- Identificación mediante URLs.
- Uso de métodos HTTP.
- Comunicación stateless.
- Representaciones de recursos.

REST no es un protocolo.

---

## 4.14. APIs

Una API permite que diferentes componentes se comuniquen.

Ejemplo:

```
React
  ↓
HTTP
  ↓
API
  ↓
Service
  ↓
Database

```

---


## 4.15. HTTP/1.1 vs HTTP/2 vs HTTP/3

|                           | HTTP/1.1         | HTTP/2            | HTTP/3                   |
| ------------------------- | ---------------- | ----------------- | ------------------------ |
| Transporte                | TCP              | TCP               | QUIC/UDP                 |
| Multiplexación            | Limitada         | Sí                | Sí                       |
| Header compression        | No estándar      | HPACK             | QPACK                    |
| TLS                       | Opcional en HTTP | Normalmente usado | Integrado vía QUIC       |
| Head-of-line blocking TCP | Sí               | Sí                | No a nivel de transporte |

---

## 4.16. WebSockets

WebSocket permite comunicación bidireccional persistente.

```
Cliente
   ↕
WebSocket
   ↕
Servidor

```

Útil para:

- Chat.
- Juegos.
- Notificaciones.
- Datos en tiempo real.
- Dashboards.

A diferencia del modelo HTTP tradicional:

```
Request → Response

```

WebSocket permite:

```
Cliente ←→ Servidor

```

---

## 4.17. Server-Sent Events

**SSE**

Permite que el servidor envíe eventos al cliente mediante una conexión HTTP persistente.

```
Cliente → HTTP Request

Servidor
   ↓
evento
   ↓
evento
   ↓
evento

```

Es unidireccional:

```
Servidor → Cliente

```

Útil para:

- Notificaciones.
- Actualizaciones de estado.
- Feeds.
- Streaming de texto.

---

## 4.18. WebSocket vs SSE

|                       | WebSocket                  | SSE                      |
| --------------------- | -------------------------- | ------------------------ |
| Dirección             | Bidireccional              | Servidor → cliente       |
| Basado en HTTP        | Handshake inicial          | Sí                       |
| Reconexión automática | Depende de implementación  | Integrada en EventSource |
| Ideal para            | Interacción en tiempo real | Streams de eventos       |

---

## 4.19. gRPC

Framework/protocolo RPC basado normalmente en:

```
HTTP/2
+
Protocol Buffers

```

Ejemplo conceptual:

```
Client
  ↓
GetUser()
  ↓
gRPC
  ↓
Server

```

Ventajas:

- Contratos fuertemente tipados.
- Generación automática de código.
- Streaming.
- Buen rendimiento.
- Comunicación service-to-service.

---

## 4.20. GraphQL

GraphQL permite consultar exactamente los datos requeridos.

Ejemplo:

```
query {
  user(id: 42) {
    name
    email
  }
}

```

Normalmente se transporta mediante HTTP.

GraphQL tampoco reemplaza a HTTP.

---
<div class="page-break" style="page-break-before: always;"></div>

# 5. Seguridad y acceso

## 5.1. HTTPS

HTTPS es:

```
HTTP + TLS

```

Normalmente utiliza:

```
HTTPS
 ↓
TLS
 ↓
TCP
 ↓
IP

```

En HTTP/3:

```
HTTPS
 ↓
TLS 1.3
 ↓
QUIC
 ↓
UDP

```

---

## 5.2. TLS

**Transport Layer Security**

Proporciona principalmente:

- Confidencialidad.
- Integridad.
- Autenticación del servidor mediante certificados.

Conceptualmente:

```
Cliente ←→ TLS ←→ Servidor

```

---

## 5.3. Certificados digitales

Un certificado vincula una identidad/dominio con una clave pública.

Contiene información como:

```
Dominio
Clave pública
Autoridad certificadora
Periodo de validez
Firma digital

```

Ejemplo:

```
example.com
     ↓
Certificate
     ↓
Public Key

```

---

## 5.4. CA

**Certificate Authority**

Entidad que firma certificados digitales.

Ejemplos:

```
Let's Encrypt
DigiCert
GlobalSign
Sectigo

```

El navegador confía en una lista de autoridades raíz.

---

## 5.5. Criptografía simétrica vs asimétrica

### Simétrica

Utiliza una misma clave:

```
Clave
 ↓
Cifrar
 ↓
Mensaje

Clave
 ↓
Descifrar

```

Ejemplos:

```
AES
ChaCha20

```

### Asimétrica

Utiliza:

```
Public Key
Private Key

```

Ejemplos:

```
RSA
ECDSA
Ed25519
X25519

```

TLS utiliza criptografía asimétrica y simétrica de distintas maneras durante el establecimiento y protección de la conexión.

---


## 5.6. CORS

**Cross-Origin Resource Sharing**

Controla cuándo un navegador permite que JavaScript acceda a recursos de otro origin.

Un origin está definido por:

```
scheme + host + port

```

Ejemplo:

```
https://example.com

```

es diferente de:

```
https://api.example.com

```

---

## 5.7. Preflight

Para determinadas solicitudes cross-origin, el navegador realiza primero:

```
OPTIONS /api/users

```

Ejemplo:

```
Origin: https://frontend.example
Access-Control-Request-Method: POST

```

El servidor puede responder:

```
Access-Control-Allow-Origin: https://frontend.example
Access-Control-Allow-Methods: POST

```

---

## 5.8. Autenticación

Determina:

> ¿Quién eres?

Métodos comunes:

```
Username/password
API keys
Sessions
JWT
OAuth 2.0
OpenID Connect
mTLS

```

---

## 5.9. Autorización

Determina:

> ¿Qué puedes hacer?

Ejemplo:

```
Usuario autenticado
       ↓
¿Puede eliminar este recurso?
       ↓
Sí / No

```

Autenticación ≠ autorización.

---

## 5.10. JWT

**JSON Web Token**

Ejemplo conceptual:

```
Header.Payload.Signature

```

Se utiliza frecuentemente para transportar claims.

Un JWT firmado **no significa necesariamente que esté cifrado**.

No debe asumirse que su contenido es secreto.

---

## 5.11. OAuth 2.0

Framework de autorización.

Permite que una aplicación obtenga acceso limitado a recursos en nombre de un usuario o sistema.

Conceptualmente:

```
Usuario
  ↓
Authorization Server
  ↓
Access Token
  ↓
Client
  ↓
Resource Server

```

---

## 5.12. OpenID Connect

Construido sobre OAuth 2.0.

Añade una capa de **autenticación e identidad**.

Conceptualmente:

```
OAuth 2.0 → autorización
OIDC      → autenticación/identidad

```

---

## 5.13. Rate Limiting

Limita la cantidad de requests permitidos.

Ejemplo:

```
100 requests/minuto

```

Puede implementarse mediante:

- Token bucket.
- Leaky bucket.
- Fixed window.
- Sliding window.

Respuesta habitual:

```
429 Too Many Requests

```

---
<div class="page-break" style="page-break-before: always;"></div>

# 6. Infraestructura y rendimiento

## 6.1. SSH

**Secure Shell**

Permite acceso remoto seguro.

```
ssh user@server

```

Utiliza cifrado y autenticación.

Usos:

- Administrar servidores.
- Ejecutar comandos remotamente.
- Transferencia segura.
- Túneles.

Puerto tradicional:

```
22

```

---

## 6.2. FTP / SFTP

### FTP

File Transfer Protocol.

No proporciona seguridad moderna por defecto.

### SFTP

SSH File Transfer Protocol.

Funciona sobre SSH.

No debe confundirse con FTPS:

```
SFTP ≠ FTPS

```

---

## 6.3. SMTP

**Simple Mail Transfer Protocol**

Se utiliza para enviar correo electrónico.

Puertos comunes:

```
25
587
465

```

---

## 6.4. IMAP

Permite acceder y administrar correo almacenado en un servidor.

Puerto habitual:

```
143

```

Con TLS:

```
993

```

---


## 6.5. Reverse Proxy

Un reverse proxy recibe requests y las dirige hacia servicios internos.

```
Internet
   ↓
Nginx / Caddy / HAProxy
   ↓
Backend

```

Puede encargarse de:

- TLS termination.
- Routing.
- Load balancing.
- Compresión.
- Caché.
- Rate limiting.
- Headers.

---

## 6.6. Forward Proxy

Un forward proxy representa al cliente frente a servidores externos.

```
Cliente
   ↓
Forward Proxy
   ↓
Internet

```

Un reverse proxy representa a los servidores.

```
Internet
   ↓
Reverse Proxy
   ↓
Servidores

```

---

## 6.7. Load Balancer

Distribuye tráfico entre múltiples servidores.

```
              ┌→ Server A
Client → LB ──┼→ Server B
              └→ Server C

```

Algoritmos comunes:

- Round robin.
- Weighted round robin.
- Least connections.
- Hash-based.

---

## 6.8. Health Checks

Un balanceador puede comprobar:

```
GET /health

```

Si el servidor responde correctamente:

```
Healthy

```

Si falla repetidamente:

```
Unhealthy

```

El tráfico puede dejar de enviarse hacia él.

---

## 6.9. CDN

**Content Delivery Network**

Distribuye contenido mediante servidores ubicados geográficamente.

```
Usuario
  ↓
CDN edge
  ↓
Origin

```

Beneficios:

- Menor latencia.
- Caché.
- Descarga de tráfico del servidor origin.
- Protección adicional contra ciertos ataques.

---

## 6.10. Caching HTTP

Ejemplo:

```
Cache-Control: max-age=3600

```

Otros mecanismos importantes:

```
ETag
If-None-Match
Last-Modified
If-Modified-Since

```

Una respuesta:

```
304 Not Modified

```

indica que el cliente puede utilizar su copia almacenada.

---


## 6.11. Latencia

Tiempo que tarda una operación en completarse.

Puede dividirse aproximadamente en:

```
DNS
+
TCP connection
+
TLS handshake
+
Request
+
Server processing
+
Response

```

Reducir latencia no significa únicamente "hacer el servidor más rápido".

---

## 6.12. Throughput

Cantidad de datos procesados por unidad de tiempo.

Ejemplo:

```
500 MB/s

```

o:

```
10,000 requests/s

```

---

## 6.13. Bandwidth

Capacidad máxima de transmisión de una conexión.

Ejemplo:

```
1 Gbps

```

No significa que cada request tendrá necesariamente esa velocidad.

---

## 6.14. Jitter

Variación en la latencia.

Ejemplo:

```
20 ms
21 ms
19 ms
100 ms
18 ms

```

El salto a `100 ms` representa jitter.

Es especialmente importante en:

- Videollamadas.
- VoIP.
- Juegos.
- Streaming interactivo.

---

## 6.15. Packet Loss

Pérdida de paquetes.

Ejemplo:

```
1000 enviados
990 recibidos

```

Packet loss:

```
1%

```

Puede provocar:

- Retransmisiones.
- Mayor latencia.
- Degradación de aplicaciones.
- Desconexiones.

---

## 6.16. MTU

**Maximum Transmission Unit**

Es el tamaño máximo de paquete/trama IP que puede transportarse sin fragmentación a través de una interfaz/enlace, según el contexto.

Ethernet comúnmente utiliza:

```
MTU = 1500 bytes

```

Los túneles/VPN pueden reducir el MTU efectivo.

Problemas de MTU pueden producir comportamientos extraños como:

```
Ping funciona
HTTP falla

```

---

## 6.17. Fragmentación

Los paquetes demasiado grandes pueden necesitar fragmentación dependiendo del protocolo, configuración y camino.

En IPv4 existe fragmentación.

En IPv6 los routers no fragmentan paquetes; el origen debe encargarse mediante mecanismos definidos por IPv6.

---

## 6.18. Keep-Alive

Permite reutilizar conexiones.

Sin reutilización:

```
TCP handshake
HTTP request
HTTP response
TCP close

```

Repetido muchas veces.

Con conexiones persistentes:

```
TCP connection
   ├── Request
   ├── Response
   ├── Request
   ├── Response
   └── Request

```

---

## 6.19. Connection Pooling

Una aplicación puede mantener un conjunto de conexiones reutilizables.

Ejemplo:

```
Application
    ↓
Connection Pool
 ┌──┼──┬──┐
 ↓  ↓  ↓  ↓
DB DB DB DB

```

Muy importante para:

- Bases de datos.
- HTTP clients.
- Microservicios.

---
<div class="page-break" style="page-break-before: always;"></div>

# 7. Confiabilidad y sistemas distribuidos

## 7.1. Timeouts

Todo sistema de red serio debe considerar timeouts.

Tipos:

```
Connect timeout
Read timeout
Write timeout
Idle timeout
Request timeout

```

Sin timeout, una operación puede quedarse esperando indefinidamente.

---

## 7.2. Retries

Los retries pueden solucionar fallos transitorios.

Pero deben utilizarse con cuidado.

Ejemplo:

```
Request
  ↓
Timeout
  ↓
Retry
  ↓
Success

```

Problema:

```
Retry × muchos clientes
       ↓
más tráfico
       ↓
servidor saturado
       ↓
más fallos
       ↓
más retries

```

Esto puede generar un **retry storm**.

---

## 7.3. Exponential Backoff

En lugar de reintentar inmediatamente:

```
1s
2s
4s
8s
16s

```

Normalmente se añade **jitter** para evitar que muchos clientes reintenten simultáneamente.

---

## 7.4. Idempotency Keys

Útiles para operaciones donde repetir una solicitud podría crear duplicados.

Ejemplo:

```
POST /payments
Idempotency-Key: abc-123

```

El servidor registra el resultado asociado a esa clave.

Si recibe nuevamente:

```
abc-123

```

puede devolver el resultado anterior en lugar de crear una segunda operación.

---

## 7.5. Microservicios y redes

Arquitectura típica:

```
             ┌→ User Service
Client → API Gateway
             ├→ Payment Service
             ├→ Order Service
             └→ Inventory Service

```

Cada comunicación implica problemas de red:

- DNS.
- Latencia.
- Timeouts.
- Retries.
- TLS.
- Autenticación.
- Service discovery.
- Load balancing.
- Observabilidad.

---

## 7.6. Service Discovery

Permite encontrar dinámicamente servicios.

En lugar de:

```
http://10.0.2.17:8080

```

una aplicación puede utilizar:

```
http://user-service

```

El sistema resuelve dónde está el servicio.

Ejemplos:

- Kubernetes DNS.
- Consul.
- Eureka.
- Cloud service discovery.

---

## 7.7. API Gateway

Punto de entrada para múltiples APIs.

```
                ┌→ Service A
Client → Gateway ├→ Service B
                └→ Service C

```

Puede manejar:

- Autenticación.
- Routing.
- Rate limiting.
- Logging.
- TLS.
- Transformaciones.
- Políticas.

---

## 7.8. Service Mesh

Una capa dedicada a administrar comunicación entre servicios.

Conceptualmente:

```
Service A
   ↕
Proxy
   ↕
Proxy
   ↕
Service B

```

Puede proporcionar:

- mTLS.
- Observabilidad.
- Retries.
- Traffic policies.
- Service discovery.
- Load balancing.

---

## 7.9. DNS en sistemas distribuidos

DNS no es solamente para Internet.

Puede utilizarse internamente:

```
database.internal
api.internal
users.internal

```

En cloud/Kubernetes es extremadamente común.

---


## 7.10. MQTT

Protocolo ligero de mensajería, especialmente utilizado en IoT.

Modelo:

```
Publisher
    ↓
  Broker
    ↓
Subscriber

```

Ejemplo:

```
sensor/temperature

```

Un sensor publica:

```
24.5

```

Los clientes interesados reciben el mensaje.

---

## 7.11. AMQP

Protocolo de mensajería orientado a sistemas distribuidos.

Conceptualmente:

```
Producer
   ↓
Broker
   ↓
Queue
   ↓
Consumer

```

Permite desacoplar componentes.

---

## 7.12. Message Queue vs HTTP

HTTP:

```
Client → Server

```

Queue:

```
Producer → Queue → Consumer

```

Una cola puede ayudar con:

- Procesamiento asíncrono.
- Desacoplamiento.
- Reintentos.
- Absorción de picos.
- Comunicación entre servicios.

---

## 7.13. Backpressure

Ocurre cuando un consumidor no puede procesar datos tan rápido como los produce el productor.

```
Producer
  ↓↓↓↓↓↓↓
Queue
  ↓
Consumer
  ↓
procesamiento lento

```

El sistema necesita una estrategia:

- Limitar producción.
- Buffer.
- Dropear datos.
- Backpressure.
- Escalar consumidores.

---

## 7.14. Circuit Breaker

Evita llamar repetidamente a un servicio que está fallando.

Estados típicos:

```
CLOSED
   ↓ demasiados fallos
OPEN
   ↓ después de tiempo
HALF-OPEN
   ↓
CLOSED / OPEN

```

---

## 7.15. Network Partition

Una partición ocurre cuando componentes que deberían comunicarse dejan de poder hacerlo.

```
Service A   X   Service B

```

Aunque ambos continúen funcionando individualmente.

Es fundamental en sistemas distribuidos.

---

## 7.16. CAP

CAP describe tres propiedades:

```
Consistency
Availability
Partition Tolerance

```

Ante una partición de red, un sistema distribuido no puede garantizar simultáneamente consistencia fuerte y disponibilidad bajo el modelo CAP clásico.

La **tolerancia a particiones** no es realmente opcional en sistemas distribuidos que operan sobre redes no confiables; la decisión práctica está en cómo se comporta el sistema ante una partición.

---
<div class="page-break" style="page-break-before: always;"></div>

# 8. Seguridad de redes

## 8.1. Seguridad de redes

Principios fundamentales:

### Nunca confíes automáticamente en la red

Una red interna no debe considerarse automáticamente segura.

### Cifra datos sensibles

Usa:

```
TLS/HTTPS
SSH
mTLS

```

### Menor privilegio

Solo permitir:

```
lo necesario

```

### Segmentación

Separar:

```
Internet
 ↓
DMZ
 ↓
Application
 ↓
Database

```

---

## 8.2. Ataques que un desarrollador debe conocer

### MITM

**Man-in-the-Middle**

Un atacante intenta interceptar/modificar comunicación.

TLS ayuda a prevenirlo cuando está correctamente implementado.

---

### DNS Spoofing

El atacante intenta proporcionar respuestas DNS falsas.

---

### DNS Cache Poisoning

Se intenta contaminar una caché DNS con información incorrecta.

---

### DoS / DDoS

Busca agotar recursos.

```
Ataques
   ↓↓↓↓↓
Servidor
   ↓
Recursos agotados

```

---

### Port Scanning

Busca servicios expuestos.

Herramienta conocida:

```
nmap

```

---

### Sniffing

Captura tráfico de red.

Sin cifrado:

```
password=123456

```

podría quedar expuesta.

Con TLS:

```
datos cifrados

```

---

## 8.3. Vulnerabilidades web relacionadas con redes

Un desarrollador debería conocer al menos:

```
XSS
CSRF
SQL Injection
SSRF
Request Smuggling
Open Redirect
CORS misconfiguration
Authentication flaws
Authorization flaws

```

Especialmente:

### SSRF

**Server-Side Request Forgery**

Un atacante consigue que el servidor realice requests hacia destinos que no debería poder alcanzar.

Ejemplo conceptual:

```
Attacker
   ↓
Application
   ↓
Internal Service

```

Es especialmente importante en arquitecturas cloud.

---
<div class="page-break" style="page-break-before: always;"></div>

# 9. Herramientas y diagnóstico

## 9.1. Herramientas fundamentales

### `curl`

Realizar requests HTTP.

```
curl https://example.com

```

Headers:

```
curl -I https://example.com

```

POST:

```
curl -X POST https://api.example.com/users

```

JSON:

```
curl \
  -H "Content-Type: application/json" \
  -d '{"name":"Gabriel"}' \
  https://api.example.com/users

```

---

## 9.2. `ping`

```
ping example.com

```

Comprueba conectividad mediante ICMP, cuando el destino/red lo permite.

---

## 9.3. `traceroute`

```
traceroute example.com

```

Windows:

```
tracert example.com

```

Ayuda a identificar dónde aumenta la latencia o dónde parece interrumpirse el camino.

---

## 9.4. `dig`

Consultar DNS:

```
dig example.com

```

Registro específico:

```
dig example.com A

```

```
dig example.com MX

```

```
dig example.com TXT

```

---

## 9.5. `nslookup`

Alternativa para consultar DNS:

```
nslookup example.com

```

---

## 9.6. `ss`

Linux:

```
ss -tulpn

```

Permite consultar sockets y puertos.

---

## 9.7. `netstat`

Herramienta clásica para consultar conexiones y puertos.

```
netstat -an

```

En muchos sistemas modernos se prefiere `ss`.

---

## 9.8. `lsof`

Buscar qué proceso utiliza un puerto:

```
lsof -i :8080

```

Muy útil cuando aparece:

```
Address already in use

```

---

## 9.9. `nc`

**netcat**

Puede utilizarse para probar conexiones TCP/UDP.

```
nc -vz example.com 443

```

---

## 9.10. `telnet`

Puede utilizarse para pruebas simples de conectividad TCP.

```
telnet example.com 80

```

No debe utilizarse para comunicaciones sensibles.

---

## 9.11. Wireshark

Analizador de paquetes con interfaz gráfica.

Permite inspeccionar:

```
Ethernet
ARP
IP
TCP
UDP
DNS
HTTP
TLS

```

Es una de las herramientas más importantes para aprender networking en profundidad.

---

## 9.12. tcpdump

Captura tráfico desde terminal.

Ejemplo:

```
sudo tcpdump -i any

```

Filtrar puerto:

```
sudo tcpdump -i any port 443

```

---

## 9.13. OpenSSL

Útil para diagnosticar TLS/certificados.

Ejemplo:

```
openssl s_client -connect example.com:443

```

Permite inspeccionar el handshake y certificados.

---

## 9.14. Diagnóstico de una API

Cuando:

```
Frontend → API

```

no funciona, revisar en este orden:

```
1. ¿Tengo conexión?
2. ¿DNS resuelve?
3. ¿El host responde?
4. ¿El puerto está abierto?
5. ¿TLS funciona?
6. ¿HTTP request llega?
7. ¿Status code?
8. ¿Headers correctos?
9. ¿Body correcto?
10. ¿Autenticación?
11. ¿Autorización?
12. ¿El servidor puede acceder a sus dependencias?

```

---

## 9.15. Ejemplo de debugging

Supongamos:

```
GET https://api.example.com/users

```

### Paso 1 — DNS

```
dig api.example.com

```

### Paso 2 — Conectividad

```
ping api.example.com

```

> Que ping falle no significa necesariamente que HTTPS esté caído.

### Paso 3 — Puerto

```
nc -vz api.example.com 443

```

### Paso 4 — TLS

```
openssl s_client -connect api.example.com:443

```

### Paso 5 — HTTP

```
curl -v https://api.example.com/users

```

### Paso 6 — Revisar servidor

```
logs
metrics
traces

```

---
<div class="page-break" style="page-break-before: always;"></div>

# 10. Contenedores y arquitectura de red

## 10.1. `localhost` y contenedores

Un error extremadamente común:

```
Backend: localhost:3000
Frontend: Docker container

```

Dentro de un contenedor:

```
localhost

```

significa:

> ese mismo contenedor.

No significa automáticamente:

> mi computadora.

En Docker, para comunicarse entre servicios normalmente se utiliza el nombre del servicio:

```
http://backend:3000

```

---

## 10.2. Docker networking

Arquitectura típica:

```
Browser
   ↓
Host
   ↓
Docker
 ┌───────────────┐
 │ frontend      │
 │      ↓        │
 │ backend       │
 │      ↓        │
 │ database      │
 └───────────────┘

```

Los contenedores pueden comunicarse mediante redes virtuales.

---

## 10.3. Port Mapping

Ejemplo:

```
docker run -p 8080:3000 app

```

Significa:

```
Host:8080
   ↓
Container:3000

```

Entonces:

```
http://localhost:8080

```

llega al puerto `3000` del contenedor.

---

## 10.4. HTTP vs HTTPS vs TCP

No son equivalentes.

```
HTTP
 ↓
TCP
 ↓
IP

```

HTTPS:

```
HTTP
 ↓
TLS
 ↓
TCP
 ↓
IP

```

HTTP/3:

```
HTTP/3
 ↓
QUIC
 ↓
UDP
 ↓
IP

```

---

## 10.5. Modelo mental completo de una request

Cuando escribes:

```
https://api.example.com/users

```

puede ocurrir algo parecido a:

```
1. Aplicación necesita api.example.com

2. DNS
   api.example.com → IP

3. Se determina la ruta

4. Se establece transporte
   TCP o QUIC

5. Si corresponde:
   TLS handshake

6. HTTP request

   GET /users
   Host: api.example.com

7. Router/proxy/load balancer

8. Backend procesa request

9. Backend consulta DB/servicios

10. Backend genera response

11. Response vuelve por la red

12. Cliente procesa response

```

---

## 10.6. Qué ocurre al escribir una URL

Ejemplo:

```
https://example.com

```

Simplificado:

```
URL
 ↓
DNS
 ↓
IP
 ↓
Routing
 ↓
TCP/QUIC
 ↓
TLS
 ↓
HTTP
 ↓
Servidor
 ↓
Response
 ↓
Browser

```

Este flujo es uno de los modelos mentales más importantes para un desarrollador.

---
<div class="page-break" style="page-break-before: always;"></div>

# 11. Niveles de dominio y referencia

## 11.1. Conceptos que un Junior debería dominar

```
✓ IP
✓ IPv4 / IPv6
✓ MAC
✓ DNS
✓ DHCP
✓ TCP
✓ UDP
✓ HTTP
✓ HTTPS
✓ Puertos
✓ DNS
✓ REST
✓ JSON
✓ Cookies
✓ CORS
✓ TLS básico
✓ NAT
✓ Routing básico
✓ curl
✓ ping
✓ traceroute

```

---

## 11.2. Conceptos que un Mid debería dominar

Además:

```
✓ Subnetting/CIDR
✓ TCP handshake
✓ TCP vs UDP
✓ HTTP/1.1 vs HTTP/2
✓ HTTP/3 y QUIC
✓ TLS
✓ Certificados
✓ Reverse proxy
✓ Load balancing
✓ CDN
✓ Caching
✓ WebSockets
✓ SSE
✓ OAuth/OIDC
✓ Rate limiting
✓ Timeouts
✓ Retries
✓ Connection pooling
✓ Docker networking
✓ Wireshark
✓ tcpdump
✓ Observabilidad

```

---

## 11.3. Conceptos que un Senior debería dominar

Además:

```
✓ Diseño de redes
✓ Routing avanzado
✓ IPv6
✓ DNS avanzado
✓ TLS profundo
✓ HTTP/2 y HTTP/3
✓ QUIC
✓ Network security
✓ Service discovery
✓ API gateways
✓ Service mesh
✓ mTLS
✓ Load balancing
✓ Distributed systems
✓ Failure modes
✓ Backpressure
✓ Retry storms
✓ Circuit breakers
✓ Network partitions
✓ CAP theorem
✓ Zero Trust
✓ Cloud networking
✓ Kubernetes networking
✓ Packet analysis
✓ Performance tuning

```

---

## 11.4. Protocolos que debes reconocer

### Aplicación

```
HTTP
HTTPS
DNS
DHCP
SSH
SMTP
IMAP
FTP
SFTP
WebSocket
SSE
gRPC
MQTT
AMQP

```

### Transporte

```
TCP
UDP
QUIC

```

### Internet

```
IPv4
IPv6
ICMP

```

### Enlace

```
Ethernet
Wi-Fi
ARP

```

### Seguridad

```
TLS
IPsec
SSH
mTLS

```

---


## 11.5. Observabilidad de redes

Tres pilares:

```
Logs
Metrics
Traces

```

### Logs

```
Request failed

```

### Metrics

```
request_latency = 250ms
error_rate = 2%

```

### Traces

Permiten seguir una request:

```
Frontend
 ↓
Gateway
 ↓
User Service
 ↓
Database

```

---

## 11.6. Distributed Tracing

Una request puede recibir un:

```
trace_id

```

y cada servicio generar:

```
span_id

```

Ejemplo:

```
Trace
│
├── API Gateway
│
├── User Service
│   └── PostgreSQL
│
└── Payment Service

```

Esto permite encontrar dónde se está consumiendo el tiempo.

---

## 11.7. DNS, TCP y HTTP: diferencia rápida

```
DNS
"¿Cuál es la IP?"

TCP
"Quiero una conexión confiable."

HTTP
"Quiero solicitar este recurso."

```

---

## 11.8. IP, MAC y Puerto: diferencia rápida

```
MAC
"¿Qué interfaz es?"

IP
"¿Qué host/interfaz dentro de la red?"

Puerto
"¿Qué servicio/proceso?"

```

---

## 11.9. Switch, Router y Firewall

```
Switch
→ conecta dispositivos dentro de una red.

Router
→ conecta redes diferentes.

Firewall
→ controla qué tráfico está permitido.

```

Un mismo dispositivo físico puede realizar varias de estas funciones.

---

## 11.10. Proxy vs Gateway vs Load Balancer

No son necesariamente categorías mutuamente excluyentes.

### Proxy

Intermediario entre dos extremos.

### Gateway

Punto de entrada/salida entre sistemas o redes; el término depende del contexto.

### Load Balancer

Distribuye tráfico entre múltiples destinos.

Un mismo producto puede desempeñar las tres funciones.

---
<div class="page-break" style="page-break-before: always;"></div>

# 12. Construcción, configuración y consulta rápida

## 12.1. Checklist para desarrollo de APIs

Antes de desplegar:

- HTTPS
- Validación de input
- Autenticación
- Autorización
- CORS configurado
- Rate limiting
- Timeouts
- Manejo de retries
- Idempotencia donde corresponda
- Logs
- Métricas
- Tracing
- Health checks
- Error handling
- Secrets fuera del código
- Headers de seguridad
- Límites de tamaño
- Connection pooling
- Protección contra SSRF

---

## 12.2. Checklist para debugging

Cuando una aplicación no puede conectarse:

```
¿Está levantado el proceso?
        ↓
¿Está escuchando el puerto?
        ↓
¿El DNS resuelve?
        ↓
¿La IP es correcta?
        ↓
¿Existe routing?
        ↓
¿El firewall permite tráfico?
        ↓
¿El puerto está accesible?
        ↓
¿TLS funciona?
        ↓
¿La request llega?
        ↓
¿La aplicación responde?
        ↓
¿La dependencia funciona?

```

---

## 12.3. Comandos de consulta rápida

### DNS

```
dig example.com

```

### HTTP

```
curl -v https://example.com

```

### Headers

```
curl -I https://example.com

```

### Conectividad

```
ping example.com

```

### Ruta

```
traceroute example.com

```

### Puerto

```
nc -vz example.com 443

```

### Puertos locales

```
ss -tulpn

```

### Proceso usando puerto

```
lsof -i :8080

```

### Captura

```
sudo tcpdump -i any port 443

```

### TLS

```
openssl s_client -connect example.com:443

```

---

## 12.4. Resumen final

```
┌─────────────────────────────────────────────────────┐
│                 NETWORKING                           │
├─────────────────────────────────────────────────────┤
│ Application                                         │
│ HTTP / HTTPS / DNS / SSH / SMTP / WebSocket / gRPC │
├─────────────────────────────────────────────────────┤
│ Transport                                           │
│ TCP / UDP / QUIC                                    │
├─────────────────────────────────────────────────────┤
│ Internet                                            │
│ IPv4 / IPv6 / ICMP                                  │
├─────────────────────────────────────────────────────┤
│ Link                                                │
│ Ethernet / Wi-Fi / ARP                              │
├─────────────────────────────────────────────────────┤
│ Physical                                            │
│ Cable / Fiber / Radio                               │
└─────────────────────────────────────────────────────┘

```

### Conceptos clave

```
IP       → direccionamiento
MAC      → interfaz local
Port     → servicio
DNS      → nombre → IP
ARP      → IPv4 → MAC local
DHCP     → configuración automática
TCP      → transporte confiable
UDP      → datagramas
QUIC     → transporte moderno sobre UDP
TLS      → seguridad
HTTP     → comunicación web
REST     → estilo arquitectónico
WebSocket→ comunicación bidireccional
gRPC     → RPC sobre HTTP/2
NAT      → traducción de direcciones
Router   → conecta redes
Switch   → conecta dispositivos
Firewall → filtra tráfico
Proxy    → intermediario
CDN      → contenido distribuido
LB       → distribución de tráfico


```

---

## 12.5. Orden recomendado para estudiar

Si estás empezando desde cero:

```
1. Redes básicas
      ↓
2. OSI + TCP/IP
      ↓
3. IPv4 + CIDR
      ↓
4. MAC + ARP
      ↓
5. Routing + NAT
      ↓
6. Puertos + sockets
      ↓
7. TCP + UDP
      ↓
8. DNS
      ↓
9. HTTP
      ↓
10. TLS + HTTPS
      ↓
11. REST + APIs
      ↓
12. Cookies + Sessions
      ↓
13. CORS
      ↓
14. WebSockets / SSE
      ↓
15. Reverse Proxy + Load Balancer
      ↓
16. Docker Networking
      ↓
17. OAuth/OIDC
      ↓
18. Observabilidad
      ↓
19. Redes distribuidas
      ↓
20. Seguridad y rendimiento

```

---

## 12.6. Regla de oro para un desarrollador

Cuando algo falla en una aplicación distribuida, no pienses solamente:

> "El código está mal."

Piensa en toda la cadena:

```
Application
    ↓
DNS
    ↓
Network
    ↓
Routing
    ↓
Firewall
    ↓
TCP / UDP / QUIC
    ↓
TLS
    ↓
HTTP
    ↓
Proxy / Load Balancer
    ↓
Application
    ↓
Database / Service

```

**Una aplicación distribuida es, en gran medida, código que depende de otras computadoras a través de una red que puede fallar.**

Entender esa cadena es lo que convierte el conocimiento de redes en una herramienta práctica para desarrollo de software.