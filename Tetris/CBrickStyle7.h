#ifndef CBRICK_STYLE7_H
#define CBRICK_STYLE7_H

#include "CBrick.h"
/*
*     **
*    **
*/

class CBrickStyle7: public CBrick
{
	public:
		CBrickStyle7(CMainGameArea *pGameArea);
		
		virtual bool rotate();
	private:
};

#endif
