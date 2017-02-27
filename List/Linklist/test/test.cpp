#include "Linklist.h"

#include <iostream>
using namespace std;

int main()
{
	Linklist *list = new Linklist;

	int node_num = 20;
	for(int i = 1; i <= node_num; i++)
		list->Insert(i, i);

	list->Print();

	//for(int i = 1; i <= node_num-10; i++)
	//list->Remove(7);
	//list->Remove(20);
	list->Reverse();

	list->Print();

	delete list;
	list = NULL;

	return 0;
}
