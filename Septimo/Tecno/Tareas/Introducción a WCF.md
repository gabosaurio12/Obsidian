**Gabriel Antonio González López**
**13 de octubre del 2026**

---

## ¿Cuál es el objetivo de utilizar WCF en la construcción de aplicaciones?

Construir aplicaciones orientadas a servicios y con múltiples mecanismos de transporte de mensajes.

## ¿Qué es un Contract en WCF y para qué sirve?

Es una colección de operaciones que especifican qué funcionalidad expone el endpoint al cliente. Generalmente está nombrada como una interfaz.

Existen cuatro tipos:
- **Service contract:** Provee información al cliente así como al mundo externo acerca de lo que ofrece su endpoint y los protocolos que se deben usar en el proceso de comunicación
- **Data contract:** La información intercambiada por un servicio está definida por un data contract. Tanto el cliente como el servicio deben tener un "acuerdo" con la información del data contract.
- **Message contract:** Controla al data contract. Realiza la personalización y el tipo de formateo de los parámetos del mensaje SOAP (WCF utiliza el formato SOAP -Simple Object Access Protocol- para comunicación).
- **Policy and Binding:** Hay ciertas pre-condiciones para la comunicación con un servicio y esas condiciones son definidas por un policy and binding contract. El cliente debe seguir este contrato.

## ¿Qué es un endpoint en WCF?

Un endpoint define la dirección de donde un mensaje se envía o es recibido. También especifica el mecanismo de comunicación para describir cómo los mensajes serán enviados, también define el conjunto de mensajes.

## ¿Qué es un behaviour en el contexto de Service Runtime y por qué es necesario definirlos?

Los behaviors modificar o extienden la ejecución de un servicio, sus endpoints, contratos u operaciones, hay varios tipos:

- **Service behavior:** Afectan el service runtime completo
- **Error behavior:** Define el resultado de cualquier error interno de servicio
- **Intance behavior:** Define el número de instancias que necesitan ser creadas para que estén disponibles para el cliente
- **Concurrency behavior:** Controlan el funcionamiento que corre en paralelo durante la comunicación cliente-servidor
- **Parameter filtering:** Es un proceso de validación de parámetros a un método antes de que sea invocado

## ¿Cómo podemos hacer la activación de un servicio y el proceso de hosting para poder consumir la funcionalidad en la red?

Existen varias formas:

- **Mediate IIS (Internet Information Service):** el cual a diferencia de HTTP, activa automáticamente el código de servicio.
- **Con Windows Activation Service (WAS):** permite usar HTTP, TCP o protocolos Namedpipe.

- **Self-hosting:** es un mecanismo con el que un servicio se hostea a sí mismo como una aplicación de consola. Este mecanismo ofrece mucha flexibilidad en términos de elegir el protocolo deseado y configurar el esquema de rutas.
- **Windows Service:** hostea el servicio WCF, y es bueno porque los servicios se mantienen activos y accesibles al cliente porque no hay una activación en tiempo de ejecución.