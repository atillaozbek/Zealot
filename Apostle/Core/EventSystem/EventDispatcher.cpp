#include "EventDispatcher.h"
#include <iostream>

namespace Apostle
{

	void EventDispatcher::dispatchEvent(EventBase&& event)
	{
		std::cout << event.toString() << std::endl;
	}
}