#include "KeyboardEvents.h"

namespace Apostle
{
	KeyboardEvent::KeyboardEvent(KeyboardEventTypes keyboardEventType, KEYCODES key) : EventBase(EventTypes::KeyboardEvent), m_KeyboardEventType(keyboardEventType), m_key(key)
	{
	}

	KeyboardEventTypes KeyboardEvent::getKeyboardEventType()
	{
		return m_KeyboardEventType;
	}
	
	KEYCODES KeyboardEvent::getKey()
	{
		return m_key;
	}
	std::string KeyboardEvent::toString()
	{
		return "Keyboard Event: Key " + std::to_string(static_cast<int>(m_key)) + "is pressed.";
	}
}