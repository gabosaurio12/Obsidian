Gabriel Antonio González López - 20 de agosto del 2026
## The State of Generative AI in Software Development: Insights from Literature and a Developer Survey
### Introducción

El uso de la IA Generativa (GenAI) como los LLMs transformó el Ciclo de Vida de Desarrollo de Software (SDLC) y se identificó a la Ingeniería de Software como una de las áreas donde más impacto económico obtendría de la _GenAI_.
El artículo menciona que la mayoría de estudios se enfocan en fases del SDLC aisladas y que las evaluaciones del ciclo completo en general se mantienen escasas. Debido a esto, al intentar profundizar un poco más en el tema se plantearon las siguientes preguntas de investigación:

1. ¿Cómo usan las herramientas de la GenAI los desarrolladores de software?
2. ¿Cómo se percibe el impacto de la GenAI a través de las fases del SDLC?
3. ¿Qué mecanismos de gobernanza son implementados para gestionar la adopción de GenAI en los departamentos de desarrollo de software?
4. ¿Cuáles son los riesgos asociados a la GenAI en el desarrollo de software?

El estudio utiliza tres fuentes complementarias de información para contestar las preguntas:
1. Una revisión estructurada de síntesis académicas literarias de conocimiento académico actual en el potencial y limitaciones de la GenAI a través de las fases del SDLC y en el desarrollo ágil.
2. Se utilizaron reportes de la industria para registrar prácticas emergentes, desarrollos tecnológicos y evaluaciones orientadas a los profesionales que comúnmente preceden a las publicaciones académicas.
3. Una encuesta transversal de 65 desarrolladores de software construyendo sobre el Technology Acceptance Model (TAM) lo cual provee evidencia empírica principal de: el uso de la herramienta en el mundo real, efectos de productividad percibidos, madurez de la gobernanza y riesgos asociados.
### Metodología para el análisis literario
**La primera etapa (input/entrada)**: aquí se hizo la búsqueda inicial encontrando más de 900,000 publicaciones.
**La segunda etapa (proceso/processing):** Se filtraron las publicaciones previas al 2019, duplicados y escritos que no estaban en inglés. Esto redujo el total de publicaciones a 1,712.

Después con las publicaciones restantes se volvieron a hacer dos etapas:
- Revisión de títulos y abstracts que resultó en 160 publicaciones
- Esas publicaciones se leyeron completas y se seleccionaron en las que era relevante el impacto de la GenAI en una o más fase del SDLC.
Al final quedaron 63 publicaciones incluidas en la revisión.
###  GenAI en el SDLC
#### Planeación
La GenAI ayuda a la creación de artefactos como definiciones de alcance, líneas del tiempo, estructuras de hitos, descripciones de rol, planes de comunicación y evaluaciones de riesgos.
#### Análisis de Requisitos
Aquí ayuda en los bocetos, refinamiento y validación de requisitos funcionales. Las LLMs son usadas para generar y elaborar historias de usuario y casos de uso basándose en la documentación de alto nivel del proyecto.
#### Diseño e Implementación
Esta fase es la que representa el dominio más amplio de aplicación de estudio para la GenAI. Estudios de campo a menudo reportan un incremento de velocidad de desarrollo, especialmente en tareas rutinarias, la automatización reduce los esfuerzos manuales necesarios para sesiones de codificación estandarizadas. Varios análisis indican una mejoría en la revisión de eficiencia y reducción de defectos.
#### Pruebas e Integración
En esta fase la GenAI se usa para generar automáticamente casos de uso unitarios, de integración y "end-to-end". También lo suelen usar en la creación de mocks e información sintética. Por otro lado, se realizan análisis de seguridad asistidos por IA.
Se explica que esto resulta en una reducción del esfuerzo en las pruebas manuales para escenarios de rutina y una cobertura de pruebas más rápida.
También se integra con flujos de trabajo CI/CD y se conecta a frameworks de prueba o directamente con los entornos de desarrollo para que haga análisis de código y cree casos de prueba automáticamente.
#### Operación y Mantenimiento
La GenAI soporta el análisis de logs, mensajes de error y stack traces, lo que le permite hacer diagnósticos y sugerir posibles caminos de mejora.
También lo usan para mejorar la calidad de la documentación, sobre todo en código complejo o *legacy*, esto mejora la mantenibilidad y la transferencia de conocimiento.
### La GenAI en el desarrollo de Software Ágil
La GenAI no solo genera ganancias de productividad, la literatura indica que aumenta la satisfacción y utilidad en los equipos que usan herramientas con IA. Ayuda a realizar tareas más rápido lo que lleva a iteraciones más cortas y a hacer lanzamientos (*releases*) más frecuentes.
Es importante notar lo que está sucediendo: es un cambio de roles. Los dueños de productos, desarrolladores y Scrum Masters cada vez toman más un rol estratégico y creativo, y evalúan las actividades, todo esto porque la IA se encarga de tareas rutinarias (parcialmente).
### Riesgos
#### Corto plazo
La preocupación recae en la confiabilidad, control de calidad y seguridad. Las sugerencias de código generado por IA tienden a tener errores que para arreglarlos se requiere invertir en promedio diez minutos por cada defecto identificado.
Los asistentes de código pueden ser susceptibles a los ataques de inyección de prompts lo que puede llevar a contaminación de información, ejecución de código no deseada o filtración de información. Esto puede llevar a la introducción de dependencias no deseadas o inconsistencias arquitectónicas lo que genera **deuda técnica**.

	"Even syntactically correct code may contain subtle semantic or security-relevant weaknesses" [Yetistiren et al., 2023, Atif et al., 2025]
Los desarrolladores a veces aceptan código con el mínimo de prácticas de control de calidad.
La mejoría en la productividad no significa que los resultados estén alineados con las métricas de la actividad, aumentando el riesgo de sobreestimar la eficiencia.
#### Largo plazo
Por otro lado, también afecta al conocimiento técnico de los desarrolladores porque se puede generar una dependencia a la GenAI así como una reducción de la interacción humana cuando las herramientas de IA toman el rol de un mediador en la comunicación, explicación de código o solución de problemas; esto genera una degradación en la confianza interpersonal y la forma de mitigar estos riesgos es manteniendo prácticas como revisiones de código y retrospectivas de sprints.
A los desarrolladores más avanzados les preocupa la pérdida del conocimiento técnico profundo, la protección de información y las vulnerabilidades de seguridad, porque aunque comentan que es una gran herramienta para hacer revisiones de código, crear interfaces con sistemas desconocidos o explorar soluciones alternativas hay un peligro en aceptar respuestas o soluciones sin hacer una revisión crítica, como por ejemplo al hacer *blind copying*.
### Estrategias sugeridas para asumir una postura activa y crítica
- Adaptar perfiles de rol y fortalecer competencias relacionadas a la IA, como la evaluación crítica de habilidades en ambientes con IA.
- Mejorar la gobernanza, políticas y mecanismos para regular y delimitar el uso de la IA.
- Concentrarse en mejorar el pensamiento arquitectónico, la formulación de requisitos, asegurar la calidad (*quality assurance*) y aprender a orquestrar sistemas IA.
- Desarrollar un pensamiento crítico y priorizar tener un amplio conocimiento técnico para poder realmente aprovechar la eficiencia de la GenAI.

<div class="page-break" style="page-break-before: always;"></div>

## Future of software development with generative AI
### Escenarios
#### Operaciones tradicionales de desarrollo de software
- Los humanos asumen todos los roles
- Las herramientas y ambientes de desarrollo proveen automatización
- Los humanos son responsables de mantener el proceso, diseño, implementación, pruebas y entrega y mantenimiento de los productos
- Las herramientas son usadas para automatizar tareas, desde descubrimiento de código hasta despliegue
#### IA en ciclo
- Los humanos dominan la IA, pero la IA comienza a gestionar áreas de trabajo más grandes y complejas
- La IA es usada para automatizar partes seleccionadas de tareas manuales y repetitivas como generación de código, documentación, pruebas y despliegue
- También se usa la IA para asistir a los humanos en tareas como el diseño, fallas y tomas de decisiones
#### La IA asume roles
- La IA comienza a asumir roles seleccionados, como gestionar el proceso, diseño, implementación, pruebas, entrega y mantenimiento
- Los humanos se concentran en las tareas más complejas y controlan toda la operación
- Los humanos son responsables de asegurarse de que todo funciona correctamente y producir resultados de alta calidad
#### Humanos en el ciclo
- La IA gestiona el desarrollo de varias operaciones en varios roles
- Los humanos vigilan y controlan el proceso, pero su rol está enfocado en vigilancia como el control operacional, solución de problemas, control de calidad y seguridad
- Los roles de la IA son responsables de automatizar la mayoría o todas las tareas en el ciclo de vida de desarrollo
### Peligros de una automatización abrupta sin juicio humano
Nuevamente se recalca la importancia de guías y límites bien marcados para asegurar la responsabilidad si es que el código final resulta defectuoso, porque este tema aún no es muy claro. Y nuevamente el peligro está en comenzar a usar la IA inmensuradamente, sin un ojo crítico ni revisión constante de lo que genera, la consecuencia de esto es que, aunque pueda parecer más eficiente y rápido, el producto no es de calidad y da una impresión de fragilidad. Es importante mantener el control como humano y tomar un rol de orquestador, no de un generador.
### Ciberseguridad como elemento integrado desde el diseño
La GenAI tiene la capacidad de producir múltiples malware y virus, lo que requiere nuevos acercamientos preventivos que deben integrarse en la fase de diseño  como una propiedad interna de cualquier producto.

<div class="page-break" style="page-break-before: always;"></div>

## Developers’ Dilemma: Opportunities and Pitfalls of Generative AI for Software Development
- La interacción con máquinas inteligentes para resolver tareas puede llevar a los individuos a ajustar sus modelos mentales, lo que se traduce en cambiar su entendimiento del mundo.
- Los empleados pueden percibir a la IA como una amenaza en varias áreas y dimensiones a su identidad profesional, incluyendo su estatus, autonomía profesional y la percepción de su relevancia como expertos
### Dilema del desarrollador
El dilema principal no es _usar o no la IA_, es que al usarla aunque sea mucho más eficiente es posible que un desarrollador *junior* no termine de evolucionar las habilidades que necesita para ser un buen desarrollador.
Por lo que la pregunta sería: ¿Cómo aprovechamos las ventajas de eficiencia y aprendizaje interactivo que ofrece la IA sin cederle el proceso cognitivo que finalmente es el que _enseña_ al desarrollador?
### Amenazas de la degradación de habilidades de programación
Aunque el aprendizaje se puede potenciar porque la GenAI simplifica/traduce temas a un lenguaje natural y sencillo, eso mismo puede producir que desarrolladores novatos obtengan una _"ilusión de competencia"_, lo que los lleva a creer que entienden más de lo que realmente entienden.
El peligro de la _ilusión de competencia_ es que los desarrolladores pueden dejar ciertas rutinas de programación o aumentar su conocimiento y depender totalmente de la GenAI, lo que agrava esa _ilusión_. No es como que la _ilusión de competencia_ sea la degradación de las habilidades; es más bien lo que la oculta.
Se cree que en el futuro los ingenieros de software invertirán menos tiempo escribiendo código directamente o incluso ya no se escribe código directamente.
En general me parece que las habilidades que más se verán afectadas serán la de comunicarse y compartir de conocimiento entre colegas, explicar un código o revisarlo en pares, porque la GenAI al tener habilidades de _charla_ puede hacer revisiones de código e incluso ayudar a comprender lo que el desarrollador no comprenda.
Finalmente, la capacidad de colaborar probablemente se reduzca bastante.
### Beneficios de la autoeducación interactiva
En lo personal el principal beneficio identificado es simplificar y traducir temas a un lenguaje natural, incluyendo el código complejo o _legacy_.
El siguiente beneficio considero que es no solo que explique el tema, sino también que busque formas de abordarlo diferente, lo que puede llevarnos a un tercero y es usar a la GenAI como un compañero de _sparring_, lo que le permite buscar más soluciones, preguntar si su solución es buena o qué problema tiene así como si su razonamiento es correcto, esto habilita una segunda perspectiva para que el desarrollador pueda reevaluar su razonamiento.
### Homogenización de las soluciones técnicas
**Prerrequisitos:**
- Establecer reglas y límites claros hacia el uso de sistemas de GenAI.
- Se deben definir los procesos donde la presencia y uso de la GenAI sea deseada.
	- Por ejemplo, se puede permitir el uso de GenAI para tareas de codificación repetitiva, mientras que tareas como el diseño de arquitectura que es muy importante y crítica deberá seguir haciéndose únicamente por desarrolladores *senior*.
	- _"Clear rules need to be defined by the management in order to prevent misuse. You simply have to say: How can it be used and what must not be used"_ (I12, Quality manager (Testing))
- Desde una perspectiva técnica se debe asegurar que los sistemas de GenAI sea interoperables y no tengan conflictos con el sistema existente y el ambiente de herramientas.
- Implementar medidas de seguridad, incluir hosting de servidores locales de modelos GenAI y protección de información para evitar problemas legales.
### Debilitamiento de las relaciones interpersonales entre equipos
El artículo comenta que las relaciones entre humanos reales ayudan a crear una conexión y de esta forma se mejora el entendimiento entre ellos, lo que mejora la colaboración, incluso si es solo para resolver tareas pequeñas. Pero la idea principal con la IA y lo que debilitaría estas conexiones interpersonales es un pensamiento "¿Por qué hablar con mis compañeros e invertir tiempo aprendiendo a entenderlos si puedo discutir problemas y solucionarlos _hablando_ con la IA?". La realidad es que la IA permite a los desarrolladores entender código ajeno y complejo sin la necesidad de que el que lo escribió o conoce te explique, esto de cierta forma disminuye el tiempo que se necesita para comenzar a trabajar, pero hace que se pierda el conocimiento que tradicionalmente se transfiere de _senior_ a _junior_.

<div class="page-break" style="page-break-before: always;"></div>

## Comentarios
- Las distintas literaturas hacen mucho énfasis en que los roles cambiarán, los ingenieros de software dejaremos de escribir las secciones de código comunes o repetitivas lo que nos permitirá concentrarnos o invertir más tiempo en el análisis de requisitos, diseño de arquitectura y construir sistemas más mantenibles. Y si bien, es muy prometedor, también explican que las políticas y reglas, así como el delimitar el uso de la IA es importante para que no se pierdan ciertas habilidades importantes como el saber qué hacen las aplicaciones *por dentro*. Y aunque ya varias empresas utilizan la IA, al menos hasta enero del 2026 varias aún no tenían políticas para la IA, lo que se espera que en los últimos meses haya evolucionado y tal vez en algún momento se llegue a estandarizar.
- Durante las lecturas se habla de la GenAI como herramienta que genera un aumento en la velocidad y eficiencia de la producción de software, pero siempre me dio la impresión de que tiene un costo: la calidad del producto, siempre que se comenta, parece que los productos realizados con GenAI son "frágiles"

<div class="page-break" style="page-break-before: always;"></div>

## Declaración de uso de IA

- Herramienta utilizada: ChatGPT

Para *"Developers’ Dilemma: Opportunities and Pitfalls of Generative AI for Software Development"*, utilicé un prompt para entender un poco mejor el dilema porque no me quedaba muy claro, aterrizar las ideas que tenía y había encontrado y hacerlas más precisas. 
Usé este prompt:
```
Hola, cómo estás? Únicamente toma como fuente el artículo que te compartí.  
Puedes explicarme por favor cuál es el dilema del desarrollador del que se habla? Es que no termino de comprender completamente a qué se refiere con "dilema".  
También indícame qué beneficios de la educación interactiva no identifiqué aquí:  
Aunque el aprendizaje se puede potenciar porque la GenAI simplifica/traduce temas a un lenguaje natural y sencillo, eso mismo puede producir que desarrolladores novatos obtengan una "ilusión de competencia", lo que los lleva a creer que entienden más de lo que realmente entienden.

Y qué otras amenazas de la degradación de habilidades de programación se comentan en el texto por favor, si ya no encuentras más o no son muy graves indícame si me faltó profundizar las que escribí o qué otro punto de vista no estoy tomando en cuenta por favor:

- Se cree que los ingenieros de software invertirán menos tiempo escribiendo código directamente o incluso ya no se escribe código directamente.
- En general me parece que las habilidades que se perderán serán la de comunicarse y compartir de conocimiento entre colegas, explicar un código o revisarlo en pares, porque la GenAI al tener habilidades de _charla_ puede hacer revisiones de código e incluso ayudar a comprender lo que el desarrollador no comprenda.  
- La capacidad de colaborar probablemente se reduzca bastante.

Finalmente genera tu cadena de razonamiento por favor
```

<div class="page-break" style="page-break-before: always;"></div>

Cuando terminé de escribir el reporte utilicé este prompt para revisarlo, en general me corrigió faltas de ortografía, inconsistencia de términos y la forma en la que construí algunas oraciones:
```
Hola, puedes revisar mi reporte de lectura por favor? No generes texto nuevo ni agregues ideas.  
Enfócate en faltas de ortografía, mejorar legibilidad, coherencia y congruencia por favor.

Al final muestrame tu cadena de razonamiento auditable para verificar tu respuesta.

(Aquí le pegué mi reporte)
```

<div class="page-break" style="page-break-before: always;"></div>

**Bibliografía**

**(Gurgul et al., 2026):** The State of Generative AI in Software Development: Insights from Literature and a Developer Survey.

**(Sauvola et al., 2024):** Future of software development with generative AI.

**(Zacharias et al., 2026):** Developers’ Dilemma: Opportunities and Pitfalls of Generative AI for Software Development

Burak Yetiştiren, Işık Özsoy, Miray Ayerdem, and Eray Tüzün. Evaluating the Code Quality of AI-Assisted.

Code Generation Tools: An Empirical Study on GitHub Copilot, Amazon CodeWhisperer, and ChatGPT, October 2023. URL http://arxiv.org/abs/2304.10778. arXiv:2304.10778 [cs].

Mohammad Atif, Kriti Chopra, Ozgur Kilic, Tianle Wang, Zhihua Dong, Charles Leggett, Meifeng Lin, Paolo Calafiura, and Salman Habib. CelloAI: Leveraging Large Language Models for HPC Software Development in High Energy Physics, August 2025. URL http://arxiv.org/abs/2508.16713. arXiv:2508.16713 [cs].