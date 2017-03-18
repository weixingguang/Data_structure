#ifndef CBRICK_STYLE5_H
#define CBRICK_STYLE5_H

#include "CBrick.h"
/*
*     ***
*     *
*/

class CBrickStyle5: public CBrick
{
	public:
		CBrickStyle5(CMainGameArea *pGameArea);
		
		virtual bool rotate();
	private:
};

#endif
