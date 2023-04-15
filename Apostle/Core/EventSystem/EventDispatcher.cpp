#include "EventDispatcher.h"
#include <iostream>

namespace Apostle
{
	EventDispatcher::EventDispatcher(const LayerStack& layerStack) : m_layerStack(layerStack)
	{
	}

	void EventDispatcher::dispatchEvent(EventBase&& event)
	{
		m_layerStack.processEvent(event);
	}
}