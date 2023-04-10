#include "Apostle/Core/Windowing/WindowBase.h"
#include "Apostle/Core/GLFWWindow/GLFWWindow.h"


int main()

{
	Apostle::GLFWWindow window(600, 800, "Test");
	window.MakeContextCurrent();

	while (!window.shouldClose())
	{
		window.OnUpdate();
	}

	return 0;
}