#include "InputLayer.h"

namespace Apostle
{
	void InputLayer::processEvent(EventBase& event)
	{
		EventTypes type = event.getType();

		//Checking if event is a mouse or keyboar event
		if (type != EventTypes::KeyboardEvent && type != EventTypes::MouseEvent) return;
		

	}
}