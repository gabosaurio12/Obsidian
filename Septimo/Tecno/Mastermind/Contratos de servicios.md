
| Contrato                     | De qué se encarga                                                   | Métodos                                                                |
| ---------------------------- | ------------------------------------------------------------------- | ---------------------------------------------------------------------- |
| ICodeService                 | Enviar y autenticar códigos de verificación                         | `void SendVerificationCode(int playerId)`                              |
|                              |                                                                     | `bool AuthVerificationCode(string username, string code)`              |
| IPlayerService               | Realizar las funciones relacionadas al player (CRUD y de negocio)   | `(bool, string) RegisterPlayer(Player player)`                         |
|                              |                                                                     | `bool LoginPlayer(string username, string password)`                   |
|                              |                                                                     | `Player GetPlayerByUsername(string username)`                          |
|                              |                                                                     | `Player GetPlayerById(int playerId)`                                   |
|                              |                                                                     | `PlayerRecords GetPlayerRecords(string username)`                      |
|                              |                                                                     | `bool ChangePassword(string username, string password)`                |
|                              |                                                                     | `bool UpdatePlayer(Player player)`                                     |
|                              |                                                                     | `bool ReportPlayer(string reportedUsername, string reportedByUsername) |
| IFriendsService              | Realizar las funciones relacionadas a amistades (CRUD y de negocio) | `List<Friendship> GetFriendships(string username)`                     |
|                              |                                                                     | `List<FriendRequest> GetFriendRequests(string username)`               |
|                              |                                                                     | `bool SendFriendRequest(string addresser, string addressee)`           |
|                              |                                                                     | `bool AcceptFriendRequest(string addresser, string addresee)`          |
|                              |                                                                     | `bool RejectFriendRequest(string addresser, string addresee)`          |
|                              |                                                                     | `bool RemoveFriendship(string addresser, string addresse)`             |
| IFriendsCallbackService      | Realizar las funciones callback necesarias para IFriendsService     | `void FriendRequestAccepted(Friendship frienship)`                     |
|                              |                                                                     | `void FriendRequestReceived(FriendRequest friendRequest)`              |
|                              |                                                                     | `void FriendRequestRejected(FriendRequest friendRequest)`              |
|                              |                                                                     | `void FriendRemoved(Friendship friendship)`                            |
| IRoomService                 | Realizar las funciones de Rooms (CRUD y de negocio)                 | `List<Room> GetAvailableRooms()`                                       |
|                              |                                                                     | `bool CreateRoom(Room)`                                                |
|                              |                                                                     | `bool JoinRoom(Room room, string username)`                            |
|                              |                                                                     | `bool JoinRoomWithCode(Room room, string player, string code)`         |
|                              |                                                                     | `Room GetRoom(string roomName)`                                        |
| IRoomLobbyService            | Realizar las funciones del Lobby (CRUD y de negocio)                | `void SendMessage(string message)`                                     |
|                              |                                                                     | `void SetPlayerAsReady(string username)`                               |
|                              |                                                                     | `bool EscapeFromRoom(string username)`                                 |
| IRoomLobbyCallbackService    | Realizar las funciones callback del lobby                           | `void MessageReceivedCallback(ChatMessage message)`                    |
|                              |                                                                     | `void ChangePlayerStatusCallback(PlayerStatus status)`                 |
|                              |                                                                     | `void PlayerEscapedFromRoomCallback(string playerEscaped)`             |
| IMatchService                | Realizar las funciones de la partida (CRUD y de Negocio)            | `Time SetTimer(string difficulty)`                                     |
|                              |                                                                     | `TryResult ValidateTry(string username, Try try)`                      |
|                              |                                                                     | `void SumAPoint(string username)`                                      |
| IMatchServiceCallbackService | Realizar las funciones callback de la partida                       | `void SumAPointCallback(string username)`                              |
|                              |                                                                     | `void SetWinnerCallback(string username)`                              |
