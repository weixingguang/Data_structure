#include "CBrickStyle1.h"

CBrickStyle1::CBrickStyle1(CMainGameArea *pGameArea) : CBrick(pGameArea)
{
	this->m_arrBrickUnit[0].m_iX = this->m_arrBrickUnit[1].m_iX - 1;
	this->m_arrBrickUnit[0].m_iY = this->m_arrBrickUnit[1].m_iY;
	
	this->m_arrBrickUnit[2].m_iX = this->m_arrBrickUnit[1].m_iX - 1;
	this->m_arrBrickUnit[2].m_iY = this->m_arrBrickUnit[1].m_iY + 1;
	
	this->m_arrBrickUnit[3].m_iX = this->m_arrBrickUnit[1].m_iX;
	this->m_arrBrickUnit[3].m_iY = this->m_arrBrickUnit[1].m_iY + 1;
}

bool CBrickStyle1::rotate()
{
	return true;
} 
