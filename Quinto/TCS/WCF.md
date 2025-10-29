Docente: Juan Carlos Pérez Arriaga
Alumno: Gabriel Antonio González López
## Lectura de WCF
- ¿Cuál es el objetivo de utilizar WCF en la construcción de aplicaciones?
	- Poder comunicarnos con un servidor, su principal función es la interoperabilidad. Desarrollado por Microsoft para construir aplicaciones orientadas al servicio
- ¿Qué es un Contract en WCF y para qué sirve?
	- Es una capa junto a la capa de aplicación contiene información similar a la de un contrato de la vida real
	- Es el contrato de los métodos que se expondrán al cliente
	- Tipos de contrato:
		- Contrato de servicio: Provee información al cliente así como al mundo externo acerca de las ofertas al endpoint y los protocolos que se usarán en el proceso de comunicación
		- Contrat de información: La información intercambiada por un servcio y que es definida por un contrato de mensaje.
		- Contrato de mensaje: Un contrato de información es controlado por un contrato de mensaje. Personaliza el tipo de formato de los parámetros de un mensaje SOAP
		- Política y vinculación (binding): Hay ciertas pre-condiciones para comunicarse con un servicio. Un cliente debe seguir este contrato
- ¿Qué es un endpoint en WCF?
	- Define la dirección a donde se enviará o recibirá un mensaje. Especifica los mecanismos de comunicación que describen cómo se enviará el conjunto de mensajes, está compuesto por:
		- Dirección: Es una URI, se expresa como: scheme://domain[:port]/[path]
		- Binding: Define cómo un endpoint se comunica. 
		- Contratos: Es la colección de operaciones que especifica qué funcionalidad el endpoint expone al cliente. Suele consistir del nombre de la interfaz
		- Hosting: El servicio de hosting que puede ser: self-hosting, IIS hosting WAS hosting
		- Cliente WCF: La aplicación de cliente que se crea por exponer las operaciones de servicio en la forma de métodos
		- Canal: Es el medio por el que un cliente se comunica con un servicio
		- SOAP: Simple Object Access Protocol, no es un protocolo de transporte. Es un XML
- ¿Qué es un behaviour en el contexto de Service Runtime y por qué es necesario definirlos?
	- Existen varios tipos de behaviours, es la respuesta que se da a ciertos escenarios, es necesario definirlos porque es lo que se hace en x situación
	- Tipos:
		- Throttling: Administra el número de mensajes procesados
		- Error: Define el resultado de cualquier error de servicio interno
		- Instance: Define el número de instancias que se necesitan crear para que estén disponibles para el cliente
		- Transaction: Habilita el cambio de estado por transacción ante cualquier fala
		- Dispatch: Controla la forma en la que un mensaje se procesa por la infraestructura de WCF
		- Concurrency: Controla las funciones que corren en paralelo mientras el cliente - servidor se comunican
		- Parameter filtering: Presenta el proceso de validación de parámetros de un método antes de que se invoque.
- ¿Cómo podemos hacer la activación de un servicio y el proceso de hosting para poder consumir la funcionalidad en la red?
	1. Debemos crear el contrato
	2. Definir el code-behind
	3. Correr el servicio
	4. Creamos un WCF Service
	5. Configuramos el servidor
	6. Corremos la aplicacíon
## Bibliografía
https://www.tutorialspoint.com/wcf/wcf_quick_guide.htm