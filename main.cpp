#include "Apostle/Core/Windowing/WindowBase.h"
#include "Apostle/Core/GLFWWindow/GLFWWindow.h"
#include "Apostle/Core/LinearAlgebra.h"
#include "EventSystem/EventDispatcher.h"
#include "LayerSystem/LayerStack.h"
#include "LayerSystem/Inputlayer.h"
#include "LayerSystem/DebugLayer.h"
#include "Vector3D.h"
#include <iostream>

#define EVENT_DEBUG


int main()

{
	Apostle::LayerStack layerStack;
	Apostle::Input input;
	
#ifdef EVENT_DEBUG
	layerStack.insertLayer(std::make_shared<Apostle::DebugLayer>());
	layerStack.insertLayer(std::make_shared<Apostle::InputLayer>(input));
#endif

	Apostle::EventDispatcher dispatcher(layerStack);
	Apostle::GLFWWindow window(600, 800, "Test", dispatcher);

	// Test Cases for Linear Algebra.cpp

	//Vector3D v1(1.0f, 2.0f, 3.0f);
	//Vector3D v2(4.0f, 5.0f, 6.0f);

	//Vector3D cross = Apostle::LinearAlgebra::crossProduct(v1, v2);
	//std::cout << "Cross product: (" << cross.x << ", " << cross.y << ", " << cross.z << ")" << std::endl;

	//float mag = Apostle::LinearAlgebra::getMag(v1);
	//std::cout << "Magnitude of v1: " << mag << std::endl;

	//std::cout << "v1 before normalization: (" << v1.x << "," << v1.y << "," << v1.z << ")" << std::endl;
	//Apostle::LinearAlgebra::normalize(v1);
	//std::cout << "v1 after normalization: (" << v1.x << "," << v1.y << "," << v1.z << ")" << std::endl;
	//
	//float mag2 = Apostle::LinearAlgebra::getMag(v1);
	//std::cout << "Magnitude of v1: " << mag2 << std::endl;

	
	window.MakeContextCurrent();

	while (!window.shouldClose())
	{
		window.OnUpdate();
	}

	return 0;
}