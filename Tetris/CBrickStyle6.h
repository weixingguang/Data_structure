#ifndef CBRICK_STYLE6_H
#define CBRICK_STYLE6_H

#include "CBrick.h"
/*
*     **
*      **
*/

class CBrickStyle6: public CBrick
{
	public:
		CBrickStyle6(CMainGameArea *pGameArea);
		
		virtual bool rotate();
	private:
};

#endif
