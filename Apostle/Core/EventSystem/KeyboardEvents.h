#pragma once
#include "EventBase.h"

namespace Apostle
{
	enum class KeyboardEventTypes : int
	{
		Press,
		Hold,
		Release
	};

	class KeyboardEvent : public EventBase
	{
	public:
		KeyboardEvent(KeyboardEventTypes keyboardEventType, int key);
		KeyboardEventTypes getKeyboardEventType();
		int getKey();
		std::string toString() override;
	
	private:
		KeyboardEventTypes m_KeyboardEventType;
		int m_key;
	};
}