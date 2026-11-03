- La validación empírica es la base de toda ciencia
- Toda teoría se valida mediante la realización de experimentos
- Los resultados numéricos se obtienen de los experimentos a través de un proceso de medición riguroso
- La parte más importante de un experimento es que debe ser reproducible
- Esto es lo que distingue a la ciencia de una creencia basada solo en la fe: sus resultados pueden verificarse
- Los resultados numéricos de un experimento se reportan en unidades compartidas por una comunidad científica
- ¿Cuánto es un metro? Depende de que exista un estándar compartido y aceptado
- Instituciones como el NIST definen y mantienen estándares de medición
- Estos estándares permiten compartir e interpretar resultados entre investigadores de todo el mundo
- El NIST no mantiene estándares oficiales para la medición de software
- Esto hace difícil, casi imposible, compartir y comparar resultados experimentales entre equipos o empresas
- ¿Cómo mediríamos el kernel de Linux? ¿Con qué atributos?
- ¿Cómo mediríamos la inteligencia de un sistema? ¿Qué atributos usaríamos?
## Midiendo lo inmedible
- Propongan una forma de medir la inteligencia de un sistema de IA actual
	- IA para identificar animales
- ¿Qué atributos observables usarían? (ej. precisión, tiempo de respuesta, tipos de tareas resueltas)
	- Tiempo de respuesta
	- Porcentaje de presición
		- Positivos
		- Negativos
		- Falsos positivos
		- Falsos negativos
- ¿Su propuesta sería reproducible por otro equipo con los mismos datos? Justifiquen su respuesta
	- Sí
## Principios fundamentales de la medición
- Existen dos principios fundamentales en toda medición:
	- Reproducibilidad: la medición debe basarse en un estándar compartido por la comunicación de software
	- Validez: los atributos medidos deben aportar información real sobre la estructura fundamental del objeto medido
## Problemas en la medición del software
- Al intentar medir algo, casi siempre obtenemos más información de la que buscamos
- La naturaleza añade "ruido": variación que no forma parrte de lo que queremos medir
- No podemos eliminar el ruido por completo (resultaría muy costoso) pero sí podemos establecer tolerancias
- Solo podemos controlar el ruido si entendemos sus posibles fuentes
- Ejemplo: si compramos una regla barata para medir distancias, sus marcas impresas serán gruesas e imprecisas
- Si la regla tiene marcas cada milímetro, lo máximo que podemos esperar es una precisión de +- 0.5 mm
## La falta de estándares
- Uno de los mayores problemas de la medición en ISOF es la ausencia casi total de estándares
- No existen estándares para contar sentencias de código en C (ni en otro lenguaje)
- No existen estándares para medir la productividad de un programador
- El NIST no tiene incentivos claros para establecer estándares de medición de software
### Actividad
- Contar líneas de código:
	- Contando comentarios y líneas en blanco: 24
	- Sin incluirlos: 18
## Logísitica de la medición del software
- Hemos sido testigos de los esfuerzos de muchas organizaciones enfocados en herramientas de medición
- ¿Basta con tener las herramientas del oficio para ser un buen carpintero?
- Un buen carpintero puede hacer trabajo excelente incluso con las herramientas más primitivas
- Convertirse en un buen carpinter requiere un largo proceso de entrenamiento
## De datos a información
- El enfoque debe estar en los aspectos logísiticos y estadísticas del proceso de medición, no solo en la herramienta
- Haber tomado mediciones de un sistema no constituye, por sí mismo, un proceso de medición: eso solo genera datos
- Los datos deben convertirse en información; ese es el papel de la estadística
- La estadística nos permite entender qué nos están diciendo realmente esos datos sobre nuestros procesos
## Calidad de software
- Cumplimiento con las especificaciones o requisitos (Crosby, 1979)
- Lo que se espera es "cero defectos"
- Error: equivocación cometida por un desarrollador; "una idea falsa o equivocada". Por lo tanto, un programa no puede, en sí mismoo, "tener" o "estar" en error
- Defecto: una diferencia entre la versión correcta de un artefacto y una versión incorrecta del mismo
- La idea es comenzar haciendo las cosas bien
### Objetivos
- Aprender a medir con precisión a las personas, procesos, productos y entornos
- Aprender a realizar la ciencia necesaria para revelar cómo interactúan estos dominios
- Institucionalizar el proceso de aprendizaje a partir de los errores del pasado
- Insititucionalizar el proceso de aprendizaje a partir de los éxitos del pasado
## Control del entorno de desarrollo
- El control es clave para el dev de software de calidad
- Si un programador solo traduce un diseño a una metáfora de programación, su impacto real será mínimo
- Si el diseño es vago o ambiguo, surgirán múltiples interpretaciones distintas
## Deming y el desarrollo de software
- W. Edwards Deming transformó la industria manufacturera japonesa con sus ideas sobre calidad
- "Debemos aprender a no enfocarnos en los productos que fabricamos. Debemos aprender a enfocarnos en los procesos que fabrican esos productos"
- La información realmente valiosa está en la variación (varianza) de la medición, no solo en el promedio
## Deming aplicado al desarrollo de software moderno
- Investigar los 14 puntos de Deming para la gestión de calidad
- Seleccionar 3 de esos puntos y explicar cómo se relacionan con prácticas actuales de desarrollo de software (pe. DevOps, Integración Continua, revisión de código por pares)
- Redactar un ensayo de una página con sus conclusiones y al menos una referencia consultada
- Entrega en PDF