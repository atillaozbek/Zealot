#include "EventBase.h"

namespace Apostle
{
	EventBase::EventBase(EventTypes eventType) : m_eventType(eventType)
	{
	}

	EventTypes EventBase::getType()
	{
		return m_eventType;
	}
}