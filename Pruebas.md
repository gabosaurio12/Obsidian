## ProfileManager (38)
- [x] bool ValidateEmail(string email)
- [x] bool IsUsernameAvailable(string username)
- [x] bool SendEmail(string email, int playerId)
- [x] int SignUp(Player player)
- [x] Player Login(string username, string password)
- [x] Player GetPlayerByUsername(string username, bool includeFriends = true);
- [x] Player GetPlayerById(int playerId, bool includeFriends = true);
- [x] bool UpdatePlayer(Player updatedPlayer);
- [x] bool DeletePlayerByUsername(string username);
- [x] bool ConnectPlayerByUsername(string username);
- [x] bool DisconnectPlayerByUsername(string username);
## FriendsManager (43)
- [x] bool AcceptFriendRequest(string senderUsername, string receiverUsername)
- [x] (Contracts.Player sender, Contracts.Player receiver) GetSenderReceiver(string senderUsername, string receiverUsername)
- [x] bool SendFriendRequest(string senderUsername, string receiverUsername)
- [x] bool CancelFriendRequest(string senderUsername, string receiverUsername)
- [x] bool DeleteFriend(string friendUsername, string playerUsername)
- [x] List[FriendRequest] GetFriendRequests(string receiverUsername)
- [x] List[Friendship] GetFriendsByID(int playerID)
## TokenManager
- [x] string CreateRandomToken()
- [ ] Token GenerateToken(int playerId)
- [ ] Token GetToken(int playerId)
- [ ] bool VerifyToken(string token, int playerId)
## BoardManager
- [ ] List[String] GetTileImages();
- [ ]  List[Card] GetTreasureCards();
- [ ] List[Card] GetFloodCards();
- [ ] Card GetCard(string path);