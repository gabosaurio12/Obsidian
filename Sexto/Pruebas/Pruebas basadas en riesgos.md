## Introducción

Las pruebas basadas en riesgos ofrecen múltiples beneficios. Ayudan a asignar recursos de manera efectiva, priorizar los esfuerzos de prueba y centrarse en las áreas del software que presentan mayores riesgos para el éxito del proyecto.

---
## Definición

_Las pruebas basadas en riesgos (RBT, por sus siglas en inglés) son un tipo de prueba de software que se basa en la probabilidad de riesgo. Implica evaluar el riesgo en función de la complejidad del software, la criticidad del negocio, la frecuencia de uso, las posibles áreas con defectos, etc._

Existen dos tipos de riesgos:

- Los **riesgos positivos** se consideran oportunidades y contribuyen a la sostenibilidad del negocio.
	- Por ejemplo, invertir en un nuevo proyecto, modificar los procesos empresariales o desarrollar nuevos productos. 
- Los **riesgos negativos** se consideran amenazas y, para el éxito del proyecto, es necesario implementar recomendaciones para minimizarlos o eliminarlos.

---
## Características Principales

- Se centra en identificar y abordar las áreas de alto riesgo con mayor intensidad que las de bajo riesgo. 
- Es un enfoque iterativo que descubre y desglosa continuamente los riesgos para su resolución.
- Se priorizan los casos de prueba, ejecutándose primero las pruebas de mayor riesgo para mitigar posibles problemas. 
- Se destinan más recursos a los riesgos significativos que pueden requerir una investigación y un desarrollo exhaustivos.
- Las pruebas se realizan en función de los niveles de riesgo. Se intensifican a medida que aumenta la gravedad del riesgo.

---
## Técnicas para conducir pruebas basadas en riesgos

### Pruebas ligeras basadas en riesgos
Este enfoque identifica y aborda rápidamente las áreas de alto riesgo con una mínima sobrecarga, lo que lo hace ideal para proyectos con tiempo o recursos limitados.
### Pruebas basadas en riesgos de gran envergadura
Este método ofrece un enfoque exhaustivo y estructurado para la evaluación de riesgos, adecuado para proyectos complejos o industrias reguladas.

---
## Fases

**RBT** sigue un proceso estructurado para evaluar y gestionar riesgos de software eficazmente.

1. Identificación y evaluación de riesgos: se usan entrevistas a expertos, evaluaciones, Workshops y experiencias pasadas. Se evalúan los riesgos por probabilidad e impacto.
2. Creación de un registro de riesgos: se categorizan los riesgos identificados en sus riesgos, usando una estructura jerárquica.
3. Análisis de riesgos: se analizan cualitativa y cuantitativamente empleando métodos como la tabla 3 × 3 para evaluar la probabilidad e impacto.
4. Uso de una matriz de evaluación de riesgos: se utiliza una matriz que multiplica la probabilidad por la severidad para priorizar los riesgos.
5. Crear una tabla de prioridad de casos de prueba: se ordenan los casos de prueba  basándose en su riesgo, asegurando que las pruebas de mayor prioridad se han ejecutadas primero.
6. Determinar el nivel de detalle: se determina el nivel requerido, basándose en la prioridad por caso de prueba.
7. Ajustar el plan: analizando los riesgos identificados, se consideran opciones como ajustar el plan del proyecto o reasignar recursos.
8. Crear un plan de contingencia: si crea un plan de contingencia para eventos imprevistos y llevar un seguimiento continuo de riesgos identificados, monitoreando nuevos riesgos y evaluando cambios.

---
## 9. Ventajas

- **Mayor enfoque en el cliente:** las pruebas basadas en riesgos enfatizan las pruebas exhaustivas en las características que afectan a los clientes de manera más directa, es decir, las de mayor riesgo.
- **Mejor calidad del software:** Las pruebas basadas en riesgos se centran en encontrar primero los riesgos más altos y en garantizar que las funciones más importantes se prueben primero.
- **Pruebas más estructuradas:** Cuando se identifican los riesgos y se cuantifica su impacto, resulta más fácil decidir qué probar, dónde empezar y dónde terminar las pruebas.

---
## 10. Desventajas o Limitaciones

- **Riesgo de cobertura de pruebas no realizada o insuficiente:** el enfoque de RBT en los módulos de alto riesgo puede llevar a pasar por alto las pruebas en áreas de bajo riesgo.
- **Dependencia excesiva del juicio humano:** requiere una evaluación e identificación continua de los riesgos, lo que exige un esfuerzo y recursos constantes.
- **Requiere reevaluación continua:** 
- **No es eficaz para nuevas aplicaciones:** es posible que no se ajusten bien a ciertos tipos de pruebas, como las exploratorias o las de usabilidad.

---
## 13. Conclusión

Las pruebas basadas en riesgos son una excelente alternativa cuando se dispone de tiempo, y el sistema tiene un alto impacto ante errores. Aunque se debe tener en cuenta que la cobertura de las pruebas pueden no llegar a ser suficiente, por lo que es conveniente usar otras técnicas en conjunto con **RBT**.

---
## 14. Fuentes o Referencias
- [TestSigma - What is Risk Based Testing? Top Benefits & Approaches (2026)](http://testsigma.com/blog/risk-based-testing/)
- [BrowserStack - Risk Based Testing Approach for Agile Teams(2025)](https://www.browserstack.com/guide/risk-based-testing-in-agile)
- [TestRail - Understanding the Pros and Cons of Risk-Based Testing (2024)](https://www.testrail.com/blog/risk-based-testing/)
