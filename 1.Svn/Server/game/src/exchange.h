//Find
		bool		AddItem(TItemPos item_pos, BYTE display_pos);
		
///Change
#if defined(ITEM_CHECKINOUT_UPDATE)
		int			GetEmptyExchange(BYTE size);
		bool		AddItem(TItemPos item_pos, BYTE display_pos, bool SelectPosAuto);
#else
		bool		AddItem(TItemPos item_pos, BYTE display_pos);
#endif