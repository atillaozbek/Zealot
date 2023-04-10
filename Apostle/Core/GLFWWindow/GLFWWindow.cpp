#include "Apostle/Core/Windowing/WindowBase.h"
#include "GLFWWindow.h"
#include <iostream>
#include "Apostle/Core/EventSystem/KeyboardEvents.h"
#include "Apostle/Core/EventSystem/MouseEvent.h"
#include "Apostle/Core/EventSystem/SystemEvent.h"

namespace Apostle
{
	GLFWWindow::GLFWWindow(int width, int height, const std::string& windowName) :
		WindowBase(width, height, windowName)
	{
		/* Initialize the library */
		if (!glfwInit()) {
			throw std::runtime_error("Error: Could not initialize the window");
		}

		//Setting the window hints
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

		/* Createing the instance of GLFW*/
		m_window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);

		if (!m_window)
		{
			glfwTerminate();
			throw std::runtime_error("Error: Could not initialize the window properly");
		}

		glfwSetWindowUserPointer(m_window, this);

		//Setting the GLFW specific event callback functions
		glfwSetKeyCallback(m_window, keyboardCallback);
		glfwSetCursorPosCallback(m_window, cursorPositionCallback);
		glfwSetMouseButtonCallback(m_window, mouseButtonCallback);
		glfwSetScrollCallback(m_window, mouseScrollCallback);
		glfwSetWindowCloseCallback(m_window, windowCloseCallback);
		glfwSetWindowSizeCallback(m_window, windowSizeCallback);

	}

	GLFWWindow::~GLFWWindow()
	{
		glfwDestroyWindow(m_window);
	}

	void GLFWWindow::keyboardCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		GLFWWindow* windowGLFW = (GLFWWindow*)glfwGetWindowUserPointer(window);

		windowGLFW->dispatcher.dispatchEvent(KeyboardEvent(KeyboardEventTypes::Press, key));
		
	}

	void GLFWWindow::cursorPositionCallback(GLFWwindow* window, double xpos, double ypos)
	{
		GLFWWindow* windowGLFW = (GLFWWindow*)glfwGetWindowUserPointer(window);
		//GLFWWindow->m_eventSystem->SignalEvent(MouseCursorMoveEvent(xpos, ypos));
	}

	void GLFWWindow::mouseButtonCallback(GLFWwindow* window, int button, int action, int mods)
	{
		//GLFWWindow* windowGLFW = (GLFWWindow*)glfwGetWindowUserPointer(window);

		

	}

	void GLFWWindow::mouseScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
	{
		GLFWWindow* windowGLFW = (GLFWWindow*)glfwGetWindowUserPointer(window);
	}

	void GLFWWindow::windowCloseCallback(GLFWwindow* window)
	{
		//GLFWWindow* windowGLFW = (GLFWWindow*)glfwGetWindowUserPointer(window);

		
	}

	void GLFWWindow::windowSizeCallback(GLFWwindow* window, int width, int height)
	{
		GLFWWindow* windowGLFW = (GLFWWindow*)glfwGetWindowUserPointer(window);

		//Resizing the window

		windowGLFW->m_windowWidth = width;
		windowGLFW->m_windowHeight = height;
	}

	void GLFWWindow::OnUpdate()
	{
		glfwSwapBuffers(m_window);
		glfwPollEvents();
	}


	int GLFWWindow::shouldClose()
	{
		return glfwWindowShouldClose(m_window);
	}

	void GLFWWindow::SetToClose()
	{
		glfwSetWindowShouldClose(m_window, 1);
	}

	bool GLFWWindow::IsKeyPressed(int key)
	{
		return glfwGetKey(m_window, static_cast<int>(key)) == GLFW_PRESS;
	}

	const float GLFWWindow::GetTime()
	{
		return static_cast<float>(glfwGetTime());
	}

	void GLFWWindow::UnlockCursor()
	{
		glfwSetInputMode(m_window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
	}

	void GLFWWindow::LockCursor()
	{
		glfwSetInputMode(m_window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	}

	void GLFWWindow::MakeContextCurrent()
	{
		glfwMakeContextCurrent(m_window);
	}
}