Los casos de prueba son diseñados considerando las entradas que debe recibir el programa y las salidas que se esperan.
Son de caja negra porque son desde el punto de vista del usuario final.
## Estrategia de las pruebas basadas en casos de uso
- El sistema se prueba como una caja negra
- Se basa en la perspectiva de los actores humanos
- Se analiza la interacción con el sistema a través de las interfaces gráficas
- Se busca comprobar los resultados a través de las interfaces gráficas
## Principios básicos
Deben asegurar la coberetura de escenarios, es decir, todos los flujos posibles.
## Generación de Casos de Prueba
Se crea al menos un caso de prueba para cada escenario identificado
1. Flujo principal
	- El flujo que se espera tener idealmente
2. Flujos alternativos
	- Las decisiones alternativas que puede tomar el usuario
3. Flujos de excepción
	- Verificar que manejamos bien las excepciones
## Ventajas
- Priorización natural
- Detectamos brechas, encontramos fallos en la especificación
## Estrategias técnias
1. Caminos de ejecución
## Proceso
1. Identificar las variables operacionales
2. Identificar dominios y particiones eqiuvalnetes
3. 
4. Identificar los resultados esperados por combinación de valores
5. Elaboración de casos de prueba
	1. Introduir importe de la enta
	2. Importe fuera de rango
	3. Se muestra el mensaje de error "Importe fuera de rango"
## Conclusiones
- SI no se maneja bien puede ser una técnica superficial
- Difícil de automatizar con herramientas
	- Aunque si se pueden simular los flujos es sencillo
- Las pruebas son genéricas
- Las técnicas no son sistematizadas, por lo que dependen de la pericia de quien las aplica
- Dependen de la elaboración de la descripción de los casos de uso

En esencia, las Pruebas Basadas en Casos de Uso son fundamentales en el **Testing de Aceptación** y el **Testing de Sistemas** ya que aseguran que el sistema cumple con su propósito de negocio