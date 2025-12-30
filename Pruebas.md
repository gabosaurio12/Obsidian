## ProfileManager
## FriendsManager
- [x] bool AcceptFriendRequest(string senderUsername, string receiverUsername)
- [x] (Contracts.Player sender, Contracts.Player receiver) GetSenderReceiver(string senderUsername, string receiverUsername)
- [x] bool SendFriendRequest(string senderUsername, string receiverUsername)
- [x] bool CancelFriendRequest(string senderUsername, string receiverUsername)
- [x] bool DeleteFriend(string friendUsername, string playerUsername)
- [x] List[FriendRequest] GetFriendRequests(string receiverUsername)
- [ ] List[Friendship] GetFriendsByID(int playerID)