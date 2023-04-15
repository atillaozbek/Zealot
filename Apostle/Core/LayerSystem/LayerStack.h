#pragma once
#include <vector>
#include <memory>
#include "LayerBase.h"
#include "EventSystem/EventBase.h"

namespace Apostle
{
	class LayerStack
	{
	public:
		void insertLayer(const std::shared_ptr<LayerBase>& layer);
		void processEvent(EventBase& event) const;
	private:
		std::vector<std::shared_ptr<LayerBase>> m_stack;
	};
}