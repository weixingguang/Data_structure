#include "CMainGameArea.h"
#include "CCommonFunc.h"
#include <iostream>
using namespace std;

CMainGameArea::CMainGameArea(int offsetX, int offsetY)
{
	this->m_iOffsetX = offsetX;
	this->m_iOffsetY = offsetY;
}

/*
*/
void CMainGameArea::drawGameArea()
{
	for(int i = 0; i < KROW; i++)
	{
		CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY + i);
		cout << "|";
		for(int j = 0; j < KCOL; j++)
		{
			cout << " ";
		}
		cout << "|";
	}
	CCommonFunc::gotoxy(this->m_iOffsetX, this->m_iOffsetY + KROW);
	for(int k = 0; k < KCOL+2; k++)
	{
		cout <<"-";
	}
}
		
int CMainGameArea::tryAndCutLayer()
{
	int cutLayers = 0;
	
	for(int i = 0; i < KROW; i++)
	{
		int unicount = 0;
		for(int j = 0; j < KCOL; j++)
		{
			unicount += this->m_arrAreaMatrix[i][j];
		}
		
		if(unicount == KCOL)
		{
			cutLayer(i);
			
			cutLayers++;
			
			drawMatrix();
		}
	}
	
	return cutLayers;
}

int CMainGameArea::LayerOver()
{
	int unicount = 0;
	for(int i = 0; i < KCOL; i++)
	{
		unicount += this->m_arrAreaMatrix[1][i];
	}
	return unicount;
}

void CMainGameArea::resetGameArea()
{
	for(int i = 0; i < KROW; i++)
	{
		for(int j = 0; j < KCOL; j++)
		{
			m_arrAreaMatrix[i][j] = 0;
		}
	}
	
	this->drawMatrix();
}
		
int CMainGameArea:: getOffsetX() const
{
	return this->m_iOffsetX;
}
int CMainGameArea::getOffsetY() const
{
	return this->m_iOffsetY;
}
		
int CMainGameArea::getMatrixStatus(int row, int col) const
{
	return this->m_arrAreaMatrix[row][col];
}
void CMainGameArea::setMatrixStatus(int row, int col, int status)
{
	this->m_arrAreaMatrix[row][col] = status;
}

void CMainGameArea::cutLayer(int row)
{
	int i = row;
	while(i > 0)
	{
		for(int k = 0; k< KCOL; k++)
		{
			this->m_arrAreaMatrix[i][k] = this->m_arrAreaMatrix[i-1][k];
		}
		i--;
	}
}

void CMainGameArea::drawMatrix()
{
	for(int i = 0; i < KROW; i++)
	{
		CCommonFunc::gotoxy(this->m_iOffsetX + 1, this->m_iOffsetY + i);
		for(int j = 0; j < KCOL; j++)
		{
			if(this->m_arrAreaMatrix[i][j] == 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
	}
}
