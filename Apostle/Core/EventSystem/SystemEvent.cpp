#include "SystemEvent.h"
namespace Apostle
{
	SystemEventBase::SystemEventBase(SystemEventTypes systemEventType) : EventBase(EventTypes::SystemEvent), m_systemEventType(systemEventType)
	{
	}

	SystemEventTypes SystemEventBase::getSystemEventType()
	{
		return m_systemEventType;
	}

	CloseEvent::CloseEvent() : SystemEventBase(SystemEventTypes::CloseEvent)
	{
	}

	std::string CloseEvent::toString()
	{
		return "Close Event";
	}

	ResizeEvent::ResizeEvent(int width, int height) : SystemEventBase(SystemEventTypes::ResizeEvent), m_width(width), m_height(height)
	{
	}
	int ResizeEvent::getWidth()
	{
		return m_width;
	}
	int ResizeEvent::getHeight()
	{
		return m_height;
	}
	std::string ResizeEvent::toString()
	{
		return "Resize Event: Windows resized to " + std::to_string(m_width) + ", " + std::to_string(m_height);
	}
}