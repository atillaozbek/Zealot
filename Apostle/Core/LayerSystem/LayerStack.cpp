#include "LayerStack.h"

namespace Apostle {

	void Apostle::LayerStack::insertLayer(const std::shared_ptr<LayerBase>& layer)
	{
		m_stack.push_back(layer);
	}

	void LayerStack::processEvent(EventBase& event) const 
	{
		for (const auto& layer : m_stack)
		{
			layer->processEvent(event);

			if (event.isHandled()) break;
		}
	}
}