/*
* Show the next brick board
*/

#ifndef CNEXT_BRICK_BOARD_H
#define CNEXT_BRICK_BOARD_H

class CNextBrickBoard
{
	public:
		CNextBrickBoard(int offsetX, int offsetY);
		void drawNextBrickBoard(int brickIndex);
	
	private:
		void earseBoard();
		
	private:
		int m_iOffsetX;
		int m_iOffsetY;
};

#endif
