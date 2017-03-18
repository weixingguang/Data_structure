#include "CInfoBoard.h"
#include "CCommonFunc.h"
#include <iostream>
using namespace std;

CInfoBoard::CInfoBoard(int offsetX, int offsetY)
{
	this->m_iOffsetX = offsetX;
	this->m_iOffsetY = offsetY;
}

void CInfoBoard::drawInfoBoard(int needLayers, int currentLayers)
{
	CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY);
	cout << "--------------------------";
	CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY+1);
	cout << "     NEED:  " << needLayers << "   ";
	CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY+2);
	cout << "     NOW:   " << currentLayers << "   ";
	CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY+3);
	cout << "--------------------------";
}
