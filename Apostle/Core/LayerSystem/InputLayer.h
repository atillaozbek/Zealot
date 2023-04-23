#pragma once
#include "LayerBase.h"

namespace Apostle
{
	class InputLayer : public LayerBase
	{
	public:
		InputLayer();

		void processEvent(EventBase& event) override;
		void onInsert() override;
		void onDelete() override;
	private:

	};
}