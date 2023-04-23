#include "InputLayer.h"

namespace Apostle
{
	InputLayer::InputLayer(Input& input) : m_input(input)
	{

	}

	void InputLayer::processEvent(EventBase& event)
	{
		EventTypes type = event.getType();

		//Checking if event is a mouse or keyboar event
		if (type != EventTypes::KeyboardEvent && type != EventTypes::MouseEvent) return;

		dispatchEvent(event);

		event.handle();

	}

	void InputLayer::dispatchEvent(EventBase& event)
	{
		EventBase* eventptr = &event;

		switch (eventptr->getType())
		{
		case EventTypes::KeyboardEvent:
			m_input.updateKey(reinterpret_cast<KeyboardEvent*>(eventptr)->getKey());
			break;
		case EventTypes::MouseEvent:
			switch (reinterpret_cast<MouseEventBase*>(eventptr)->getMouseEventType())
			{
			case MouseEventTypes::MouseButtonEvent:
				m_input.updateButton(reinterpret_cast<MouseButtonEvent*>(eventptr)->getButton());
				break;
			case MouseEventTypes::MouseCursorEvent:
				m_input.updateCursorPositions(reinterpret_cast<MouseCursorEvent*>(eventptr)->getXpos(), reinterpret_cast<MouseCursorEvent*>(eventptr)->getYpos());
				break;
			}
			break;
		}
	}
}