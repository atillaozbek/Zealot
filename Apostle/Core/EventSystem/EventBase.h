#pragma once
#include <string>

namespace Apostle
{

	enum class EventTypes : int
	{
		KeyboardEvent,
		MouseEvent,
		SystemEvent,
	};

	class EventBase
	{
	public:

		EventBase() = delete;
		EventBase(EventTypes eventType);
		virtual std::string toString() = 0;
		EventTypes getType();

		bool isHandled();
		void handle();
	private:

		EventTypes m_eventType;
		bool m_isHandled;
	};
}