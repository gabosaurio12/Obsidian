- Las actividades de medición de software pueden y deben ocurrir a lo largo de todo el ciclo de vida del software
- El mejor estimador de los costos futuros de desarrollo de software son los datos históricos
- El mejor estimador de la confiabilidad y calidad del software también son los datos de proyectos anteriores
## Especificación de requisitos operacionales

- Uno de los principales productos que surgen durante esta fase debe ser la estimación de costos
- Es fácil subestimar el esfuerzo necesario para desarrollar un nuevo producto de software (esto sale caro)
- El costo depende directamente de la complejidad del sistema
- Muchas empresas cuentan con datos históricos de proyectos anteriores para apoyar sus estimaciones
- Ejemplo
	- El modelo COCOMO (Constructive Cost Model) usa datos históricos de miles de proyectos para estimar el esfuerzo de desarrollo a partir del tamaño estimado del software. Es un ejemplo clásico de estimación basada en datos.
- Cuando un proyecto terminaa, los gerentes suelen dirigir su atención al siguiente reto y ahí surge el problema
- Al final, sabremos cuánto costó realmente desarrollar el sistema
- Podríamos aprender a medir y cuantificar atributos específicos de los requisitos desde el inicio, no solo al cierre
## Diseño

- Teniendo clara la idea de qué sistema construiremos para el cliente, pasamos a definir cómo lo implementaremos
- Debemos descomponer cada funcionalidad en una o varias especificaciones de módulos
## Codificación

- Es la fase más fácil de todo el ciclo de vida para medir y evaluar
- Los programadores realizan su trabajo y podemos medir el tiempo que toma codificar
- Podemos medir el producto de su esfuerzo en volumen de código generado
- Podemos medir el número total de problemas (fallas) que se generaron durante la programación
- Ejemplo
	- Métricas comunes son: LOC, complejidad cicloática, densidad de defectos (defectos por cada 1000 líneas)
## Pruebas

- Pasamos a medir aspectos del código en ejecución
- Aprenderemos a medir la dinámica del código: exactamente qué hace el progama mientras se ejecuta
- Buenas pruebas: exponen problemas potenciales en el código
- Malas pruebas: ejercitan código que ya ha sido probado antes, o solo tocan módulos con poca probabilidad de contener fallas