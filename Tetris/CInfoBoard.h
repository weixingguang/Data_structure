/*
* Show the main board
*/
 
#ifndef CINFO_BOARD_H
#define CINFO_BOARD_H 

class CInfoBoard
{
	public:
		CInfoBoard(int offsetX, int offsetY);
		void drawInfoBoard(int needLayers, int cuurrentLayers);
		//void drawInfoBoard(int needLayers, int cuurrentLayers, int level);
		
		
	private:
		int m_iOffsetX;
		int m_iOffsetY;	
}; 

#endif
