#include "EventBase.h"

namespace Apostle
{
	EventBase::EventBase(EventTypes eventType) : m_eventType(eventType), m_isHandled(false)
	{
	}

	EventTypes EventBase::getType()
	{
		return m_eventType;
	}

	bool EventBase::isHandled()
	{
		return m_isHandled;
	}

	void EventBase::handle()
	{
		m_isHandled = true;
	}
}