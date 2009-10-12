/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2008 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_QUESTGIVER_H
#define ANH_ZONESERVER_QUESTGIVER_H

#include "NPCObject.h"

//=============================================================================

class QuestGiver : public NPCObject
{
	friend class PersistentNpcFactory;
	friend class NonPersistentNpcFactory;

	public:

		QuestGiver();
		virtual ~QuestGiver();

		void	filterConversationOptions(ConversationPage* page,std::vector<ConversationOption*>* filteredOptions,PlayerObject* player);
		uint32	handleConversationEvent(ActiveConversation* av,ConversationPage* page,ConversationOption* option,PlayerObject* player);
		bool	preProcessfilterConversation(ActiveConversation* av, Conversation* conversation, PlayerObject* player);
		void	postProcessfilterConversation(ActiveConversation* av, ConversationPage* page, PlayerObject* player);

		void	prepareConversation(PlayerObject* player);
		virtual void	stopConversation(PlayerObject* player);
		void	restorePosition(PlayerObject* player);
	private:

};

//=============================================================================

#endif

