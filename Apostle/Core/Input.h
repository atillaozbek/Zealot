#pragma once
#include "InputDefs.h"

namespace Apostle {

	class Input {
	
	public: 
		Input();
		KEYCODES getKey();
		MOUSEBUTTONCODES getButton();

		void updateKey(KEYCODES key);
		void updateButton(MOUSEBUTTONCODES button);
		void updateCursorPositions(double posX, double posY);
		double getCursorPosX();
		double getCursorPosY();
		double getCursorOffsetX();
		double getCursorOffsetY();
		void onUpdate();

	private:

		KEYCODES m_currentKey;
		KEYCODES m_previousKey;
		MOUSEBUTTONCODES m_currentButton;
		MOUSEBUTTONCODES m_previousButton;

		double m_currentCursorPosX;
		double m_currentCursorPosY;
		double m_previousCursorPosX;
		double m_previousCursorPosY;
		double m_offSetCursorX;
		double m_offSetCursorY;

	};
}