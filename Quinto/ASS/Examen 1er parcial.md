## Seguridad de la información
La **Seguridad de la Información**, que suele abreviarse como InfoSec, es un conjunto de procedimientos y herramientas de seguridad que protegen ampliamente la información confidencial de la empresa frente al uso indebido, acceso no autorizado, interrupción o destrucción. InfoSec comprende la seguridad física y del entorno, el control de acceso y la ciberseguridad. Suele incluir tecnologías como agente de seguridad de acceso a la nube (CASB), herramientas de engaño, detección y respuesta en el punto de conexión (EDR) y pruebas de seguridad para DevOps (DevSecOps), entre otras.
### Ciberseguridad
La **ciberseguridad** es la combinación de métodos, procesos, herramientas y comportamientos que protegen los sistemas informáticos, las redes y los datos de los ciberataques y del acceso no autorizado.
### Diferencia entre la seguridad informática y la ciberseguridad
La ciberseguridad es parte de la seguridad informática. También la ciberseguridad se enfoca únicamente en la protección virtual mientras que la seguridad informática también en la protección física.
## Conceptos básicos
El **riesgo** surge de la combinación de una amenaza y vulnerabilidad
Una **Amenaza** es cualquier situación que pueda explotar una vulnerabilidad y ocasionar un daño
La **vulnerabilidad** surge de un defecto de diseño, es una debilidad en el sistema que puede ser aprovechada por un atacante.
El **Impacto** se refiere a las consecuencias negativas que sufren una organización o individuo tras un ciberataque o incidente de seguridad, como la pérdida de datos, la interrupción de operaciones, daños financieros o a la reputación.
El **Control** es una medida técnica, administrativa o física diseñada para proteger sistemas y datos de amenazas, previniendo, detectando y respondiendo a incidentes de seguridad para mantener la confidencialidad, integridad y disponibilidad de la información.
El **Bug** es un error del código.
### Tipos de amenazas
1. Ataques de bots (Fuerza bruta)
2. Inyecciones de código - SQL Injection, Command Injection
3. Cross-site Scripting (XSS)
4. Uso de bibliotecas y dependencias vulnerables. LTS
5. Ingeniería Social
6. Exposición de datos sensibles - Cifrar solo los datos necesarios

Las intrusiones con un efecto importante tienen un impacto económico considerable y rara vez han llegado históricamente a llevar al cierre de operaciones de la empresa, siendo la principal intrusión las inyecciones SQL.

Muchas tecnologías de seguridad se comienzan a utilizar cuando se dan los dos siguientes elementos:
- Son fáciles de implantar
- Los auditores de seguridad comienzan a demandarlas
### Clasificación de vulnerabilidades
Las vulnerabilidades se clasifican en:
- **Software** (errores en el código o configuraciones inseguras),
- **Hardware** (defectos en el diseño de dispositivos físicos o firmware obsoleto)
- **Red** (debilidades en la infraestructura, como firewalls mal configurados)
- **Humanas** (errores o malas prácticas de los usuarios, como el uso de contraseñas débiles)
#### Vulnerabilidades de Software
- **Qué son**: Fallos en el código de aplicaciones, sistemas operativos o servicios que pueden ser explotados. 
- **Ejemplos**:
    - Software sin parches o desactualizado. 
    - Errores de configuración en la seguridad del software. 
    - Inyecciones de código o SQL (técnicas para introducir datos maliciosos). 
    - Fallas en la identificación y autenticación de usuarios. 
#### Vulnerabilidades de Hardware
- **Qué son**: Debilidades en los componentes físicos de los sistemas o en su firmware, el software integrado en el hardware. 
- **Ejemplos**:
    - Hardware antiguo que no soporta los estándares de seguridad actuales. 
    - Dispositivos de Internet de las Cosas (IoT) con firmware desactualizado y sin actualizaciones de seguridad. 
    - Vulnerabilidades físicas, como la falta de protección en la ubicación de los dispositivos. 
#### Vulnerabilidades de Red
- **Qué son**: Debilidades en la infraestructura de red y los protocolos de comunicación. 
- **Ejemplos**:
    - Firewalls mal configurados. 
    - Redes WiFi abiertas o con contraseñas débiles. 
    - Uso de protocolos de cifrado obsoletos. 
    - Puertos de red innecesarios abiertos. 
#### Vulnerabilidades Humanas
- **Qué son**: Errores, negligencias o malas prácticas por parte de las personas. 
- **Ejemplos**:
    - Ingeniería social (como el phishing) para engañar a los usuarios. 
    - Contraseñas débiles o inadecuadas. 
    - Falta de capacitación en seguridad para los empleados. 
    - No seguir políticas de seguridad establecidas.
### Preguntas
- ¿Qué diferencia hay entre una vulnerabilidad y un riesgo?
	*Un riesgo surge de una vulnerabilidad y amenazas, es decir, es el resultado, la vulnerabilidad es la causa*
- ¿Por qué la seguridad no es un producto, sino un proceso continuo?
	*Porque jamás termina de haber vulnerabilidades, amenazas y riesgos, siempre surgen nuevas por lo que se debe ir evolucionando y adaptando*
- ¿Qué papel juega el factor humano en la seguridad?
	*Juega un papel importante, porque es la primera barrera de seguridad que hay, si tu te pones en riesgo los atacantes tendrán un fácil acceso a tus datos o podrán alcanzar sus objetivos, si te sabes cuidar se las pondrás más difícil*

---
## Modelo CIA
**C** -> **Confidencialidad**: Asegura que los datos solo sean accesibles por usuarios autorizados
**I** -> **Integridad**: Garantiza que la información no pueda ser alterada
**A** -> **Availability**: Disponibilidad, que siempre estén disponibles los métodos para evitar ataques, fallas, etc.
### Ejemplos
#### Confidencialidad (Confidentiality)
- **Qué significa:** Garantizar que la información solo sea accesible por las personas autorizadas.
- **Violación típica:** Cuando alguien no autorizado obtiene información sensible.
- **Ejemplo:**
    - Un hacker roba la base de datos de usuarios de un banco y obtiene nombres, direcciones y números de tarjeta de crédito.
    - Una persona comparte documentos internos de la empresa en internet sin autorización.
#### Integridad (Integrity)
- **Qué significa:** Garantizar que la información no sea alterada de manera no autorizada y que sea precisa y confiable.
- **Violación típica:** Cuando los datos se modifican sin autorización o de forma maliciosa.
- **Ejemplo:**
    - Un empleado cambia el saldo de su cuenta bancaria en el sistema para beneficiarse.
    - Un archivo descargado desde internet fue modificado con malware y ahora está corrupto o contiene código malicioso.
#### Disponibilidad (Availability)
- **Qué significa:** Garantizar que la información y los sistemas estén disponibles cuando los usuarios autorizados los necesiten.
- **Violación típica:** Cuando un sistema o servicio no está accesible.
- **Ejemplo:**
    - Un ataque **DDoS** (Denegación de Servicio) a un sitio web que lo hace inaccesible para los clientes.
    - El servidor de correo de una empresa se cae por fallas en la infraestructura y los empleados no pueden enviar ni recibir emails.
### Preguntas
- ¿Qué ejemplos existen de pérdida de integridad de la información?
	*Puede ser que un empleado de un banco cambie el saldo de su cuenta para beneficiarse, la inyección SQL o el acceso a datos sin acceso autorizado*
- ¿Qué medidas garantizan la disponibilidad en un servicio web?
	*Limitar el número de consultas (requests), tener una infraestructura que soporte la carga que se solicite, etc*

---
## Ciberseguridad como proceso
![[Pasted image 20251008232552.png]]
1. *Gestión de Riesgos*
	- Con los resultados de la auditoría podemos gestionar los riesgos
	- Me permitirá saber qué es lo que funciona y lo que no*
2. *Análisis de Riesgos (Risk Assesment)*
	- Relación entre impacto y probabilidad
	- Probabilidades
		- Muy Bajo
		- Bajo
		- Medio
		- Medio-Alto
		- Alto
		- Muy Alto
		- Crítico
	- ![[Captura de pantalla 2025-09-02 a la(s) 11.06.57 p.m..png]]
3. *Diseño de controles (Design)*
	- Cualquier cosa que:
		- Prevenir
			- Estar listo para el riesgo
		- Mitigar
			- Minimizar el riesgo e impactos
			- Eliminar las consecuencias
		- Transferir
			- Pasar el manejo del riesgo a un equipo adecuado
		- Aceptar
			- Aceptar que ocurrió
4. *Diseño de procedimientos (Design)*
	- Diseñar tácticas y acciones para prevenir y mitigar
5. *Implementación (Implementation)*
	- Aplicar los procedimientos
	- Contraseña segura por ejemplo
		- 4 cosas que me gustan
			- DormirComerHarryVoleibol
6. *Auditoría*
	- Prestar atención en las políticas
	- Evaluación sistemática de las políticas, procedimientos y controles de seguridad de una organización
	- Sirve para identificar vulnerabilidades, evaluar su postura de seguridad y garantizar el cumplimiento de normativas
### Relación con el ciclo PHVA (Planear - Hacer - Verificar - Actuar)
Si analizamos la estrella del proceso de ciberseguridad podemos observar que primero **planeamos** en la fase de análisis, diseñamos lo que debemos **hacer**, **verificamos** que la solución es viable en la auditoría y finalmente **actuamos** en la implementación.
### Importancia de la retroalimentación y la actualización constante
Los ataques, amenazas y riesgos evolucionan, la peor amenaza de hoy puede ser la más tranquila mañana, por lo que con cada solución que se da es importante tener una retroalimentación con los resultados obtenidos para que en caso de que siga vulnerable una solución se corriga lo más rápido posible.
### Preguntas
- ¿Por qué el proceso de ciberseguridad nunca termina?
	*Porque la seguridad nunca será suficiente, los atacantes siempre encontrarán formas de hacer daño y conseguir lo que quieren y es nuestro trabajo adaptarnos*
- ¿Qué ocurre si se omite la auditoría dentro del proceso?
	*Puede que la solución viole una política de la empresa o no cumpla alguna norma, lo cuál puede causar problemas legales MUY caros*
- ¿Cómo se relacionan las etapas de diseño e implementación?
	*El diseño es donde planeamos lo que vamos a tener que implementar, nos daría como resultado una receta de cómo hacer lo que debemos implementar. La implementación toma como base el diseño para construirlo y crear una solución que cumpla con los requisitos*

---
## Análisis y gestión de riesgos
### Análisis de riesgo
- Comprende la identificación de:
	- Activos informáticos
	- Vulnerabilidades
	- Amenazas
- Evalúa la probabilidad de ocurrencia y el impacto de las mismas
- Ejemplo: Revisar un servidor de la empresa y notar que tiene un firewall desactualizado, además de que los usuarios usan contraseñas débiles.
### Gestión de riesgo
- Proceso sistemático de identificar, analizar, priorizar y tratar las amenazas y vulnerabilidades que podrían afectar la información, los sistemas y la continuidad de una organización
- Prioriza los riesgos según su impacto y probabilidad
- Proceso que se hace después de analizar los riesgos
- Decide el trato que se le da a los riesgos: evitarlos, mitigarlos, transferirlos (ej. seguro) o aceptarlos
- Monitorea y revisa constantemente que las medidas funcionen
- Ejemplo: Actualizar el firewall, implementar autenticación multifactor, capacitar a los usuarios en contraseñas seguras
### Diferencia entre análisis y gestión de riesgos
- El análisis es la situación actual, lo que está sucediendo (qué riesgos existen y qué tan graves son) mientras que la gestión es lo que se hace después de analizar los riesgos (qué hacemos para protegernos)
### Etapas del Análisis de Riesgos
El análisis de riesgos es un proceso sistemático para identificar, evaluar y priorizar los riesgos que podrían afectar la información y los sistemas de una organización.
1. Identificación de activos y amenazas
	- **Activos:** Todo lo que tiene valor para la organización (datos, servidores, aplicaciones, hardware, etc.).
	- **Amenazas:** Eventos que podrían dañar los activos (hackers, malware, fallos humanos, desastres naturales).
2. Evaluación de vulnerabilidades
	- Detectar **debilidades** en los activos que podrían ser explotadas por las amenazas.
	- Ejemplo: software desactualizado, contraseñas débiles, falta de respaldo.
3. Cálculo del impacto y probabilidad
	- **Impacto:** Qué tan grave sería si la amenaza se materializa.
	- **Probabilidad:** Qué tan probable es que ocurra.
	- Combinando ambos se determina la **criticidad del riesgo**.
4. Clasificación y priorización de riesgos
	- Ordenar los riesgos según su nivel de amenaza.
	- Se puede usar una **matriz de riesgo**:

| Probabilidad \ Impacto | Bajo  | Medio | Alto  |
| ---------------------- | ----- | ----- | ----- |
| Alta                   | Medio | Alto  | Alto  |
| Media                  | Bajo  | Medio | Alto  |
| Baja                   | Bajo  | Bajo  | Medio |
- Esto ayuda a decidir cuáles riesgos requieren atención inmediata.
5. Selección de controles y mitigación
	- Elegir **medidas para reducir o manejar los riesgos**.
	- Tipos de controles:
		- **Preventivos:** Evitan que ocurra el riesgo (firewalls, capacitación en seguridad, políticas de contraseñas).
		- **Detectivos:** Identifican riesgos cuando ocurren (sistemas de monitoreo, antivirus, alertas de intrusión).
		- **Correctivos:** Reducen el impacto después de que ocurre un incidente (respaldos, planes de recuperación, parches de seguridad).

💡 **Resumen visual:**  
1. Identificar → 2. Evaluar → 3. Calcular → 4. Priorizar → 5. Mitigar  

Esto forma la base del **análisis de riesgos en ciberseguridad** y ayuda a proteger la información de manera estructurada.
### Preguntas
- ¿Qué factores determinan el nivel de riesgo?
	*El impacto y la probabilidad del riesgo*
- ¿Por qué es importante registrar y actualizar los riesgos?
	*Para poder adaptar los controles a las necesidades y riesgos que surjan, lo cual nos puede ayudar a priorizar recursos y mantener la seguridad vigente*
- Da un ejemplo de control preventivo y uno correctivo.
	*Un control preventivo sería solicitar contraseñas de al menos 8 carácteres con números, caracteres especiales, mayúsculas y minúsuclas, mientras que uno correctivo sería restaurar la contraseña después de un robo de credenciales o recuperar datos cifrados tras un ataque. En pocas palabras, los preventivos suceden antes de un ataque y los correctivos después*

---
## Actores en la Ciberseguridad
### **Principales actores:**
- **Actor de Estado:**  
  Gobiernos y organismos que crean leyes, políticas públicas y estrategias de defensa digital (ej. policía cibernética, CERT).  
  → *Ejemplo:* el gobierno responde ante ataques a infraestructuras críticas.

- **Hackers:**  
  - 🧢 **White Hat (Ético):** buscan vulnerabilidades para reforzar la seguridad, con permiso.  
  - 🕶️ **Black Hat:** las explotan con fines maliciosos (robo, daño, extorsión).  
  - ⚪ **Grey Hat:** encuentran fallos sin permiso, pero no necesariamente con malas intenciones.

- **Hacktivistas:**  
  Actúan por **motivos políticos o ideológicos**, no económicos.  
  → *Ejemplo:* grupos que filtran información para denunciar corrupción.

- **Actores internos (Insiders):**  
  Personas dentro de la organización que pueden causar daños, ya sea:  
  - **Malintencionados:** filtran datos o sabotean sistemas.  
  - **No intencionados:** cometen errores (ej. clic en phishing, mala configuración).

- **Usuarios y empresas:**  
  Tienen la **responsabilidad compartida** de mantener buenas prácticas (contraseñas seguras, actualizaciones, respaldo de datos).
### Preguntas
- **Hacker ético vs ciberdelincuente:** el primero tiene autorización y busca proteger, el segundo actúa sin permiso para dañar.  
- **Actor interno sin mala intención:** error humano, desconocimiento o descuido.  
- **Papel del Estado:** regular, proteger infraestructuras críticas y coordinar respuestas ante ataques.

---

## Amenazas y Ataques Comunes

### **Tipos de ataque:**
| Tipo de ataque                       | Descripción                                    | Impacto                       |
| ------------------------------------ | ---------------------------------------------- | ----------------------------- |
| **DoS / DDoS**                       | Saturar un servidor hasta hacerlo inaccesible. | Disponibilidad                |
| **Phishing / Ingeniería social**     | Engañar usuarios para robar credenciales.      | Confidencialidad              |
| **Sniffing**                         | Interceptar datos en tránsito.                 | Confidencialidad              |
| **Spoofing**                         | Suplantar identidad (IP, correo, DNS).         | Integridad                    |
| **Inyección SQL / XSS**              | Insertar código malicioso en una web.          | Integridad / Confidencialidad |
| **Malware / Ransomware / Keylogger** | Software malicioso que daña, cifra o espía.    | CIA (los tres principios)     |
### **Vectores de ataque:**  
Correos electrónicos, navegadores, redes Wi-Fi, dispositivos externos, redes sociales.
### **Medidas de mitigación:**  
Actualizaciones, antivirus, firewalls, capacitación, autenticación multifactor, respaldos.
### 💭 Preguntas
- **Ataque activo:** altera datos o sistemas (ej. DDoS, malware).  
- **Ataque pasivo:** solo observa/intercepta (ej. sniffing).  
- **Phishing efectivo:** usuarios sin formación no reconocen engaños o enlaces falsos.

---
## Herramientas de Evaluación de Vulnerabilidades
### **OWASP ZAP (Zed Attack Proxy):**
- Herramienta gratuita y de código abierto para **análisis de seguridad web**.
- Permite encontrar vulnerabilidades en aplicaciones antes de que sean explotadas.
### **Tipos de escaneo:**
- **Pasivo:** observa tráfico sin modificarlo (seguro, sin afectar el sistema).  
- **Activo:** simula ataques para detectar fallos (más completo, pero invasivo).
### **Vulnerabilidades detectadas:**
- XSS (Cross-Site Scripting)  
- SQLi (Inyección SQL)  
- CSRF (Cross-Site Request Forgery)  
- Headers inseguros o mala configuración HTTPS
### **Uso ético y legal:**
- Solo con autorización del propietario.  
- Documentar hallazgos y reportar de forma responsable.  
- No alterar datos reales ni causar daño.
### 💭 Preguntas
- ¿Qué tipo de vulnerabilidades detecta OWASP ZAP?
	*Detecta XSS, SQLi, CSRF y configuraciones inseguras*
- ¿Qué precauciones se deben tener al realizar un escaneo?
	*Nunca escanear sin permiso, evitar entornos de producción*
- ¿Qué diferencia hay entre un test pasivo y uno activo?
	*Test **activo** = más invasivo; **pasivo** = observación*

---
## Ética en la Ciberseguridad
### **Principios éticos:**
- **Responsabilidad:** actuar profesionalmente y asumir consecuencias.  
- **Confidencialidad:** no divulgar información sensible.  
- **Legalidad:** siempre con consentimiento y dentro del marco legal.
### **Buenas prácticas:**
- Obtener consentimiento antes de hacer pruebas.  
- Documentar todo el proceso y reportar hallazgos de forma segura.  
- Evitar el uso indebido de la información.  
- Realizar **divulgación responsable** de vulnerabilidades (responsible disclosure).
### **Consecuencias legales:**
- Pruebas o escaneos sin permiso = delito (acceso no autorizado).  
- Robo o daño de información puede implicar sanciones penales.

### Preguntas
- **Importancia de la ética:** protege la confianza, la reputación y evita consecuencias legales.  
- **Prueba de penetración ilegal:** cuando se realiza sin consentimiento del propietario.  
- **Responsabilidad:** cumplir normas, proteger datos y actuar con integridad.

---
## 📖 Tip final
Si recuerdas siempre el modelo **CIA (Confidencialidad, Integridad y Disponibilidad)**, podrás relacionar cualquier amenaza, ataque o control con uno de esos tres principios.