#include "CTetrisGame.h"
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "CBrickStyle1.h"
#include "CBrickStyle2.h"
#include "CBrickStyle3.h"
#include "CBrickStyle4.h"
#include "CBrickStyle5.h"
#include "CBrickStyle6.h"
#include "CBrickStyle7.h"

#define KLAYERS_PER_LEVEL 1

CTetrisGame::CTetrisGame()
{
	this->m_iLayerCount = 0;
	this->m_iSpeed = 400;
	this->m_iLevel = 1;
	
	this->m_iNextBrickIndex = -1;
	
	this->setGameArea();
}

void CTetrisGame::run()
{
	bool pauseFlag = false;
	char key = 0;
	
	CBrick *pBrick = NULL;
	int brickIndex = 0;
	
	pBrick = createNewBrick(brickIndex);
	pBrick->drawBrick();
	this->m_pNextBrickNoard->drawNextBrickBoard(this->m_iNextBrickIndex);
	
	while( key != 0x1b)
	{
		while( (!_kbhit() ) && !pauseFlag)
		{
			if(! pBrick->moveDown())
			{
				pBrick->setGameAreaMatrix();
				delete pBrick;
				pBrick = NULL;
				
				// 消行  上面砖块下移 
				this->m_iLayerCount += this->m_pGameArea->tryAndCutLayer();
				 
				// 检查消层数目，是否达到游戏要求 
				if(this->m_iLayerCount >= this->m_iLevel * KLAYERS_PER_LEVEL)
				{
					this->m_iLevel++;
					//this->m_iLayerCount = 0;
					
					this->m_pGameArea->resetGameArea();
				}
				// 层高 
				if( this->m_pGameArea->LayerOver() > 0 )
				{
					exit(0);
				}
				
				// 刷新信息面板
				this->m_pInfoBoard->drawInfoBoard(this->m_iLevel * KLAYERS_PER_LEVEL, this->m_iLayerCount);
				
			
				// 产生新的砖块 
				pBrick = createNewBrick(brickIndex);
				pBrick->drawBrick();
				
				// 刷新下一个砖块 
				this->m_pNextBrickNoard->drawNextBrickBoard(this->m_iNextBrickIndex);
			}
			Sleep(this->m_iSpeed);	
		}
		
		key = _getch();
		switch(key)
		{
			case 'w':
				pBrick->rotate();
				break;
			case 's':
				pBrick->moveDown();
				break;
			case 'a':
				pBrick->moveLeft();
				break;
			case 'd':
				pBrick->moveRight();
				break;
			case ' ':
				pauseFlag = !pauseFlag;
				break;
		}
	
	}
}

void CTetrisGame::setGameArea()
{
	this->m_pGameArea = new CMainGameArea(50, 1);
	this->m_pGameArea->drawGameArea();
	
	this->m_pInfoBoard = new CInfoBoard(15, 13);
	this->m_pInfoBoard->drawInfoBoard(this->m_iLevel * KLAYERS_PER_LEVEL, this->m_iLayerCount);
	
	this->m_pNextBrickNoard = new CNextBrickBoard(15, 4);
	this->m_pNextBrickNoard->drawNextBrickBoard(1);
}

CBrick* CTetrisGame::createNewBrick(int &brickIndex)
{
	srand((unsigned)time(NULL));
	
	if(this->m_iNextBrickIndex == -1)
	{
		brickIndex = rand() % 7;
		this->m_iNextBrickIndex = rand() % 7;
	}
	else
	{
		brickIndex = this->m_iNextBrickIndex;
		this->m_iNextBrickIndex = rand() % 7;
	}
	//brickIndex = rand() % 7;
	//brickIndex = rand() % 2;
	
	switch(brickIndex)
	{
		case 0:
			return new CBrickStyle1(this->m_pGameArea);
			break;
		case 1:
			return new CBrickStyle2(this->m_pGameArea);
			break;
		case 2:
			return new CBrickStyle3(this->m_pGameArea);
			break;
		case 3:
			return new CBrickStyle4(this->m_pGameArea);
			break;
		case 4:
			return new CBrickStyle5(this->m_pGameArea);
			break;
		case 5:
			return new CBrickStyle6(this->m_pGameArea);
			break;
		case 6:
			return new CBrickStyle7(this->m_pGameArea);
			break;
	}
}
