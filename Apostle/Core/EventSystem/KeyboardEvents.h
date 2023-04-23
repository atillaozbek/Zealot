#pragma once
#include "EventBase.h"
#include "InputDefs.h"

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
		KeyboardEvent(KeyboardEventTypes keyboardEventType, KEYCODES key);
		KeyboardEventTypes getKeyboardEventType();
		KEYCODES getKey();
		std::string toString() override;
	
	private:
		KeyboardEventTypes m_KeyboardEventType;
		KEYCODES m_key;
	};
}