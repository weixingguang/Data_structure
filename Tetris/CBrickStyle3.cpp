#include "CBrickStyle3.h"

CBrickStyle3::CBrickStyle3(CMainGameArea *pGameArea) : CBrick(pGameArea)
{
	this->m_arrBrickUnit[0].m_iX = this->m_arrBrickUnit[1].m_iX - 1;
	this->m_arrBrickUnit[0].m_iY = this->m_arrBrickUnit[1].m_iY;
	
	this->m_arrBrickUnit[2].m_iX = this->m_arrBrickUnit[1].m_iX + 1;
	this->m_arrBrickUnit[2].m_iY = this->m_arrBrickUnit[1].m_iY;
	
	this->m_arrBrickUnit[3].m_iX = this->m_arrBrickUnit[1].m_iX;
	this->m_arrBrickUnit[3].m_iY = this->m_arrBrickUnit[1].m_iY + 1;
}

bool CBrickStyle3::rotate()
{
	this->eraseBrick();
	
	switch(this->m_iStatus)
	{

		case 0:
			this->m_arrBrickUnit[0].m_iX = this->m_arrBrickUnit[1].m_iX;
			this->m_arrBrickUnit[0].m_iY = this->m_arrBrickUnit[1].m_iY - 1;
	
			this->m_arrBrickUnit[2].m_iX = this->m_arrBrickUnit[1].m_iX;
			this->m_arrBrickUnit[2].m_iY = this->m_arrBrickUnit[1].m_iY + 1;
	
			this->m_arrBrickUnit[3].m_iX = this->m_arrBrickUnit[1].m_iX - 1;
			this->m_arrBrickUnit[3].m_iY = this->m_arrBrickUnit[1].m_iY;
			break;
			
		case 1:
			this->m_arrBrickUnit[0].m_iX = this->m_arrBrickUnit[1].m_iX - 1;
			this->m_arrBrickUnit[0].m_iY = this->m_arrBrickUnit[1].m_iY;
	
			this->m_arrBrickUnit[2].m_iX = this->m_arrBrickUnit[1].m_iX + 1;
			this->m_arrBrickUnit[2].m_iY = this->m_arrBrickUnit[1].m_iY;
	
			this->m_arrBrickUnit[3].m_iX = this->m_arrBrickUnit[1].m_iX;
			this->m_arrBrickUnit[3].m_iY = this->m_arrBrickUnit[1].m_iY - 1;
			break;
			
		case 2:
			this->m_arrBrickUnit[0].m_iX = this->m_arrBrickUnit[1].m_iX;
			this->m_arrBrickUnit[0].m_iY = this->m_arrBrickUnit[1].m_iY - 1;
	
			this->m_arrBrickUnit[2].m_iX = this->m_arrBrickUnit[1].m_iX;
			this->m_arrBrickUnit[2].m_iY = this->m_arrBrickUnit[1].m_iY + 1;
	
			this->m_arrBrickUnit[3].m_iX = this->m_arrBrickUnit[1].m_iX + 1;
			this->m_arrBrickUnit[3].m_iY = this->m_arrBrickUnit[1].m_iY;
			break;
			
		case 3:
			this->m_arrBrickUnit[0].m_iX = this->m_arrBrickUnit[1].m_iX - 1;
			this->m_arrBrickUnit[0].m_iY = this->m_arrBrickUnit[1].m_iY;
	
			this->m_arrBrickUnit[2].m_iX = this->m_arrBrickUnit[1].m_iX + 1;
			this->m_arrBrickUnit[2].m_iY = this->m_arrBrickUnit[1].m_iY;
	
			this->m_arrBrickUnit[3].m_iX = this->m_arrBrickUnit[1].m_iX;
			this->m_arrBrickUnit[3].m_iY = this->m_arrBrickUnit[1].m_iY + 1;
			break;
			
	}
	
	this->m_iStatus = (this->m_iStatus + 1)% 4;
	
	this->drawBrick();

	return true;
} 
