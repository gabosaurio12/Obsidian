## Instalar y conectar a Northwind

Crear la base de datos Northwind:
![[image 37.png]]

Agregar las conexiones para la base de datos Northwind
![[image 38.png|523]]
## Configurar el proyecto WPF

Agregar el paquete NuGet para Entity Framewokr:
![[image 39.png]]
## Crear el ADO.NET entity data model

Agregar un nuevo elemento al proyecto WPF y elegir ADO.NET Entity Data Model:
![[image 40.png]]

En el wizard elegir EF Designer from database:
![[image-1 11.png]]
Luego seleccionamos la conexión que creamos hace rato y damos siguiente:
![[image-2 3.png]]
En la siguiente página del wizard podemos seleccionar las tablas, procedimientos y otros objetos, a incluir en el modelo EF:
![[image-3 1.png]]
El wizard genera las clases C# que representan el modelo EF y crea los siguientes archivos:
- El .edmx describe las relaciones y otros metadatos que asocia las clases con objetos y en la base de datos
- Los .tt son plantillas T4 que generan el código que opera en el modelo y guarda los cambios en la base de datos
![[image-4.png|227]]
Para poder trabajar con WPF data binding hay que editar lo siguiente para que ObservableCollection esté disponible. Hay que editar en Northwind_model.tt:
- Reemplazar las dos ocurrencias de ICollection con ObservableCollectionT. 
- Reemplazar la primera ocurrencia de HashSetT con ObservableCollectionT cerca de la línea 51, no se debe reemplazar la segunda
- Reemplazar la única ocurrencia de System.Collections.Generic (cerca de la línea 431) con System.Collections.ObjectModel
## Hacer un data bind del modelo a una página XAML

Agregar una nueva fuente de información:
![[image-5.png]]

Luego seleccionar el objeto Customer:
![[image-6.png]]
Luego personalizar MainWindow.xaml:
![[image-7.png]]

Para mostrar cada propiedad de Customers en cada textbox individual, hay que hacer lo siguiente:
![[image-8.png]]

Luego hay que arrastrar la propiedad Order de Customers a la zona inferior del diseñador:
![[image 41.png]]

Luego agregamos datos con desde MainWindow.xaml.cs:
![[image-2 4.png]]

Al compilar y ejecutar:
![[image-1 12.png]]
## Ajustar el diseño de la página y agregar grids para nuevos clientes y órdenes

Cambiar el XAML:![[image 42.png]]
## Agregar botones para navegar, agregar, actualizar y borrar

Actualizar el XAML para que tenga botones y estilos nuevos:
![[image 43.png]]

## Agregar manejadores de comandos a la clase MainWindow

Agregamos los manejadores a MainWindow.xaml.cs:
![[image-2 5.png]]

Compilamos y ejecutamos:![[image 44.png]]
## Correr la aplicación

Compilamos y ejecutamos la aplicación:
![[image 45.png]]

Seleccionamos Commit para agregar un nuevo cliente u ordenar al modelo después de ingresar la información:
![[image 46.png]]
![[image-1 15.png]]

Seleccionar cancelar:
![[image-2 6.png]]
![[image-3 1.png]]

Editar información:
![[image 47.png]]
![[image-1 16.png]]
