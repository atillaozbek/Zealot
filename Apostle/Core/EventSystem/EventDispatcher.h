#pragma once
#include "EventBase.h"

namespace Apostle
{
	class EventDispatcher
	{
	public:
		void dispatchEvent(EventBase&& event);

	private:

	};
}