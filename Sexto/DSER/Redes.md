## Performance SD (Sistema Distribuido)
### PAN
- De 1 a 10 metros aproximadamente
	- Bluetooth 802.15.1
	- Accesorios wearable
### LAN
- Redes locales
	- Ethernet 802.3
	- Wifi
### MAN
- Ciudades
	- AMT
### WAN
- Países
	- X25/FrameRelay
### Internet
- Una red de redes
- Engloba todas las anteriores
## Protocolos
- Trabajan sobre modelos de referencia
	- OSI -> Teórico
	- TCP/IP -> Práctico
### Modelo TCP/IP
- Menos utilizado para propósitos teóricos
- Los protocolos asociados con las capas son ampliamente utilizados en la práctica
- El modeo original incluye cuatro capas, el actualizado cinco


| Layer # | Layer Name          | Protocol          | Protocol Data Unit | Addressing  |
| ------- | ------------------- | ----------------- | ------------------ | ----------- |
| 5       | Application         | HTTP, SMTP, etc   | Messages           | n/a         |
| 4       | Transport           | TCP/UDP           | Segments/Datagrams | Port #s     |
| 3       | Network or Internet | IP                | Packets            | IP Address  |
| 2       | Data Link           | Ethernet, Wi-Fi   | Frames             | MAC Address |
| 1       | Physical            | 10 Base T, 802.11 | Bits               | n/a         |

| TCP/IP Model   |
| -------------- |
| Application    |
| Transport      |
| Internet       |
| ost-to-Network |
### UDP
- Es un protocolo sin conexión y no contiene funciones de confiabilidad, control de flujo o recuperación de errores
- Los encabezados de UDP contienen menos bytes por lo que sobrecarga la red menos que TCP
- Es útil en situaciones en las que los mecanismos de confiabilidad de TCP no son necesarios (los protocolos de capas superiores podrían proveer control de errores y flujo)
- A diferencia de TCP, los paquetes UDP se pueden descartar antes de llegar a su destino

<---------- 32 bits ---------->
Source Port | Destination Port
Length         | checksum
        Data
### TCP
- Es un protocolo **orientado a conexión** que provee un servicio dúplex (bidireccional simultáneo), con acuso de recibo y flujo controlado
- Mueve datos en un flujo continuo, no estructurado de bytes
- Los números de secuencia identifican los bytes dentro del flujo
- Puede soportar numerosas conversaciones simultáneas

| Source Port                      | Destination Port |
| -------------------------------- | ---------------- |
| Sequence Number                  |                  |
|                                  |                  |
| Data Offset \| Reserved \| Flags |                  |

#### Paquetes TCP
- Negociación en tres pasos (three way handshake)
-  Cuando el Emisor TCP desea establecer una conexión mando un segmento SYN para sincronizarse con el receptor
- El receptor contesta con un segmento SYN-ACK como acuse de recepción exitosa
- El emisor envía otro segmento de ACK e inicia con el envío de datos

HTTP Client **--SYN_SENT-->** HTTP Server **--SYN_ACK-->** HTTP Client **--ACK-->** HTTP Server **<--CONNECTION ESTABLISHED-->**
## Problemas de red relevantes para los SD
- Las primeras redes de computadoras se diseñaron para cumplir con unos pocos requisitos de aplicaciones relativamente simples:
	- Transferencia de archivos
	- Inicio de sesión remoto
	- Correo electrónico y grupos de noticias
### Desempeño
- Los parámetros que son de interés son los que afectan la velocidad con la que los mensajes se pueden transferir entre dos computadoras:
	- Latencia
	- Tasa de transferencia de datos punto a punto (throughput)