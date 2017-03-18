#ifndef CBRICK_STYLE1_H
#define CBRICK_STYLE1_H

#include "CBrick.h"
/*
*     **
*     **
*/

class CBrickStyle1: public CBrick
{
	public:
		CBrickStyle1(CMainGameArea *pGameArea);
		
		virtual bool rotate();
	private:
};

#endif
