El resultado:
- Internet
- Proliferación de aplicaciones distribuidas
- Se eliminan barreras geográficas
- Se garantiza la tolerancia a fallas a través de diversas estrategias

Una palabra clave:
- Ambiente heterogéneo
- Distintos lenguajes
- Distintas arquitecturas de hardware
- Diversas tecnologías de redes

Middleware:
- Capa intermedia para comunicar

**Qué es un sistema distribuido?**
- Es aquel en el que los componentes localizados en computadoras conectadas en red, comunican y coordinan sus acciones únicamente mediante el paso de mensajes.
	- Sistemas Distribuidos Diseño y Conceptos, GEORGE COULOURIS, JEAN DOLLIMORE, TIM KINDEBERG
- Es una colección de computadoras independientes que aparecen ante los usuarios del sistema como una única computadora
	- Sistemas Operativos Distribuidos, Andrew S. Tanenbaum

## Elementos a considerar en un sistema distribuido

- Concurrencia de los componentes
	- En SD, la ejecución de procesos concurrentes es frecuente, cada persona trabaja independientemente con información en común (compartir archivos)
- Carencia de un reloj global
	- En los SD, los procesos se coordina y cooperan mediante el paso de msgs
	- La coordinación de relojes es un problema grande
- Fallos independientes de los componentes

## Desventajas de los SD

Aunque los SD tienen sus aspectos fuertes, también tienen sus debilidades

El software es el peor de los probleamas
- Qué tipo de SO, lenguajes de programación y aplicaciones son adecuados para estos sistemas?
- Cuánto deben saber los usuarios de la distribución?

2° problema, las redes:
- Pérdida de mensajes
- Sobrecarga de la red
- Aumento de nodos (red insuficiente)

3er problema, seguridad:
- Datos compartidos
- Acceso a recursos
- Al aumentar seguridad, se disminiuye la funcionalidad o facilidad de uso