#ifndef CBRICK_STYLE3_H
#define CBRICK_STYLE3_H

#include "CBrick.h"
/*
*     ***
*      *
*/

class CBrickStyle3: public CBrick
{
	public:
		CBrickStyle3(CMainGameArea *pGameArea);
		
		virtual bool rotate();
	private:
};

#endif
