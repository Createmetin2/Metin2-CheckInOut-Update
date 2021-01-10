//Find
#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	0);
#endif

///Add
#if defined(ITEM_CHECKINOUT_UPDATE)
	PyModule_AddIntConstant(poModule, "ITEM_CHECKINOUT_UPDATE", true);
#else
	PyModule_AddIntConstant(poModule, "ITEM_CHECKINOUT_UPDATE", false);
#endif