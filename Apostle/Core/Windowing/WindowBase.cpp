#include "WindowBase.h"

namespace Apostle
{
	WindowBase::WindowBase(int width, int height, const std::string& windowName)
	{
		m_windowHeight = height;
		m_windowWidth = width;
		m_windowName = windowName;

	}
}