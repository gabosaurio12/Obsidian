
| Contrato                    | De qué se encarga                                                   | Métodos                                                                   |
| --------------------------- | ------------------------------------------------------------------- | ------------------------------------------------------------------------- |
| **ICodeService**            | Enviar y autenticar códigos de verificación                         | `void SendVerificationCode(int playerId)`                                 |
|                             |                                                                     | `bool AuthVerificationCode(string username, string code)`                 |
| **IPlayerService**          | Realizar las funciones relacionadas al player (CRUD y de negocio)   | `string RegisterPlayer(Player player)`                                    |
|                             |                                                                     | `bool LoginPlayer(string username, string password)`                      |
|                             |                                                                     | `Player GetPlayerByUsername(string username)`                             |
|                             |                                                                     | `Player GetPlayerById(int playerId)`                                      |
|                             |                                                                     | `PlayerRecords GetPlayerRecords(string username)`                         |
|                             |                                                                     | `string ChangePassword(string username, string password)`                 |
|                             |                                                                     | `string UpdatePlayer(Player player)`                                      |
|                             |                                                                     | `string ReportPlayer(string reportedUsername, string reportedByUsername)` |
| **IFriendsService**         | Realizar las funciones relacionadas a amistades (CRUD y de negocio) | `List<Player> GetFriendships(string username)`                            |
|                             |                                                                     | `List<Player> GetFriendRequests(string username)`                         |
|                             |                                                                     | `Friendship GetFriendship(int addresserId, int addreseeId)`               |
|                             |                                                                     | `Friendship GetFriendRequest(int addresserId, int addreseeId)`            |
|                             |                                                                     | `string SendFriendRequest(string addresser, string addressee)`            |
|                             |                                                                     | `string AcceptFriendRequest(int addresser, int addresee)`                 |
|                             |                                                                     | `string RejectFriendRequest(int addresser, int addresee)`                 |
|                             |                                                                     | `string RemoveFriendship(string addresser, string addresse)`              |
| **IFriendsCallbackService** | Realizar las funciones callback necesarias para IFriendsService     | `void OnFriendshipStatusChanged(Friendship frienship)`                    |
| **IRoomService**            | Realizar las funciones de Rooms (CRUD y de negocio)                 | `List<Room> GetAvailableRooms()`                                          |
|                             |                                                                     | `bool CreateRoom(Room)`                                                   |
|                             |                                                                     | `bool JoinRoom(Room room, string username)`                               |
|                             |                                                                     | `bool JoinRoomWithCode(Room room, string player, string code)`            |
|                             |                                                                     | `Room GetRoom(string roomName)`                                           |
| **ILobbyService**           | Realizar las funciones del Lobby (CRUD y de negocio)                | `void SendMessage(string message)`                                        |
|                             |                                                                     | `void SetPlayerAsReady(string username)`                                  |
|                             |                                                                     | `bool EscapeFromRoom(string username)`                                    |
| **ILobbyCallbackService**   | Realizar las funciones callback del lobby                           | `void OnMessageReceivedCallback(ChatMessage message)`                     |
|                             |                                                                     | `void OnChangePlayerStatusCallback(PlayerStatus status)`                  |
| **IMatchService**           | Realizar las funciones de la partida (CRUD y de Negocio)            | `Time SetTimer(string difficulty)`                                        |
|                             |                                                                     | `TryResult ValidateTry(string username, Try try)`                         |
|                             |                                                                     | `void SumAPoint(string username)`                                         |
| **IMatchCallbackService**   | Realizar las funciones callback de la partida                       | `void InSumAPointCallback(string username)`                               |
|                             |                                                                     | `void OnSetWinnerCallback(string username)`                               |
