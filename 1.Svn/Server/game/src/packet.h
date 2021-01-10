//Find in typedef struct command_exchange
	TItemPos	Pos;
	
///Add
#if defined(ITEM_CHECKINOUT_UPDATE)
	bool	SelectPosAuto;
#endif

//Find in typedef struct command_safebox_checkout
	TItemPos	ItemPos;
	
///Add
#if defined(ITEM_CHECKINOUT_UPDATE)
	bool	SelectPosAuto;
#endif

//Find in typedef struct command_safebox_checkin
	TItemPos	ItemPos;
	
///Add
#if defined(ITEM_CHECKINOUT_UPDATE)
	bool	SelectPosAuto;
#endif
