/*
*
*/

#ifndef CBRICK_H
#define CBRICK_H

#include "CBrickUnit.h"
#include "CMainGameArea.h"

#define KBRICK_UNIT_COUNT 4

class CBrick
{
	public:
		CBrick(CMainGameArea *pGameArea);
		virtual ~CBrick();
		virtual bool rotate() = 0;
		void eraseBrick();
		void drawBrick();
		bool moveLeft();
		bool moveRight();
		bool moveDown();
		
		void setGameAreaMatrix();
		 
	protected:
		CBrickUnit m_arrBrickUnit[KBRICK_UNIT_COUNT];
		int m_iStatus;
		CMainGameArea *m_pGameArea;
		
	private:
};

#endif
