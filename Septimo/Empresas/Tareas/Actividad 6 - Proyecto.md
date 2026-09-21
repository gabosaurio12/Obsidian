## Proyecto de Organización: Plataforma IoT para Mantenimiento Predictivo en PyMEs Industriales

### Enfoque de la empresa

La empresa estará enfocada en **resolver problemas operativos mediante soluciones tecnológicas**, combinando desarrollo de software, Internet de las Cosas (IoT), análisis de datos y, posteriormente, inteligencia artificial.

La idea se centra en desarrollar soluciones que puedan adaptarse a las necesidades de pequeñas y medianas empresas industriales que utilizan maquinaria, pero que no cuentan con sistemas avanzados para conocer continuamente el estado de sus equipos.

# 1. Tema o proyecto que se quiere desarrollar

## Plataforma IoT de monitoreo y mantenimiento predictivo para PyMEs industriales

Se propone el desarrollo de una plataforma tecnológica capaz de recopilar información de maquinaria mediante sensores IoT y mostrarla en una aplicación web.

El sistema permitiría monitorear variables como:

- Temperatura.
- Vibración.
- Consumo eléctrico.
- Horas de funcionamiento.
- Estado de operación.
- Cambios anormales en el comportamiento de una máquina.

La información sería procesada para generar **indicadores, historial, alertas y recomendaciones de mantenimiento**.

En una primera etapa, el sistema utilizaría reglas y umbrales configurables. Posteriormente podría incorporar modelos de análisis de datos o aprendizaje automático para detectar anomalías y anticipar posibles fallas.

# 2. Problema, Necesidad o Situación a Cambiar (PNSC)

Muchas PyMEs industriales dependen de maquinaria cuya falla puede detener parcial o totalmente sus operaciones. Sin embargo, el mantenimiento puede seguir realizándose de manera reactiva o mediante revisiones periódicas que no necesariamente reflejan el estado real del equipo.

Esto genera una situación en la que una empresa puede enterarse de un problema cuando la máquina ya presenta una falla, en lugar de contar con información suficiente para detectar señales tempranas.

El problema no es únicamente la falla de una máquina, sino la **falta de información accesible y oportuna para tomar decisiones de mantenimiento**.

Las empresas grandes pueden recurrir a plataformas industriales de IoT, monitoreo y mantenimiento predictivo. Sin embargo, una oportunidad de proyecto consiste en crear una alternativa más sencilla, modular y accesible para empresas con menor infraestructura tecnológica.

# 3. PNSC expresada en una oración

> **Las PyMEs industriales necesitan detectar oportunamente posibles fallas en su maquinaria porque la falta de monitoreo continuo puede provocar paros no planificados, costos de mantenimiento y pérdidas operativas.**

# 4. Propuesta de solución

Se propone desarrollar una **plataforma de monitoreo industrial basada en IoT**, compuesta por sensores físicos, un sistema de comunicación y una aplicación de software.

### Funcionamiento general

```text
Máquina
   ↓
Sensores IoT
   ↓
Dispositivo/Gateway
   ↓
Servidor / API
   ↓
Base de datos
   ↓
Motor de análisis
   ↓
Dashboard web
   ↓
Alertas y recomendaciones
```

### Componentes principales

**1. Sensores**

Se instalarían sensores dependiendo de las características de cada máquina. Por ejemplo:

- Sensor de temperatura.
- Sensor de vibración.
- Sensor de corriente/consumo eléctrico.
- Sensor de humedad, cuando sea relevante.

**2. Gateway IoT**

Un dispositivo local recopilaría los datos de los sensores y los enviaría al sistema.

Esto permitiría diseñar la solución para funcionar incluso en escenarios donde la conectividad a Internet sea limitada, almacenando temporalmente los datos y sincronizándolos posteriormente.

**3. Backend**

El backend recibiría, validaría y almacenaría los datos.

También sería responsable de:

- Gestionar usuarios.
- Registrar máquinas.
- Configurar límites.
- Procesar mediciones.
- Generar alertas.
- Consultar históricos.
- Administrar permisos.

**4. Dashboard**

La empresa podría consultar desde una aplicación web:

- Estado actual de las máquinas.
- Temperatura y vibración.
- Historial de mediciones.
- Alertas.
- Horas de operación.
- Eventos registrados.
- Indicadores de mantenimiento.

**5. Sistema de alertas**

Cuando una variable salga de un rango establecido, el sistema podría generar una alerta.

Ejemplo:

> "Motor 03: vibración superior al rango configurado durante 8 minutos."

**6. Análisis predictivo**

En una etapa posterior, el sistema podría aprender de los datos históricos para detectar comportamientos anormales.

La finalidad no sería simplemente decir que una máquina está fuera de un límite, sino identificar patrones que puedan indicar una posible falla.

# Acercamiento empático al PNSC

## 1. ¿Cuál es la PNSC clave que se está intentando abordar y por qué es importante?

La PNSC clave es la **dificultad de las PyMEs industriales para conocer en tiempo real el estado de sus equipos y detectar señales tempranas de posibles fallas**.

Es importante porque una falla inesperada puede afectar diferentes áreas de una empresa:

- Producción.
- Costos.
- Entregas.
- Personal.
- Calidad.
- Seguridad.
- Satisfacción de los clientes.

Desde la perspectiva de una empresa pequeña, detener una máquina crítica puede representar un problema considerable porque normalmente existen menos equipos de respaldo y menos recursos disponibles para absorber interrupciones.

La solución busca cambiar el enfoque de:

> "La máquina falló, ahora debemos repararla."

a:

> "Tenemos información que nos permite detectar que algo está cambiando y actuar antes de que la falla se convierta en un paro."

# 2. ¿Para quién es un PNSC?

El PNSC afecta principalmente a:

### Usuarios directos

- Dueños de PyMEs industriales.
- Encargados de mantenimiento.
- Técnicos.
- Supervisores de producción.
- Personal de operaciones.

### Usuarios indirectos

- Trabajadores de producción.
- Personal administrativo.
- Proveedores.
- Clientes de la empresa.

Una solución de este tipo tendría que considerar que no todos los usuarios tienen conocimientos especializados en IoT, análisis de datos o programación.

Por eso, la interfaz debe presentar información técnica de manera sencilla y accionable.

Por ejemplo, en lugar de mostrar únicamente:

> Vibración = 8.72 mm/s

podría mostrar:

> **⚠️ Posible anomalía en Motor 03**  
> La vibración ha aumentado 34% respecto al comportamiento habitual.

# 3. ¿Qué factores del entorno forman parte de este PNSC?

## Factores económicos

Las PyMEs suelen tener recursos más limitados que las grandes empresas para invertir en infraestructura tecnológica.

Por ello, una solución industrial puede resultar poco atractiva si requiere una inversión inicial elevada o una infraestructura demasiado compleja.

## Factores tecnológicos

Las empresas pueden tener maquinaria de diferentes fabricantes y generaciones.

Esto significa que una solución debe considerar:

- Equipos modernos.
- Maquinaria antigua.
- Diferentes protocolos.
- Sensores externos.
- Diferentes niveles de conectividad.

## Factores humanos

El personal de mantenimiento posee conocimiento práctico de las máquinas que puede ser muy valioso.

La plataforma no debería intentar reemplazar al técnico, sino **proporcionarle información que facilite sus decisiones**.

## Factores culturales

Algunas organizaciones pueden estar acostumbradas a trabajar mediante inspecciones manuales y mantenimiento reactivo.

La adopción tecnológica dependerá de que el sistema sea sencillo de utilizar y demuestre un beneficio real.

## Factores de seguridad

Una falla de maquinaria no necesariamente representa únicamente un costo económico. Dependiendo del equipo y del proceso industrial, también puede representar un riesgo para los trabajadores.

Por esta razón, las alertas deben complementar los procedimientos de seguridad existentes y no sustituirlos.

# 4. ¿Por qué vale la pena solucionar este PNSC?

Resolver este problema puede aportar valor en diferentes niveles:

### Para la empresa

- Reducir interrupciones inesperadas.
- Mejorar la planeación del mantenimiento.
- Tener mayor visibilidad de los equipos.
- Conservar un historial de funcionamiento.
- Tomar decisiones basadas en datos.

### Para el personal

- Reducir revisiones innecesarias.
- Detectar problemas con mayor anticipación.
- Tener información histórica para diagnosticar fallas.

### Para los clientes

Una operación más estable puede ayudar a mantener una producción más predecible y cumplir con los tiempos de entrega.

### Para la empresa tecnológica

El proyecto puede convertirse en una solución modular que se adapte a diferentes industrias.

# 5. ¿Qué sabemos del PNSC?

Sabemos que existen tecnologías industriales capaces de recopilar datos de equipos, almacenarlos, visualizarlos y generar alertas.

Por ejemplo, **AWS IoT SiteWise** permite recopilar, organizar, almacenar y monitorear datos de equipos industriales. También permite trabajar con métricas, alarmas y análisis de datos. AWS señala que estas capacidades pueden utilizarse para identificar problemas de equipos y reducir interrupciones de producción.

[Fuente: AWS IoT SiteWise](https://docs.aws.amazon.com/iot-sitewise/latest/userguide/)

También existen soluciones orientadas específicamente al monitoreo de condiciones. **Samsara**, por ejemplo, ofrece sensores inalámbricos para monitorear variables como vibración, temperatura y energía, además de dashboards y alertas.

[Fuente: Samsara Condition Monitoring](https://www.samsara.com/products/equipment-tracking/condition-monitoring)

Esto demuestra que el problema tiene una aplicación tecnológica real y que existe un mercado alrededor del monitoreo de activos y mantenimiento basado en datos.

También sabemos que las soluciones de mantenimiento predictivo pueden utilizar modelos de aprendizaje automático para detectar comportamientos anormales. AWS documenta la integración de IoT SiteWise con herramientas de detección de anomalías para equipos industriales.

[Fuente: AWS - Detect anomalies with Lookout for Equipment](https://docs.aws.amazon.com/iot-sitewise/latest/userguide/anomaly-detection.html)

# 6. ¿Qué no sabemos o qué falta conocer mejor?

Antes de desarrollar la solución sería necesario investigar directamente a las empresas objetivo.

### Información que falta obtener

1. ¿Qué tipo de maquinaria utilizan?
2. ¿Cuáles son las fallas más frecuentes?
3. ¿Cuánto cuesta aproximadamente una hora de paro?
4. ¿Qué variables revisan actualmente?
5. ¿Con qué frecuencia realizan mantenimiento?
6. ¿Cómo registran actualmente las fallas?
7. ¿Utilizan hojas de cálculo, sistemas especializados o registros físicos?
8. ¿Qué tan estable es su conexión a Internet?
9. ¿Qué presupuesto podrían destinar a una solución de este tipo?
10. ¿Qué información consideran realmente útil?
11. ¿Qué tan dispuestos están a instalar sensores en maquinaria existente?
12. ¿Qué requisitos de seguridad informática tienen?
13. ¿Qué protocolos utilizan sus equipos?
14. ¿Qué tipo de alertas consideran útiles y cuáles podrían convertirse en ruido?

Estas preguntas deberían investigarse mediante entrevistas, observación directa y pruebas piloto.

# 7. ¿Quién ha resuelto algo similar?

Existen diferentes empresas y plataformas que han desarrollado soluciones relacionadas.

## AWS IoT SiteWise

AWS IoT SiteWise permite recopilar, organizar, analizar y visualizar información proveniente de equipos industriales. También permite definir modelos de activos, métricas y alarmas.

La plataforma está orientada a construir soluciones industriales sobre infraestructura de AWS.

**Qué podemos aprender:**

- Modelado de activos.
- Recolección de datos industriales.
- Métricas.
- Alarmas.
- Arquitecturas IoT en la nube.

Fuente: [AWS IoT SiteWise](https://docs.aws.amazon.com/iot-sitewise/latest/userguide/)

## Siemens Insights Hub

**Siemens Insights Hub** es una plataforma de Industrial IoT orientada a conectar activos, recopilar información y obtener datos que permitan mejorar procesos industriales.

Siemens describe la plataforma como una forma de obtener información accionable a partir de datos de activos y operaciones, incluyendo monitoreo de activos y mejora de procesos.

Fuente: [Siemens Insights Hub](https://developer.siemens.com/insights-hub/overview.html)

## Samsara

Samsara ofrece soluciones de monitoreo de equipos mediante sensores y una plataforma en la nube.

Su solución de Condition Monitoring permite monitorear variables como:

- Vibración.
- Temperatura.
- Energía.

También proporciona dashboards, historial y alertas.

Fuente: [Samsara Condition Monitoring](https://www.samsara.com/products/equipment-tracking/condition-monitoring)

## IBM Maximo

IBM Maximo incluye capacidades relacionadas con la gestión de activos y mantenimiento predictivo. La documentación de IBM describe el uso de modelos de IA/ML para predecir fallas basándose en la condición actual de los activos.

Fuente: [IBM Maximo Predict](https://www.ibm.com/support/pages/node/7028382)

# 8. ¿Qué falta o qué podría mejorarse en las soluciones existentes?

La existencia de estas plataformas no significa que el problema esté completamente solucionado para todos los usuarios.

Una oportunidad para el proyecto sería enfocarse en **accesibilidad, simplicidad y adaptación a PyMEs**.

## Posibles áreas de mejora

### 1. Complejidad

Las plataformas industriales pueden incorporar una gran cantidad de funcionalidades.

Para una empresa pequeña, podría ser preferible comenzar con:

> Sensor → Dashboard → Alerta → Acción

y agregar funcionalidades conforme sean necesarias.

### 2. Costo de implementación

Una solución modular podría permitir que una empresa empiece monitoreando una sola máquina y posteriormente agregue más equipos.

### 3. Compatibilidad

La solución podría diseñarse para utilizar sensores externos y diferentes formas de comunicación, evitando depender exclusivamente de maquinaria moderna.

### 4. Experiencia de usuario

La información debería ser comprensible para técnicos y administradores sin requerir conocimientos profundos de ciencia de datos.

### 5. Implementación local

En determinados escenarios podría ser útil contar con procesamiento local o almacenamiento temporal para continuar operando cuando la conexión a Internet sea limitada.

AWS IoT SiteWise, por ejemplo, contempla capacidades de procesamiento en el borde mediante SiteWise Edge, lo que demuestra la utilidad de este enfoque en escenarios industriales.

### 6. Personalización

En lugar de obligar a todas las empresas a utilizar el mismo modelo, la solución podría permitir definir:

- Máquinas.
- Sensores.
- Rangos.
- Alertas.
- Usuarios.
- Roles.
- Indicadores.

# 9. ¿Podemos pensar en este PNSC de una forma distinta?

Sí.

La forma tradicional de plantear el problema sería:

> **"Las máquinas se descomponen y necesitamos repararlas."**

Pero puede replantearse como:

> **"Las empresas no tienen suficiente información sobre el comportamiento de sus activos para tomar decisiones oportunas."**

Este cambio es importante porque desplaza el foco de la **reparación** hacia la **información y la toma de decisiones**.

También puede plantearse desde otra perspectiva:

> **"El problema no es que una máquina falle; el problema es que la organización se entera demasiado tarde de que su comportamiento está cambiando."**

Con este planteamiento, el proyecto deja de ser solamente un sistema de mantenimiento y se convierte en una plataforma de **observabilidad de activos físicos**.

---

# Propuesta de valor

La propuesta de valor puede resumirse de la siguiente manera:

> **Una plataforma IoT accesible y modular que permita a las PyMEs industriales conocer el estado de sus máquinas, detectar anomalías y planificar el mantenimiento utilizando información obtenida directamente de sus equipos.**

---

# Posible MVP

Para evitar que el proyecto sea demasiado grande inicialmente, el primer producto podría limitarse a:

### Hardware

- ESP32 o microcontrolador equivalente.
- Sensor de temperatura.
- Sensor de vibración.
- Sensor de corriente.
- Gateway opcional.

### Backend

- API REST.
- Autenticación.
- Registro de máquinas.
- Recepción de telemetría.
- Almacenamiento de datos.

### Frontend

- Dashboard.
- Estado de máquinas.
- Gráficas históricas.
- Alertas.
- Historial de eventos.

### Análisis

Inicialmente:

- Umbrales configurables.
- Detección de valores anormales.
- Comparación contra históricos.

Posteriormente:

- Detección automática de anomalías.
- Predicción de posibles fallas.
- Recomendaciones de mantenimiento.

# Indicadores para evaluar si el proyecto funciona

El éxito del proyecto podría medirse mediante:

- Reducción de paros no planificados.
- Tiempo promedio de detección de anomalías.
- Número de fallas detectadas antes de convertirse en paros.
- Reducción del tiempo dedicado a inspecciones manuales.
- Número de máquinas monitoreadas.
- Tiempo de respuesta ante alertas.
- Porcentaje de alertas consideradas útiles por los técnicos.
- Disponibilidad del sistema.

# Conclusión

El proyecto propone utilizar **software + IoT + análisis de datos** para resolver un problema concreto de las PyMEs industriales: la dificultad para conocer oportunamente el estado de sus equipos y actuar antes de que determinadas anomalías se conviertan en fallas.

La propuesta no pretende competir inicialmente con plataformas industriales de gran escala, sino desarrollar una solución **modular, sencilla y accesible**, que pueda comenzar con pocos sensores y crecer conforme aumenten las necesidades de la empresa.

El principal supuesto que deberá validarse mediante entrevistas y un prototipo es si las PyMEs objetivo consideran suficientemente valiosa esta información como para adoptar sensores y una plataforma de monitoreo.

## Fuentes consultadas

1. [AWS IoT SiteWise - Documentación oficial](https://docs.aws.amazon.com/iot-sitewise/latest/userguide/)
2. [AWS IoT SiteWise - Detección de anomalías](https://docs.aws.amazon.com/iot-sitewise/latest/userguide/anomaly-detection.html)
3. [Siemens Insights Hub - Industrial IoT](https://developer.siemens.com/insights-hub/overview.html)
4. [Samsara - Condition Monitoring](https://www.samsara.com/products/equipment-tracking/condition-monitoring)
5. [IBM - Maximo Predict](https://www.ibm.com/support/pages/node/7028382)

---

## Respuestas de la IA (Gemini)

### 1. ¿Cuál es la PNSC clave que está intentando abordar y por qué es importante?

- **PNSC clave:** Las PyMEs industriales tienen dificultades para conocer en tiempo real el estado de su maquinaria y detectar señales tempranas de falla debido a la falta de monitoreo continuo y a la dependencia de métodos de mantenimiento reactivos o meramente periódicos.
    
- **Por qué es importante:** La falla inesperada de una máquina crítica detiene los procesos productivos. Para una PyME, no contar con equipos de respaldo ni con grandes márgenes financieros significa que un paro no planificado genera pérdidas de ingresos, retrasos en entregas, daños a la calidad del producto y costos extraordinarios de reparación de emergencia.
    

### 2. ¿Para quién es un PNSC?

El PNSC afecta a dos grupos principales dentro y fuera de la organización:

#### Usuarios directos (quienes sufren la falta de visibilidad e interactúan con la solución)

- **Dueños y gerentes de PyMEs industriales:** Enfrentan las pérdidas financieras y el riesgo operativo.
    
- **Encargados y técnicos de mantenimiento:** Deben resolver emergencias sin historial previo de la falla.
    
- **Supervisores de producción:** Ven interrumpidas sus métricas y planes de entrega.
    

#### Usuarios indirectos (quienes sufren las consecuencias operativas)

- **Operadores de maquinaria:** Su ritmo de trabajo y seguridad dependen de la estabilidad de las máquinas.
    
- **Clientes de la PyME:** Sufren retrasos en entregas o inconsistencias en la calidad de los productos.
    
- **Proveedores:** Ven alteradas sus cadenas de suministros e insumos.
    

### 3. ¿Qué factores del entorno forman parte de este PNSC?

- **Económicos:** Presupuestos reducidos en las PyMEs para adquirir software industrial avanzado o realizar grandes inversiones de capital (CapEx).
    
- **Tecnológicos:** Coexistencia de maquinaria de distintas generaciones (maquinaria obsoleta junto a equipos modernos) y redes de internet inestables en plantas industriales.
    
- **Humanos y Culturales:** Resistencia al cambio tecnológica, arraigo a revisiones manuales y temor por parte de los técnicos a ser reemplazados por sistemas automatizados.
    
- **Seguridad Laboral:** Fallas mecánicas drásticas que aumentan el riesgo de accidentes de trabajo o incidentes operacionales.
    

### 4. ¿Por qué vale la pena solucionar este PNSC?

Vale la pena resolverlo porque transforma la eficiencia operativa y la rentabilidad en múltiples dimensiones:

- **Para la empresa:** Reduce paros no planificados, minimiza gastos por reparaciones mayores y optimiza el uso de recursos.
    
- **Para el personal operativo:** Otorga herramientas para pasar de apagar incendios a trabajar de manera planificada y segura.
    
- **Para el mercado PyME:** Permite a pequeñas y medianas empresas competir en igualdad de condiciones de cumplimiento y calidad frente a grandes corporativos.
    

### 5. ¿Qué sabes del PNSC?

- **Efectividad comprobada de los datos:** Las variables físicas como temperatura, vibración y consumo eléctrico emiten anomalías medibles mucho antes de que ocurra una falla catastrófica.
    
- **Existencia de tecnología:** Los sensores IoT, microcontroladores accesibles (como el ESP32) y la nube permiten capturar y procesar datos a un costo drásticamente inferior al de hace una década.
    
- **Validación de mercado:** Plataformas globales ya demuestran que el mantenimiento predictivo basado en datos reduce significativamente los paros operativos.
    

### 6. ¿Qué no sabes del PNSC o te falta conocer mejor?

Falta validar directamente en campo mediante investigación cualitativa y cuantitativa:

1. **Impacto financiero exacto:** ¿Cuál es el costo real por hora de paro en los sectores específicos de PyMEs a impactar?
    
2. **Infraestructura técnica local:** ¿Qué porcentaje de las plantas cuenta con conectividad Wi-Fi/Ethernet estable cerca de la maquinaria?
    
3. **Disposición al cambio y adopción:** ¿Qué tan dispuestos están los técnicos de mantenimiento a interactuar con dashboards digitales cotidianamente?
    
4. **Viabilidad de instalación:** ¿Qué nivel de complejidad o permisos se requiere para instalar sensores externos en maquinaria que aún cuenta con garantía del fabricante?
    

### 7. ¿Quién ha resuelto algo similar? Explica las soluciones existentes

Existen soluciones consolidadas en el mercado industrial:

- **AWS IoT SiteWise / Lookout for Equipment:** Servicio en la nube para recopilar, estructurar y aplicar inteligencia artificial en la detección de anomalías de activos industriales.
    
- **Samsara Condition Monitoring:** Sensores inalámbricos plug-and-play para monitorear vibración y temperatura, conectados a una plataforma en la nube orientada a la gestión de activos.
    
- **Siemens Insights Hub (antes MindSphere):** Plataforma IoT orientada al entorno industrial pesado, integrada nativamente con automatismos y PLCs de Siemens.
    
- **IBM Maximo Predict:** Sistema empresarial de gestión de activos que aplica modelos analíticos avanzados e IA para predecir cuándo fallará un equipo.
    

### 8. De las soluciones existentes, ¿qué consideras que falta o se podría mejorar?

- **Complejidad excesiva:** Las plataformas actuales están diseñadas para grandes corporativos y requieren semanas de configuración, además de ingenieros de datos dedicados.
    
- **Costos de entrada elevados:** Esquemas de licenciamiento y hardware industrial costoso que resultan prohibitivos para una PyME.
    
- **Falta de enfoque "No-Code" e intuitivo:** Las interfaces suelen ser densas y complejas para un técnico de planta que requiere diagnósticos directos y en lenguaje sencillo.
    
- **Incompatibilidad y dependencia de nube:** La mayoría depende de una conexión a internet ininterrumpida, careciendo de arquitecturas locales (_Edge_) simples que operen fuera de línea temporalmente.
    

### 9. ¿Puedes pensar en este PNSC de una forma distinta? ¿Se puede replantear la PNSC?

Sí, la PNSC se puede replantear cambiando el enfoque desde la **reparación** hacia la **visibilidad y la comunicación**:

- **Planteamiento tradicional:** _"Las máquinas fallan y las PyMEs no tienen dinero para sistemas de mantenimiento predictivo sofisticados."_
    
- **Replanteamiento centrado en la decisión:** _"Las PyMEs industriales están ciegas sobre el desgaste de su infraestructura, lo que les impide tomar decisiones de producción informadas."_
    
- **Replanteamiento centrado en el equipo humano:** _"El personal de mantenimiento carece de un asistente digital que traduzca el comportamiento físico de las máquinas en acciones preventivas simples."_
    

Al replantearlo como un problema de **observabilidad y asistencia al trabajador**, la solución deja de ser solo un "sistema de alertas" y se convierte en un **copiloto de operaciones para la PyME**.