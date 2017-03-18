/*
*
*/

#ifndef CBRICK_UNIT
#define CBRICK_UNIT

class CBrickUnit
{
	public:
		CBrickUnit(char image = '*');
		void drawBrickUnit();
		void eraseBrickUnit();
		
	public:
		int m_iX;
		int m_iY;
		char m_CImmage;
		
	private:
		void drawImg(char image);
};

#endif 
