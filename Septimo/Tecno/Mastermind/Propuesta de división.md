## Cliente

```
MasterMind_Client.sln
|- MasterMind_Client
|-- Assets/
|--- Utils/
|---- UtilsUI.cs
|---- ErrorCodesEnum.cs
|--- Backgrounds/
|--- Avatars/
|-- Modals/
|-- Pages/
|-- ViewModels/
|--- AuthService
|-- CurrentPlayer.cs
|-- MainWindow.xaml
|- MasterMind_Client.Tests
|-- PagesTests/
|-- UnitTests/
```

## Servidor

```
MasterMind_Server.sln
|- MasterMind_Server
|-- DataModel
|--- Entities/
|--- MasterMindModel.edmx
|-- Assets
|--- Avatars
|-- Services
|--- AuthService.cs
|--- PlayerService.cs
|--- FriendshipService.cs
|--- MatchRoomService.cs
|--- MatchService.cs
|--- BanningService.cs
```

<div class="page-break" style="page-break-before: always;"></div>

## Diagrama de componentes

![[image-1 14.png]]

<div class="page-break" style="page-break-before: always;"></div>

### Diagrama de interfaces

![[image 55.png]]

<div class="page-break" style="page-break-before: always;"></div>

## Diagrama de despliegue

### Vista física

![[image-2 11.png]]

### Vista de artefactos

#### Cliente

![[Septimo/Tecno/imgs/image-6.png]]

<div class="page-break" style="page-break-before: always;"></div>

#### Servidor

![[Septimo/Tecno/imgs/image-5.png]]