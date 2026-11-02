- La construcción colaborativa hace énfasis en prácticas/técnicas donde los miembros de un equipo comparten responsabilidades
- Los programadores tienen algunos puntos ciegos en el trabajo día a día
- Programadores insertan en promedio entre 1 y 3 defectos por hora en sus diseños
- Programadores isnertan entre 5 y 8 dfectos por hora en el código (Humphrey 1997)

## Colaboración en el aseguramiento de calidad
**Beneficios:**
- Mejorar la calidad del software
- Disminución del tiempo de desarrollo
- Anticipa la detección de defectos
- Reduce costos generados por la corrección de defectos
- Reduce el tiempo invertido en mantenimiento
- Contribuye a la difusión del conocimiento colectivo
	- Propagación de estándares entre programadores
	- Seguimiento y mejoras de las prácticas de programación
	- Las revisiones de código permiten que programadores avanzados diseminen conocimiento y experiencia con programadores novatos
- Beneficios de "propiedad colectiva" del código
	- Mejor calidad del código (distintos programadores trabajando en el mismo código)
	- El impacto por no contar con algún miembro del equipo se disminuye
	- Los ciclos de corrección de defectos son cortos (distintos programadores son asignados a la corrección de bugs)

## Técnicas para la construcción colaborativa

**Programación en pares:**
- Estándares de codificación apoyan la construcción colaborativa
- La persona que observa es un participante activo en el proceso de construcción (analiza, diseña, planea cómo probar el código)
- Rotación de compañeros de trabajo
- Evita formar equipos con novatos

**Inspecciones formales:**
- Son un tipo de revisión formal
- Se utilizan distintos roles
- El moderador de la inspección no es el autor del producto
- El moderador es una persona con entrenamiento en inspecciones
- No deben ser muy largas
- **Ventajas:**
	- Se obteienen alrededor de 60% de defectos
	- La combinación de inspecciones de diseño y código remueven entre 70-85% de defectos
	- Se identifican clases propensas a errores
	- Contribuyen a que los costos no superen el presupuesto del proyecto

**Walkthrough:**
- La revisión generalmente es moderada por el autor del diseño o código en inspección
- Se enfocan en aspectos técnicos
	- Es una reunión de trabajo
- Todos los participantes leen el código o el diseño en busca de defectos
- Los programadores experimentados comparten experiencia a los programadores novatos
- Los programadores novatos comparten propuestas nuevas con los programadores experimentados
- Su duración es de 30-60 minutos
- Utilizado inteligentemente con disciplina produce resultados similares a una inspección formal
- En grupos grandes puede ser de ayuda al existir distintos puntos de vista sobre el problema

**Lectura de código:**
- Son alternativas a las inspecciones
- Se revisa el código en busca de defectos
- Se comentan aspectos de calidad de código
	- Estilo
	- Estándares
	- Diseño
	- Legibilidad
	- Mantenimiento
	- Eficiencia


**Notas:**
- Cuando estamos saturados debemos vaciar el buffer:
	- Escribir lo que estamos pensando
	- Tocar un instrumento y concentrarse en eso
	- Comerse una fruta y pelarla para concentrarse en eso
- No es buena idea seguirle dando vueltas a lo que pensamos porque no llegaremos a nada