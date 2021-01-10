#Find in class SafeboxWindow(ui.ScriptWindow):
	def UseItemSlot(self, slotIndex):
		mouseModule.mouseController.DeattachObject()
		
#Add
		if app.ITEM_CHECKINOUT_UPDATE:
			slotIndex = self.__LocalPosToGlobalPos(slotIndex)
			net.SendSafeboxCheckoutPacket(slotIndex)
			
#Find in class MallWindow(ui.ScriptWindow):
	def UseItemSlot(self, slotIndex):
		mouseModule.mouseController.DeattachObject()
		
#Add
		if app.ITEM_CHECKINOUT_UPDATE:
			net.SendMallCheckoutPacket(slotIndex)