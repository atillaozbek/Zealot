#include "Input.h"

namespace Apostle {

	Input::Input() 
	{
		this->m_currentKey = KEYCODES::APOSTLE_KEY_NONE;
		this->m_previousKey = KEYCODES::APOSTLE_KEY_NONE;
		this->m_currentButton = MOUSEBUTTONCODES::APOSTLE_MOUSE_BUTTON_NONE;
		this->m_previousButton = MOUSEBUTTONCODES::APOSTLE_MOUSE_BUTTON_NONE;

		this->m_currentCursorPosX = 0;
		this->m_currentCursorPosY = 0;

		this->m_previousCursorPosX = 0;
		this->m_previousCursorPosY = 0;

		this->m_offSetCursorX = 0;
		this->m_offSetCursorY = 0;
	}

	KEYCODES Input::getKey()
	{
		return m_currentKey;
	}

	MOUSEBUTTONCODES Input::getButton()
	{
		return m_currentButton;
	}

	void Input::updateKey(KEYCODES key)
	{
		m_currentKey = key;
	}

	void Input::updateButton(MOUSEBUTTONCODES button)
	{
		m_currentButton = button;
	}

	void Input::updateCursorPositions(double posX, double posY)
	{
		m_currentCursorPosX = posX;
		m_currentCursorPosY = posY;
	}

	double Input::getCursorPosX()
	{
		return m_currentCursorPosX;
	}

	double Input::getCursorPosY()
	{
		return m_currentCursorPosY;
	}

	double Input::getCursorOffsetX()
	{
		return m_offSetCursorX;
	}

	double Input::getCursorOffsetY()
	{
		return m_offSetCursorY;
	}

	void Input::onUpdate()
	{
		m_previousKey = m_currentKey;
		m_currentKey = KEYCODES::APOSTLE_KEY_NONE;

		m_previousButton = m_currentButton;
		m_currentButton = MOUSEBUTTONCODES::APOSTLE_MOUSE_BUTTON_NONE;

		m_offSetCursorX = m_currentCursorPosX - m_previousCursorPosX;
		m_offSetCursorX = m_currentCursorPosY - m_previousCursorPosY;
	}
}