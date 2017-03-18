#ifndef CBRICK_STYLE2_H
#define CBRICK_STYLE2_H

#include "CBrick.h"
/*
*     ****
*   
*/

class CBrickStyle2: public CBrick
{
	public:
		CBrickStyle2(CMainGameArea *pGameArea);
		
		virtual bool rotate();
	private:
};

#endif
