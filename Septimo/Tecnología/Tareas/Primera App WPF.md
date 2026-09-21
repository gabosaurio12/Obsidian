14 de septiembre del 2026
Gabriel Antonio González López
## Crear el proyecto

Crear un proyecto WPF (.NET Framework) con C#:
![[Septimo/Tecnología/imgs/image.png]]

Ingresar el nombre ExpenseIt:![[Septimo/Tecnología/imgs/image 1.png]]

Abrir MainWindow.xaml y cambiar el elemento Window a NavigationWindow:![[Septimo/Tecnología/imgs/image 2.png]]

Quitar el elemento Grid y cambiar las propiedades de Title a "ExpenseIt", Height a "350" pixeles y Width a "500" pixeles:
![[image 3.png]]

Abrir el MainWindow.xaml.cs:
![[image 4.png]]

Agregar la página ExpenseItHome.xaml:![[image 5.png]]

Configuramos el título a "ExpenseIt - Home" y el tamaño de la ventana a 350px de alto y 500px de ancho:
![[Septimo/Tecnología/imgs/image-1.png]]

Agregar la propiedad *Source* a MainWindow.xaml y dirigirla a "ExpenseItHome.xaml":![[image 7.png]]

Crear una nueva página "ExpenseReportPage.xaml":![[image 8.png]]

Configurar el título de ExpenseReportPage.xaml a "ExpenseIt - View Expense" y la altura a 350px y el ancho a 500px
![[image 10.png]]

Agregar una imágen watermark.png:
![[image-1 1.png]]

Compilar y correr la aplicación:![[image 11.png]]
## Crear el layout

En *ExpenseItHome.xaml* crear un Grid con el margen "10,10,10,10" y definir las columnas y filas:![[image 12.png]]
## Agregar controles

En *ExpenseItHome.xaml* agregar entre las etiquetas Grid:![[image 13.png]]

Compilar y correr la aplicación:![[image 14.png]]
## Agregar una imágen y título

En *ExpenseItHome.xaml* agregar otra columna a *ColumnDefinitions* con un ancho de 230px y una nueva fila a *RowDefinitions*:
![[image 15.png]]

Mover los controles a la segunda columna, agregar watermark.png como Grid.Background y una Label "View Expense Report":
![[image 16.png]]

Si lo compilamos y corremos se ve así:![[image 17.png]]
## Agregar código a los manejadores de eventos

En ExpenseItHome.xaml agregar un evento **Click** al elemento **Button**:
![[image 18.png]]

Agregar la funcionalidad en ExpenseItHome.xaml.cs:
![[image-1 2.png]]

## Crear la UI para ExpenseReportPage

Abrir *ExpenseReportPage.xaml* y configurarlo:
![[image-2 1.png]]

Si compilamos y ejecutamos al dar click en View nos debe reenviar a ExpenseReportPage:
![[image 19.png]]
![[image-1 3.png]]
## Controles de estilo

Abrir Application.xaml y agregar entre las etiquetas *Application.Resources*:
![[image-2 1.png]]Las etiquetas hacen lo siguiente:
- *headerTextStyle*: Para darle formato a la label del título de la página
- *labelStyel*: Para darle formato a los controles de las label
- *columnHeaderStyle*: Para darle formato al **DataGridColumnHeader**
- *listHeaderStyle*: Para darle formato a los controles de la lista del borde de encabezado
- *listHeaderTextStyle*: Para darle formato a las label de la lista del encabezado
- *buttonStyle*: Para darle formato al botón en **ExpenseItHome.xaml**

Cambiar el grid de **ExpenseItHome.xaml**:![[image 20.png]]

Cambiar el grid de **ExpenseReportPage.xaml**:
![[image 21.png]]

Compilamos y ejecutamos la aplicación (Se espera que se vea igual):
![[image-1 4.png]]![[image 22.png]]
## Enlazar información a un control

En **ExpenseItHome.xaml** después del grid de apertura, agregar las líneas para crear un XmlDataProvider:
![[image 23.png]]

Dentro de <Grid.Resources> agregar <xref:System.Windows.DataTemplate>, lo que define como mostrar la información en el ListBox:
![[image-1 5.png]]

Reemplazamos el ListBox:
![[image 24.png]]

## Conectar la información a los controles

En *ExpenseReportPage.xaml.cs* agregar un constructor que toma un objeto para pasar el reporte de la persona seleccionada:
![[image-1 6.png]]
En *ExpenseItHome.xaml.cs* hay que cambiar el evento Click para que pase la información de la persona seleccionada:
![[image 25.png]]
## Darle estilo a la información con plantillas

Abrir *ExpenseReportPage.xaml* y enlazar el contenido del label "Name" y "Department" a la fuente de información apropiada:
![[image 26.png]]

Después del elemento Grid, agregar las siguientes plantillas que definen el cómo se muestra el reporte:
![[image-1 7.png]]

Reemplazar los elementos del DataGridTextColumn debajo del elemento DataGrid y aplicar las plantillas a él, también hay que espicifar el atributo ItemsSource con su valor en el elemento DataGrid:
![[image-2 2.png]]
Compilamos y ejecutamos la aplicación y ahora al seleccionar una persona y el botón View, deberíamos ver su reporte de gastos:
![[image 27.png]]![[image 28.png]]