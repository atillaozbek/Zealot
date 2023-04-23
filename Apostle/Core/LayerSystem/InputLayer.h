#pragma once
#include "LayerBase.h"
#include "Input.h"
#include "EventSystem/MouseEvent.h"
#include "EventSystem/KeyboardEvents.h"

namespace Apostle
{
	class InputLayer : public LayerBase
	{
	public:
		InputLayer(Input& input);
		

		void processEvent(EventBase& event) override;
		void onInsert() override;
		void onDelete() override;

	private:
		Input& m_input;

		void dispatchEvent(EventBase& event);
	};
}