#include "BTree.h"

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	BTree *pbtree = new BTree;

	pbtree->setRoot(pbtree->createBTree());

	pbtree->inOrder();
	pbtree->preOrder();
	pbtree->postOrder();

	delete pbtree;
	pbtree = NULL;

	return 0;
}
