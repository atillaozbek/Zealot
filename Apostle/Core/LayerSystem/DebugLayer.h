#pragma once
#include "LayerBase.h"

namespace Apostle
{
	class DebugLayer : public LayerBase
	{
	public:
		void processEvent(EventBase& event) override;
		void onInsert() override;
		void onDelete() override;
	private:
	};
}