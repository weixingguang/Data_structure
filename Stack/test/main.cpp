#include "Stack.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	Stack *pstack = new Stack();

	for(int i = 0; i < MAXSIZE; i++)
	{
		pstack->push(i);
		cout << pstack->getLength() << endl;
	}

	int  value = 0;
	pstack->pop(value);
	pstack->pop(value);

	while(pstack->getLength() > 0)
	{
		int tmp;
		//pstack->getTop(tmp);
		//cout << pstack->getLength() << endl;
		pstack->pop(tmp);
		cout << tmp << " ";
	}

	delete pstack;
	pstack = NULL;
}
