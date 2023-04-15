#include "DebugLayer.h"
#include <iostream>

namespace Apostle
{
	void Apostle::DebugLayer::processEvent(EventBase& event)
	{
		std::cout << event.toString() << std::endl;
	}

	void DebugLayer::onInsert()
	{
		std::cout << "The Debug Layer has beeen inserted to the layer stack" << std::endl;
	}

	void DebugLayer::onDelete()
	{
		std::cout << "The Debug Layer has beeen removed from the layer stack" << std::endl;
	}

	
}
