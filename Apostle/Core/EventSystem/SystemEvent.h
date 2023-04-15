#pragma once
#include "EventBase.h"

namespace Apostle
{
	enum class SystemEventTypes
	{
		CloseEvent,
		ResizeEvent
	};

	class SystemEventBase : public EventBase
	{
	public:
		SystemEventBase() = delete;
		SystemEventBase(SystemEventTypes systemEventType);
		SystemEventTypes getSystemEventType();
	private:
		SystemEventTypes m_systemEventType;
	};

	class CloseEvent : public SystemEventBase
	{
	public:
		CloseEvent();
		std::string toString() override;
	private:

	};
	
	class ResizeEvent : public SystemEventBase
	{
	public:
		ResizeEvent(int width, int height);
		int getWidth();
		int getHeight();
		std::string toString() override;
	private:
		int m_width;
		int m_height;
	};
}