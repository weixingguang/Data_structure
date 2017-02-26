#include "Linklist.h"

#include <iostream>
using namespace std;

Linklist::Linklist (): length(0)
{
	head = new Node(0);
}

void Linklist::Insert(int index, int value)
{
	Node *node = head;
	for(int i = 0; i < index-1; i++)
	{
		node = node->next;
	}

	Node *new_node = new Node(value);
	new_node->next = node->next;
	node->next = new_node;

}

void Linklist::Remove(int value)
{
	Node *node = head;
	Node *pnode;
	while(node->next)
	{
		if(node->next->data == value)
		{
			pnode = node->next;
			node->next = node->next->next;
			break;
		}

		node = node->next;
	}

	delete pnode;
}

int Linklist::Length()
{
	return length;
}


void Linklist::Reverse()
{
	// TODO
	Node *node = head;
	Node *pnode;

	while(node->next)
	{
		if(node->next->next)
			pnode = node->next->next;
		else
			pnode = NULL;

		node->next->next = node;

		node = pnode;
	}
}


void Linklist::Print()
{
	Node *index = head;

	cout << "The value of this Linklist is:" << endl;

	while(index->next)
	{
		cout << index->next->data << " ";
		index = index->next;
	}
	cout << endl;

}

Linklist::~Linklist()
{
	// FIXME TODO
	cout << "Linklist: destructor" << endl;

	Node *node = head;

	Node *pnode;

	while(node)
	{
		pnode = node;
		node = node->next;
		delete pnode;
	}

}
