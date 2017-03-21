#include <iostream>
#include <BTree.h>
using namespace std;

// BTree create
BTreeNode* BTree::createBTree()
{
	BTreeNode* current = NULL;
	char val = 0;

	cout << "Please input the value: " << endl;
	cin >> val;

	if(val == '0')
		return NULL;
	else
	{
		current = new BTreeNode;
		current->data = val;
		current->lChild = createBTree();
		current->rChild = createBTree();

		return current;
	}
}


// In Order
void BTree::inOrder()
{
	inOrder(root);
	cout << endl;
}

void BTree::inOrder(BTreeNode *r)
{
	if(r != NULL)
	{
		inOrder(r->lChild);
		cout << r->data << " ";
		inOrder(r->rChild);
	}
}


// Pre Order
void BTree::preOrder()
{
	preOrder(root);
	cout << endl;
}

void BTree::preOrder(BTreeNode* r)
{
	if(r != NULL)
	{
		cout << r->data << " ";
		preOrder(r->lChild);
		preOrder(r->rChild);
	}
}

// Post Order
void BTree::postOrder()
{
	postOrder(root);
	cout << endl;
}

void BTree::postOrder(BTreeNode* r)
{
	if(r != NULL)
	{
		postOrder(r->lChild);
		postOrder(r->rChild);
		cout << r->data << " ";
	}
}


// BTree Size
int BTree::BTreeSize()
{
	return BTreeSize(root);
}

int BTree::BTreeSize(BTreeNode* r)
{
	if(r == NULL)
		return 0;
	else
		return 1 + BTreeSize(r->lChild) + BTreeSize(r->rChild);
}

// BTree Leaves
int BTree::BTreeLeaves()
{
	return BTreeLeaves(root);
}

int BTree::BTreeLeaves(BTreeNode* r)
{
	if(r == NULL)
		return 0;
	else
	{
		if( (r->lChild == 0) && (r->rChild == 0) )
			return 1;
		else
			return BTreeLeaves(r->lChild) + BTreeLeaves(r->rChild);
	}
}

//BTree Height
int BTree::BTreeHeight()
{
	return BTreeHeight(root);
}

int BTree::BTreeHeight(BTreeNode* r)
{
	if(r == NULL)
		return 0;
	else
	{
		int lHei = BTreeHeight(r->lChild);
		int rHei = BTreeHeight(r->rChild);
		return (lHei >= rHei) ? lHei+1 : rHei+1;
	}
}

void BTree::NotReInOrder()
{
}

void BTree::NotRePreOrder()
{
}

void BTree::NotRePostOrder()
{
}
