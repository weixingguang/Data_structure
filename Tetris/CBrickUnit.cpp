#include "CBrickUnit.h"
#include "CCommonFunc.h"
#include <iostream>
using namespace std;

CBrickUnit::CBrickUnit(char image)
{
	this->m_CImmage = image;
	this->m_iX = 0;
	this->m_iY = 0;
}

void CBrickUnit::drawImg(char image)
{
	CCommonFunc::gotoxy(this->m_iX, this->m_iY);
	cout << image;
}

void CBrickUnit::drawBrickUnit()
{
	this->drawImg(this->m_CImmage);
}

void CBrickUnit::eraseBrickUnit()
{
	this->drawImg(' ');
} 
