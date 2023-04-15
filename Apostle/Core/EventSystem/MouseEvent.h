#pragma once
#include "EventBase.h"

namespace Apostle
{
	enum class MouseEventTypes : int
	{
		MouseButtonEvent,
		MouseCursorEvent
	};

	class MouseEventBase : public EventBase
	{
	public:
		MouseEventBase() = delete;
		MouseEventBase(MouseEventTypes mouseEventType);
		MouseEventTypes getMouseEventType();


	private:
		MouseEventTypes m_mouseEventType;
	};

	class MouseButtonEvent : public MouseEventBase
	{
	public:
		MouseButtonEvent(int button);
		int getButton();
		std::string toString() override;
	private:
		int m_button;
	};

	class MouseCursorEvent : public MouseEventBase
	{
	public:
		MouseCursorEvent(double xpos, double ypos);
		double getXpos();
		double getYpos();
		std::string toString() override;

	private:
		double m_xpos;
		double m_ypos;
	};
}