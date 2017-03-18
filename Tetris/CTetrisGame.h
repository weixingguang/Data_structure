/*
*
*/

#ifndef CTETRIS_GAME_H
#define CTETRIS_GAME_H
#include "CMainGameArea.h"
#include "CInfoBoard.h"
#include "CNextBrickBoard.h"
#include "CBrick.h"

class CTetrisGame
{
	public:
		CTetrisGame();
		void run();
		
	private:
		void setGameArea();
		CBrick* createNewBrick(int &brickIndex);
		
	private:
		CMainGameArea *m_pGameArea;
		CInfoBoard *m_pInfoBoard;
		CNextBrickBoard *m_pNextBrickNoard;
		int m_iSpeed;
		int m_iLevel;
		int m_iLayerCount;
		int m_iNextBrickIndex;
};

#endif
