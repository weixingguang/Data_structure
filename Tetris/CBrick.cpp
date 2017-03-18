#include "CBrick.h"


CBrick::CBrick(CMainGameArea *pGameArea)
{
	this->m_pGameArea = pGameArea;
	this->m_iStatus = 0;
	
	this->m_arrBrickUnit[1].m_iX = this->m_pGameArea->getOffsetX() + KCOL/2 + 1;
	this->m_arrBrickUnit[1].m_iY = this->m_pGameArea->getOffsetY() + 1;

}

CBrick::~CBrick()
{
}

void CBrick::eraseBrick()
{
	for(int i = 0; i < KBRICK_UNIT_COUNT; i++)
	{
		this->m_arrBrickUnit[i].eraseBrickUnit();
	}
}

void CBrick::drawBrick()
{
	for(int i = 0; i < KBRICK_UNIT_COUNT; i++)
	{
		this->m_arrBrickUnit[i].drawBrickUnit();
	}
}

bool CBrick::moveLeft()
{
	for(int k = 0; k < KBRICK_UNIT_COUNT; k++)
	{
		if( (this->m_arrBrickUnit[k].m_iX - 1) <= this->m_pGameArea->getOffsetX() )
		{
			return false;
		}
		
		int x = this->m_arrBrickUnit[k].m_iX - 1 - this->m_pGameArea->getOffsetX() - 1;
		int y = this->m_arrBrickUnit[k].m_iY - this->m_pGameArea->getOffsetY();
		if( this->m_pGameArea->getMatrixStatus(y, x) == 1 )
		{
			return false;
		}
	}
	
	this->eraseBrick();
	for(int i = 0; i < KBRICK_UNIT_COUNT; i++)
	{
		this->m_arrBrickUnit[i].m_iX--;
	}
	this->drawBrick();
	
	return true;
}

bool CBrick::moveRight()
{
	for(int k = 0; k < KBRICK_UNIT_COUNT; k++)
	{
		if( (this->m_arrBrickUnit[k].m_iX + 1) > (this->m_pGameArea->getOffsetX() + KCOL) )
		{
			return false;
		}
		
		int x = this->m_arrBrickUnit[k].m_iX - 1 - this->m_pGameArea->getOffsetX() + 1;
		int y = this->m_arrBrickUnit[k].m_iY - this->m_pGameArea->getOffsetY();
		if( this->m_pGameArea->getMatrixStatus(y, x) == 1 )
		{
			return false;
		}
	}
	
	this->eraseBrick();
	for(int i = 0; i < KBRICK_UNIT_COUNT; i++)
	{
		this->m_arrBrickUnit[i].m_iX++;
	}
	this->drawBrick();
	
	return true;
}

bool CBrick::moveDown()
{
	for(int k = 0; k < KBRICK_UNIT_COUNT; k++)
	{
		if( (this->m_arrBrickUnit[k].m_iY + 1) >= (this->m_pGameArea->getOffsetY() + KROW) )
		{
			return false;
		}
		
		int x = this->m_arrBrickUnit[k].m_iX - 1 - this->m_pGameArea->getOffsetX();
		int y = this->m_arrBrickUnit[k].m_iY - this->m_pGameArea->getOffsetY() + 1;
		if( this->m_pGameArea->getMatrixStatus(y, x) == 1 )
		{
			return false;
		}
	}
	
	this->eraseBrick();
	
	for(int i = 0; i < KBRICK_UNIT_COUNT; i++)
	{
		this->m_arrBrickUnit[i].m_iY++;
	}
	this->drawBrick();
	
	return true;
}

void CBrick::setGameAreaMatrix()
{
	for(int i = 0; i < KBRICK_UNIT_COUNT; i++)
	{
		int x = this->m_arrBrickUnit[i].m_iX - 1 - this->m_pGameArea->getOffsetX();
		int y = this->m_arrBrickUnit[i].m_iY - this->m_pGameArea->getOffsetY();
		this->m_pGameArea->setMatrixStatus(y, x, 1); 
	}
}
