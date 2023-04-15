#pragma once
#include "EventBase.h"
#include "LayerSystem/LayerStack.h"

namespace Apostle
{
	class EventDispatcher
	{
	public:
		EventDispatcher(const LayerStack& layerStack);
		void dispatchEvent(EventBase&& event);

	private:
		const LayerStack& m_layerStack;
	};
}