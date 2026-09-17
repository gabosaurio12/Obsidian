15 de septiembre del 2026
Gabriel Antonio González López
## Práctica con C# y WPF

Crear un proyecto WPF con el nombre **WPFLocalization**:
![[image-1 8.png]]

En el archivo Resources.resx cambiar el modificador de acceso a Público para que sea accesible desde un XAML:![[image 29.png]]

Agregar los siguientes nombres de string y valores:![[image 30.png]]

Crear dos copias de Resources.resx con los nombres Resources.en.resx y Resources.es-MX.resx, luego cambiar los valores en Resources.es-MX.resx a palabras en español:
![[image 31.png]]

En MainWindow.xaml hay que agregar tres cajas de texto, tres labels y tres botones, también agregar el namespace que usarán los recursos de localización *xmlns:p = "clr-namespace:WPFLocalization.Properties*. Cada uno de los controles utilizará el contenido de las strings definidas en los archivos .resx:
![[image 32.png]]

Al compilar y ejecutar:
![[image 33.png]]

Para mostrar el lenguaje alternativo hay que configurar el App.xaml (se usa "en" para inglés y "es-MX" para español):
![[image 34.png]]

Al compilar y ejecutar:
![[image-1 9.png]]

En español:
![[image 35.png]]

Al compilar y ejecutar:![[image-1 10.png]]