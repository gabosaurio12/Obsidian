## Qué se revisa
Cuando un desarrollador trabaja en un código otro revisa el código, las revisiones se deben hacer cuando el código de un flujo de trabajo sea terminado y las pruebas se hayan superado y antes de que se haga un merge con el repositiorio remoto. El desarrollador que revisa se debe preguntar lo siguiente:
- ¿Hay errores lógicos obvios en el código?
- Teniendo en cuenta los requisitos ¿están todos los casos implementados completamente?
- ¿Las nueas pruebas automatizadas son suficientes para el nuevo código?
- ¿Deben reescribirse las pruebas automatizadas actuales para tener en cuenta cambios en el código?
- ¿El nuevo código sigue las directrices del estilo actuales?
## Qué es la revisión formal
Es un proceso estructurado con un enfoque riguroso, usualmente par aproyectos de alto riesgo o críticos. Incluye metodologías definidas con etapas: planeación, preparación, reunión de revisión, correción y seguimiento. Buscan defectos importantes y el incumplimiento de Estándares de calidad. Busca detectar los defectos antes de que llegue a producción.
## Proceso
1. Planeación
	- El moderador organiza la revisión
	- Se selecciona un fragmento de código a revisar
	- Se distribuyen los materiales (código, documentos de diseño, requisitos)
2. Preparación
	-  Cada revisor analiza el código de manera individual
	- Se usan listas de verificación (como errores comunes de seguridad, estilo o rendimiento)
3. Reunión de revisión
	- Se lleva a cabo una reunión estructurada
	- El autor presenta el código
	- Los revisores comentan defectos encontrados
	- No es un espacio para debatir soluciones extensas, sino para identificar errores
4. Corrección
	- El autor del código aplica las correcciones necesarias
5. Seguimiento (Follow-up)
	- El moderador verifica que los defectos señalados fueron corregidos
	- Se documenta el resultado de la revisión
## Roles
- **Moderador:** Planifica la revisión, convoca a los participantes, mantiene la reunión enfocada y en tiempo
- **Autor del código:** Presenta el código, explica el contexto, requisitos y el diseño. Resuelve dudas, pero no defiende su código de forma emocional. Corrige los defectos encontrados
- **Revisor(es):** Se preparan antes de la reunión revisando el código, aquí detectan defectos, omisiones y violaciones a estándares. Participa activamente en la discución
- **Secretario:** Documenta los hallazgos de los revisores y redacta un informe de la revisión
## Cuándo se aplica esta técnica
- En proyectos **críticos** como financieros, médicos, aeroespaciales o de seguridad
- Cuando el costo del error es muy alto
- En módulos complejos o de **alto riesgo**
- En un Software con requerimientos de auditoría o normativas (ej DO-178C en aeronáutica o el ISO 262662 en automotriz)
## Bibliografía
- **Pressman, R. S., & Maxim, B. R. (2015).** _Ingeniería de software: Un enfoque práctico_ (7ma ed.). McGraw-Hill.    
- **IEEE Std 1028-2008.** _IEEE Standard for Software Reviews and Audits._
- **Sommerville, I. (2011).** _Ingeniería del software_ (9na ed.). Pearson Educación.
- **Wiegers, K. E. (2002).** _Peer Reviews in Software: A Practical Guide._ Addison-Wesley.
- **Fagan, M. E. (1976).** _Design and Code Inspections to Reduce Errors in Program Development._ IBM Systems Journal, 15(3), 182–211.