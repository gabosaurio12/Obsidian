**Creación de UI con estilo bonito**
```
actualiza la vista xxx al nuevo estilo en new_prototypes, utiliza los assets ya existentes si es posible (como para botones o text box). Si te falta algo dime por favor
```

**Implementación de interfaces**
```
Posibles Status para PlayerStatus:
- Ready
- NotReady
- Escaped
  
Valores de retorno en ILobbyService:
Para SendMessage():
- MessageSent
- InnappropriateVocabulary
- Error

Para ChangePlayerStatus():
- Success
- Error
  
Valores de retorno en IRoomService:
Para CreateRoom():
- Success
- Error
- RoomNameTaken

Para JoinRoom():
- Success
- Error

Para JoinRoomWithCode():
- Success
- WrongCode
- Error
  
Para GetRoomByName():
- Si no encuentra un room se devuelve un Room con RoomId = 0, se deberán implementar las validaciones correspondientes
```

