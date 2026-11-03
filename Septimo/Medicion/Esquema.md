## Medición del código fuente

- Medidas del tamaño del programa
	- Directivas de compilador
	- Métricas de estilo y declaración
- Métricas léxicas
- Métricas del grafo de flujo de control

## Medidas de calidad del software
- Fallos del software
- Manteninibilidad del software
	- Trazabilidad
	- Acoplamiento

## Introducción

Podemos medir un sistema de software de dos maneras:
	1. Meidar los atributos de software estático de los requisitos, el diseño y el código. Medir el sistema mientras se ejecuta
	2. Los atributos de código estático nos permitirán aprender mucho sobre la estructura d eun sistema, cómo se construye y dónde podrían estar las áreas problemáticas en la base de códigos

## Ejemplo: medición estática y dinámica

| Sin ejecutar el programa   | Durante la ejecución       |
| -------------------------- | -------------------------- |
| líneas de código<br>       | tiempo de respuesta        |
| número de decisiones       | uso de memoria             |
| complejidad ciclomática    | fallos observados          |
| acoplamiento entre módulos | disponibilidad del sistema |

## Medidas primitivas del código fuente

Dos aspectos diferentes de un programa cuando un desarrollador lo escribe:
1. El desarrollador debe interactuar con la metáfora de lenguaje de programación
2. El desarrollador debe especificar las acciones que el código tomará en tiempo de ejecución

## Mini actividad: ¿qué estamos midiendo?

**Clasifica cada dato como medida estática o dinámica. Después, explica qué decisión permitiría tomar**

- El módulo contiene 14 decisiones
- La pantalla tarda 3.8 segundos en responder
- Dos módulos comparten cinco variables globales
- El sistema falló tres veces durante 200 ejecuciones

**Entrega rápida: tabla con "dato, tipo de medida y posible decisión**

| Dato                     | Tipo de medida | Posible decisión                                                                                                             |
| ------------------------ | -------------- | ---------------------------------------------------------------------------------------------------------------------------- |
| Complejidad ciclomática  | Estática       | Hay que refactorizar                                                                                                         |
| Tiempo de carga          | Dinámica       | Hay que revisar por qué tarda tanto y si se puede optimizar                                                                  |
| Complejidad de memoria   | Estática       | Hay que recordar qué módulos comparten y qué variables, habría que buscar una forma de reducir la complejidad y acoplamiento |
| Fallos durante ejecución | Dinámica       | Registrar el procedimiento para repetirlo, agregarlos a los casos de prueba, y arreglarlo                                    |

## Medidas primitivas del código fuente

