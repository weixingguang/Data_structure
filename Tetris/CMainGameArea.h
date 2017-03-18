/*
*
*/

#ifndef CMAIN_GAME_AREA_H
#define CMAIN_GAME_AREA_H

#define KROW 19

#define KCOL 15

class CMainGameArea
{
	public:
		CMainGameArea(int offsetX = 0, int offsetY = 0);
		void drawGameArea();
		
		int tryAndCutLayer();
		void resetGameArea();
		
		void drawMatrix();
		int LayerOver();
		
		int getOffsetX() const;
		int getOffsetY() const;
		
		int getMatrixStatus(int row, int col) const;
		void setMatrixStatus(int row, int col, int status);
	
	private:
		void cutLayer(int row);
		
	private:
		int m_arrAreaMatrix[KROW][KCOL];
		int m_iOffsetX;
		int m_iOffsetY;
};

#endif
