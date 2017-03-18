#ifndef CBRICK_STYLE4_H
#define CBRICK_STYLE4_H

#include "CBrick.h"
/*
*     ***
*       *
*/

class CBrickStyle4: public CBrick
{
	public:
		CBrickStyle4(CMainGameArea *pGameArea);
		
		virtual bool rotate();
	private:
};

#endif
