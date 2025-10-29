- A medida que crea instancias de conceptos de diseño, normalmente creará un boceto. Estos son la documentación inicial para la arquitectura
	- Capturarlos y desarrollarlos más tarde
	- Si usas notación informal, ser consistente
	- Desarrollar la disciplina de anotar las responsabilidades que asigna a los elementos y las decisiones de diseño relevantes que se han tomado
- Registrarlos durante el diseño garantiza que no tendrás que recoredar cosas más tarde
## Selección de los conceptos de diseño
- Objetos de dominio, componentes externamente desarrollados
## Vista lógica

| Elemento                     | Responsabilidad                                                                              | Propiedades           |
| ---------------------------- | -------------------------------------------------------------------------------------------- | --------------------- |
| NetworkDeviceConnector       | Comunicarse con dispositivos de red y asilar el resto del sistema de un protocolo específico |                       |
| NetworkDeviceEventController | Procesar eventos que se reciben de los dispositivos de red                                   |                       |
| Topology Controller          | Proporciona acceso a la información de la topología de la red y sus cambios                  | Tipo=stateless        |
| RegionDataMatter             | Gestiona la persistencia de las regiones                                                     | Framework = Hibernate |
| NetworkStatusMonitoringView  | Muestra la topología de la red y los eventos que ocurren en los dispositivos                 | Framework = Swing     |
