## 3.1. Zonas de una infraestructura de red
Una **zona de seguridad de red** (o segmento de red) es una agrupación lógica de sistemas de información dentro de la red empresarial. La **segmentación de la red** es un componente fundamental de una estrategia de seguridad de la información.
### Razón fundamental (Rationale)
La red empresarial se divide en segmentos manejables con varios objetivos:

1. **Reducir la superficie de ataque**.
2. **Limitar el alcance del cumplimiento normativo** (por ejemplo, para sistemas sujetos a PCI o HIPAA).
3. **Limitar la exfiltración de datos**.
4. **Compartimentar sistemas**.
5. **Aumentar la disponibilidad**.

Sin una segmentación adecuada, un atacante que logre entrar a la red podría acceder a todo. Una vez segmentada la red, los controles de seguridad pueden distribuirse a través de las zonas para reducir el riesgo.
### Características de las Zonas
Cada zona tiene diferentes requisitos de seguridad, pero generalmente:
*   Tiene un **perímetro bien definido** y protección estricta de límites.
*   Los sistemas dentro de la zona son susceptibles a tipos similares de amenazas cibernéticas.
*   Cada zona debe tener un **punto de entrada discreto** definido por un *firewall* de inspección de estado.
*   Solo se permite el tráfico necesario para el negocio para entrar o salir de una zona.
*   El tráfico de entrada y salida de la zona se **filtra y monitorea** en el perímetro.
### Tipos de Zonas y Niveles de Confianza
El modelo de zonas se basa en el concepto de "confianza". La confianza aumenta desde la zona exterior hacia la zona más interna que alberga los datos críticos de la organización.

| Zona                                            | Nivel de Confianza                   | Descripción y Sistemas Típicos                                                                                                                                                                                                                                                  |
| :---------------------------------------------- | :----------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Internet Zone**                               | **Sin Confianza** (No Trust)         | Incluye Internet, PSTN, y redes públicas ISP. Es la zona menos confiable y generalmente fuera del control de la organización.                                                                                                                                                   |
| **External DMZ** (Zona Desmilitarizada Externa) | **Baja Confianza** (Low Trust)       | Alberga sistemas que requieren exposición a Internet. El tráfico debe canalizarse a través de estos sistemas. Contiene servidores web externos, pasarelas de correo electrónico, servidores FTP, etc..                                                                          |
| **Enterprise Zone** (Zona Empresarial)          | **Confianza Media** (Medium Trust)   | Residen los sistemas de los usuarios finales (estaciones de trabajo, impresoras, teléfonos VoIP). La protección de *endpoints* es crítica aquí.                                                                                                                                 |
| **Extranet Zone**                               | **Confianza Media** (Medium Trust)   | Conexiones con socios comerciales externos de alta confianza. El tráfico debe ser monitoreado y filtrado. Los sistemas en esta zona están fuera del control de la organización.                                                                                                 |
| **Internal DMZ** (Zona Desmilitarizada Interna) | **Alta Confianza** (High Trust)      | Media el acceso entre los sistemas en las Zonas Empresarial/Extranet y la Zona Restringida. Típicamente viven aquí los servidores de aplicaciones internas.                                                                                                                     |
| **Restricted Zone** (Zona Restringida)          | **Máxima Confianza** (Highest Trust) | Aloja sistemas críticos para el negocio y grandes repositorios de información sensible. Un compromiso aquí impactaría negativamente la reputación o ventaja competitiva. Requiere el más alto nivel de protección. Contiene bases de datos de usuarios, RR.HH., finanzas, etc.. |
| **Management Zone** (Zona de Gestión)           | **Máxima Confianza** (Highest Trust) | Aloja sistemas de administración y monitoreo (servidores de rendimiento, gestión de logs, *jump hosts*, sistemas de gestión de seguridad). Son objetivos principales de ataques, ya que tienen la capacidad de acceder a cualquier otra zona.                                   |
La comunicación generalmente solo se permite entre sistemas en zonas **adyacentes**.
## 3.2. Topologías de defensa
Las topologías o arquitecturas de defensa presentadas en las fuentes giran en torno a una estrategia de **Defensa en Profundidad** (defense-in-depth) con un enfoque centrado en la información. El objetivo es identificar los datos más valiosos y construir capas de defensa a su alrededor.

Específicamente, las fuentes detallan modelos de despliegue basados en zonas para Sistemas de Detección y Prevención de Intrusiones (IDS/IPS), así como para la captura de paquetes. La correcta colocación de los sensores es crucial para mejorar la visibilidad y reducir las alertas.

Estos modelos pueden clasificarse por el tipo de tráfico que monitorean:  
### 1. Monitoreo de Tráfico Inter-zona (Inter-zone Traffic Monitoring)

Este monitoreo busca detectar tráfico malicioso que pudo haber pasado el *firewall* perimetral de la zona y actúa como auditoría para asegurar que las políticas del *firewall* funcionan correctamente.

*   **Modelo de Despliegue con TAP de Red (Network TAP):** Un TAP de red se implementa "en línea" (inline) entre el *switch* central de la zona y el *firewall* perimetral. El sensor IDS conectado al puerto de monitoreo del TAP recibe todo el tráfico. Este método aumenta la visibilidad y elimina la pérdida de paquetes (*dropped packets*).

*   **Modelo de Despliegue con IPS en Línea:** Un sensor IPS se despliega en línea en la misma posición (entre el *switch* central y el *firewall* perimetral). Se requiere una evaluación de riesgo rigurosa antes de optar por esta opción, ya que puede aumentar la latencia o bloquear tráfico legítimo debido a falsos positivos.
### 2. Monitoreo de Tráfico Intra-zona (Intra-zone Traffic Monitoring)
La motivación es detectar el movimiento lateral entre sistemas dentro de la misma zona (por ejemplo, brotes de *worms* o actividades fraudulentas internas). Esto es especialmente importante para las Zonas Restringidas y de Gestión.  

*   **Uso de Puerto de Replicación (Spanning Port):** El sensor IDS puede conectarse directamente a un puerto de replicación (*spanning port*) configurado en el *switch* central de la zona para espejear el tráfico de las VLANs críticas.

*   **Uso de SPAN TAP:** Un SPAN TAP (que no está "en línea") puede conectarse al puerto de replicación del *switch* central, replicando el tráfico a múltiples sensores. Esto proporciona flexibilidad cuando se requieren varias herramientas de monitoreo.

*   **Uso de Balanceador de Carga IDS (IDS Load Balancer):** Si el tráfico excede la capacidad de un solo sensor, un balanceador de carga IDS puede conectarse al puerto de replicación y distribuir el tráfico entre múltiples sensores IDS.
### 3. Monitoreo de Tráfico VPN (Enterprise Zone)
En la Zona Empresarial, el punto más vulnerable suele ser donde los usuarios remotos acceden a recursos internos a través de una infraestructura VPN.

*   Se debe implementar un sensor IDS o IPS **entre el *gateway* VPN y el *switch* central de la zona** para monitorear el **tráfico no cifrado** que viaja entre los usuarios remotos y los recursos internos.
## 3.3. Norma de Interconexión de la Seguridad (NIS)
La sigla o término **"Norma de Interconexión de la Seguridad (NIS)"** **no aparece** en el material de origen proporcionado.
Por lo tanto, no puedo proporcionarle una explicación de esta norma específica basándome en los textos proporcionados. Los documentos citan varias normas y publicaciones de seguridad, incluyendo aquellas del Instituto Nacional de Estándares y Tecnología (NIST) y la Guía de Seguridad de Línea Base del Gobierno de Canadá, pero no la NIS.