#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdlib.h>
#include "CInfoBoard.h"
#include "CNextBrickBoard.h"
#include "CMainGameArea.h"
#include "CBrickStyle7.h"
#include "CTetrisGame.h"
#include <stdio.h>

int main(int argc, char** argv) 
{
//	CInfoBoard *pBoard = new CInfoBoard(20, 10);
//	pBoard->drawInfoBoard(8, 6);
	//CNextBrickBoard *pBoard = new CNextBrickBoard(20, 20);
	//pBoard->drawNextBrickBoard(1);
	
	//CMainGameArea *pGameArea = new CMainGameArea(20, 5);
	//pGameArea->drawGameArea();
	
	CTetrisGame *pGame = new CTetrisGame();
	pGame->run();
	
	getchar();
	return 0;
	
}
