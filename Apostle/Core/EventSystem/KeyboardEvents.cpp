#include "KeyboardEvents.h"

namespace Apostle
{
	KeyboardEvent::KeyboardEvent(KeyboardEventTypes keyboardEventType, int key) : EventBase(EventTypes::KeyboardEvent), m_KeyboardEventType(keyboardEventType), m_key(key)
	{
	}

	KeyboardEventTypes KeyboardEvent::getKeyboardEventType()
	{
		return m_KeyboardEventType;
	}
	
	int KeyboardEvent::getKey()
	{
		return m_key;
	}
	std::string KeyboardEvent::toString()
	{
		return "Keyboard Event: Key " + std::to_string(m_key) + "is pressed.";
	}
}