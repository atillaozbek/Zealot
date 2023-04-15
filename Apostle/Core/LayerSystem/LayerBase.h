#pragma once
#include "EventSystem/EventBase.h"

namespace Apostle
{
	class LayerBase
	{
	public:
		virtual void processEvent(EventBase& event) = 0;
		virtual void onInsert() = 0;
		virtual void onDelete() = 0;
	private:
	};
}