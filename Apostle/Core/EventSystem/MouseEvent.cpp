#include "MouseEvent.h"
namespace Apostle
{
	MouseEventBase::MouseEventBase(MouseEventTypes mouseEventType) : EventBase(EventTypes::MouseEvent), m_mouseEventType(mouseEventType)
	{
	}

	MouseEventTypes MouseEventBase::getMouseEventType()
	{
		return m_mouseEventType;
	}

	MouseButtonEvent::MouseButtonEvent(int button) : MouseEventBase(MouseEventTypes::MouseButtonEvent), m_button(button)
	{
	}

	int MouseButtonEvent::getButton()
	{
		return m_button;
	}

	std::string MouseButtonEvent::toString()
	{
		return "Mouse Event: Button " + std::to_string(m_button) + "is pressed.";
	}

	MouseCursorEvent::MouseCursorEvent(double xpos, double ypos) : MouseEventBase(MouseEventTypes::MouseCursorEvent), m_xpos(xpos), m_ypos(ypos)
	{
	}

	double MouseCursorEvent::getXpos()
	{
		return m_xpos;
	}

	double MouseCursorEvent::getYpos()
	{
		return m_ypos;
	}

	std::string MouseCursorEvent::toString()
	{
		return "Mouse Cursor Event: Cursor moved to " + std::to_string(m_xpos) + ", " + std::to_string(m_ypos);
	}
}