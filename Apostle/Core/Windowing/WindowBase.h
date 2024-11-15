#pragma once
#include <string>
#include <InputDefs.h>
//Abstract window class
//Every concrete window class needs to implement this 

namespace Apostle
{
	class WindowBase
	{
	public:
		WindowBase(int width, int height, const std::string& windowName);
		virtual ~WindowBase() = default;
		virtual int shouldClose() = 0;
		virtual void SetToClose() = 0;
		virtual const float GetTime() = 0;
		virtual void UnlockCursor() = 0;
		virtual void LockCursor() = 0;
		virtual void MakeContextCurrent() = 0;
		virtual void OnUpdate() = 0;
		virtual bool IsKeyPressed(KEYCODES key) = 0;
	protected:
		unsigned int m_windowWidth;
		unsigned int m_windowHeight;
		std::string m_windowName;
	};
}