#include "CNextBrickBoard.h"
#include "CCommonFunc.h"
#include <iostream>
using namespace std;

CNextBrickBoard::CNextBrickBoard(int offsetX, int offsetY)
{
	this->m_iOffsetX = offsetX;
	this->m_iOffsetY = offsetY;
}

void CNextBrickBoard::earseBoard()
{
	for(int i = 0; i < 4; i++)
	{
		CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY + i);
		for(int j = 0; j < 22; j++)
		{
			cout << " ";
		}
	}
}

void CNextBrickBoard::drawNextBrickBoard(int brickIndex)
{
	this->earseBoard();
	CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY);
	cout << "-------------------------";
	switch(brickIndex)
	{
		case 0:
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 1);
			cout << "**";
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 2);
			cout << "**";
			break;
		case 1:
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 1);
			cout << "****";
			break;
		case 2:
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 1);
			cout << "***";
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 2);
			cout << " * ";
			break;
		case 3:
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 1);
			cout << "***";
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 2);
			cout << "  *";	
			break;
		case 4:
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 1);
			cout << "***";
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 2);
			cout << "*  ";
			break;
		case 5:
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 1);
			cout << "**";
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 2);
			cout << " **";
			break;
		case 6:
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 1);
			cout << " **";
			CCommonFunc::gotoxy(this->m_iOffsetX + 8, this->m_iOffsetY + 2);
			cout << "**";
			break;
	}
	CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY + 3);
	cout << "-------------------------";
}
