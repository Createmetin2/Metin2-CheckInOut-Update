//Find
		bool SendExchangeItemAddPacket(TItemPos ItemPos, BYTE byDisplayPos);
		
///Change
#if defined(ITEM_CHECKINOUT_UPDATE)
		bool SendExchangeItemAddPacket(TItemPos ItemPos, BYTE byDisplayPos, bool SelectPosAuto);
#else
		bool SendExchangeItemAddPacket(TItemPos ItemPos, BYTE byDisplayPos);
#endif

//Find
		bool SendSafeBoxCheckinPacket(TItemPos InventoryPos, BYTE bySafeBoxPos);
		
///Change
#if defined(ITEM_CHECKINOUT_UPDATE)
		bool SendSafeBoxCheckinPacket(TItemPos InventoryPos, BYTE bySafeBoxPos, bool SelectPosAuto);
#else
		bool SendSafeBoxCheckinPacket(TItemPos InventoryPos, BYTE bySafeBoxPos);
#endif

//Find
		bool SendSafeBoxCheckoutPacket(BYTE bySafeBoxPos, TItemPos InventoryPos);
		
///Change
#if defined(ITEM_CHECKINOUT_UPDATE)
		bool SendSafeBoxCheckoutPacket(BYTE bySafeBoxPos, TItemPos InventoryPos, bool SelectPosAuto);
#else
		bool SendSafeBoxCheckoutPacket(BYTE bySafeBoxPos, TItemPos InventoryPos);
#endif

//Find
		bool SendMallCheckoutPacket(BYTE byMallPos, TItemPos InventoryPos);
		
///Change
#if defined(ITEM_CHECKINOUT_UPDATE)
		bool SendMallCheckoutPacket(BYTE byMallPos, TItemPos InventoryPos, bool SelectPosAuto);
#else
		bool SendMallCheckoutPacket(BYTE byMallPos, TItemPos InventoryPos);
#endif