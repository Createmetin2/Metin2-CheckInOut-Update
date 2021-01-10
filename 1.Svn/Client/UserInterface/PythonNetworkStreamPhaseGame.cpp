//Find
bool CPythonNetworkStream::SendExchangeItemAddPacket(TItemPos ItemPos, BYTE byDisplayPos)

///Change
#if defined(ITEM_CHECKINOUT_UPDATE)
bool CPythonNetworkStream::SendExchangeItemAddPacket(TItemPos ItemPos, BYTE byDisplayPos, bool SelectPosAuto)
#else
bool CPythonNetworkStream::SendExchangeItemAddPacket(TItemPos ItemPos, BYTE byDisplayPos)
#endif

//Find in same function
	packet.arg2			= byDisplayPos;

///Add
#if defined(ITEM_CHECKINOUT_UPDATE)
	packet.SelectPosAuto = SelectPosAuto;
#endif