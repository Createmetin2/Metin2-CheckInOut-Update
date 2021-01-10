//Find
	rkNetStream.SendExchangeItemAddPacket(TItemPos(bWindowType, wSlotIndex), iDisplaySlotIndex);
	
///Change
#if defined(ITEM_CHECKINOUT_UPDATE)
	rkNetStream.SendExchangeItemAddPacket(TItemPos(bWindowType, wSlotIndex), iDisplaySlotIndex, iDisplaySlotIndex == -1);
#else
	rkNetStream.SendExchangeItemAddPacket(TItemPos(bWindowType, wSlotIndex), iDisplaySlotIndex);
#endif

//Find
PyObject* netSendSafeboxCheckinPacket(PyObject* poSelf, PyObject* poArgs)
{
	...
}

///Change
PyObject* netSendSafeboxCheckinPacket(PyObject* poSelf, PyObject* poArgs)
{
	TItemPos InventoryPos;
	int iSafeBoxPos;
#if defined(ITEM_CHECKINOUT_UPDATE)
	bool SelectPosAuto = false;
#endif

	switch (PyTuple_Size(poArgs))
	{
#if defined(ITEM_CHECKINOUT_UPDATE)
	case 1:
		iSafeBoxPos = 0;
		if (!PyTuple_GetInteger(poArgs, 0, &InventoryPos.cell))
			return Py_BuildException();
		SelectPosAuto = true;
		break;
#endif
	case 2:
		InventoryPos.window_type = INVENTORY;
		if (!PyTuple_GetInteger(poArgs, 0, &InventoryPos.cell))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 1, &iSafeBoxPos))
			return Py_BuildException();
		break;
	case 3:
		if (!PyTuple_GetInteger(poArgs, 0, &InventoryPos.window_type))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 1, &InventoryPos.cell))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 2, &iSafeBoxPos))
			return Py_BuildException();
		break;

	}

	CPythonNetworkStream& rns=CPythonNetworkStream::Instance();
#if defined(ITEM_CHECKINOUT_UPDATE)
	rns.SendSafeBoxCheckinPacket(InventoryPos, iSafeBoxPos, SelectPosAuto);
#else
	rns.SendSafeBoxCheckinPacket(InventoryPos, iSafeBoxPos);
#endif

	return Py_BuildNone();
}

//Find
PyObject* netSendSafeboxCheckoutPacket(PyObject* poSelf, PyObject* poArgs)
{
	...
}

///Change
PyObject* netSendSafeboxCheckoutPacket(PyObject* poSelf, PyObject* poArgs)
{
	int iSafeBoxPos;
	TItemPos InventoryPos;
#if defined(ITEM_CHECKINOUT_UPDATE)
	bool SelectPosAuto = false;
#endif

	switch (PyTuple_Size(poArgs))
	{
#if defined(ITEM_CHECKINOUT_UPDATE)
	case 1:
		if (!PyTuple_GetInteger(poArgs, 0, &iSafeBoxPos))
			return Py_BuildException();
		SelectPosAuto = true;
		break;
#endif
	case 2:
		if (!PyTuple_GetInteger(poArgs, 0, &iSafeBoxPos))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 1, &InventoryPos.cell))
			return Py_BuildException();
		break;
	case 3:
		if (!PyTuple_GetInteger(poArgs, 0, &iSafeBoxPos))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 1, &InventoryPos.window_type))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 2, &InventoryPos.cell))
			return Py_BuildException();
		break;
	default:
		break;
	}

	CPythonNetworkStream& rns=CPythonNetworkStream::Instance();
#if defined(ITEM_CHECKINOUT_UPDATE)
	rns.SendSafeBoxCheckoutPacket(iSafeBoxPos, InventoryPos, SelectPosAuto);
#else
	rns.SendSafeBoxCheckoutPacket(iSafeBoxPos, InventoryPos);
#endif

	return Py_BuildNone();
}

//Find
PyObject* netSendMallCheckoutPacket(PyObject* poSelf, PyObject* poArgs)
{
	...
}

///Change
PyObject* netSendMallCheckoutPacket(PyObject* poSelf, PyObject* poArgs)
{
	int iMallPos;
	TItemPos InventoryPos;
#if defined(ITEM_CHECKINOUT_UPDATE)
	bool SelectPosAuto = false;
#endif

	switch (PyTuple_Size(poArgs))
	{
#if defined(ITEM_CHECKINOUT_UPDATE)
	case 1:
		if (!PyTuple_GetInteger(poArgs, 0, &iMallPos))
			return Py_BuildException();
		SelectPosAuto = true;
		break;
#endif
	case 2:
		if (!PyTuple_GetInteger(poArgs, 0, &iMallPos))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 1, &InventoryPos.cell))
			return Py_BuildException();
		break;
	case 3:
		if (!PyTuple_GetInteger(poArgs, 0, &iMallPos))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 1, &InventoryPos.window_type))
			return Py_BuildException();
		if (!PyTuple_GetInteger(poArgs, 2, &InventoryPos.cell))
			return Py_BuildException();
		break;
	default:
		return Py_BuildException();
	}
	CPythonNetworkStream& rns=CPythonNetworkStream::Instance();

#if defined(ITEM_CHECKINOUT_UPDATE)
	rns.SendMallCheckoutPacket(iMallPos, InventoryPos, SelectPosAuto);
#else
	rns.SendMallCheckoutPacket(iMallPos, InventoryPos);
#endif
	
	return Py_BuildNone();
}