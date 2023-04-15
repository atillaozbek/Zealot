#include "Apostle/Core/Windowing/WindowBase.h"
#include "Apostle/Core/GLFWWindow/GLFWWindow.h"
#include "EventSystem/EventDispatcher.h"
#include "LayerSystem/LayerStack.h"
#include "LayerSystem/DebugLayer.h"

#define EVENT_DEBUG


int main()

{
	Apostle::LayerStack layerStack;

#ifdef EVENT_DEBUG
	layerStack.insertLayer(std::make_shared<Apostle::DebugLayer>());
#endif

	Apostle::EventDispatcher dispatcher(layerStack);
	Apostle::GLFWWindow window(600, 800, "Test", dispatcher);


	window.MakeContextCurrent();

	while (!window.shouldClose())
	{
		window.OnUpdate();
	}


	return 0;
}