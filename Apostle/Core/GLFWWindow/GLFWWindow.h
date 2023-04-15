#pragma once
#include "Apostle/Core/Windowing/WindowBase.h"
#include "GLFW/glfw3.h"
#include "Apostle/Core/EventSystem/EventDispatcher.h"


namespace Apostle
{
	class GLFWWindow : public WindowBase
	{
	public:
		GLFWWindow(int width, int height, const std::string& windowName, EventDispatcher& dispcather);
		~GLFWWindow();
		void OnUpdate() override;
		int shouldClose() override;
		void SetToClose() override;
		bool IsKeyPressed(int key) override;
		const float GetTime() override;
		void UnlockCursor() override;
		void LockCursor() override;
		void MakeContextCurrent() override;
	private:
		//GLFW Specific callbacks
		static void keyboardCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
		static void cursorPositionCallback(GLFWwindow* window, double xpos, double ypos);
		static void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
		static void mouseScrollCallback(GLFWwindow* window, double xOffset, double yOffset);
		static void windowCloseCallback(GLFWwindow* window);
		static void windowSizeCallback(GLFWwindow* window, int width, int height);

		GLFWwindow* m_window;
		EventDispatcher& m_dispatcher;
	};
}