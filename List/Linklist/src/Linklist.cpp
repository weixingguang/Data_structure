#include "Linklist.h"

#include <iostream>
using namespace std;

Linklist::Linklist: length(0) ()
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
	while(node->next)
	{
		if(node->next->data == value)
		{
			node->next = node->next->next;
			break;
		}

		node = node->next;
	}
}

int Linklist::Length()
{
	return length;
}


void Linklist::Reverse()
{
	// TODO
	Node *node = head->next;
	while(node->next)
	{
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
	Node *node = head->next;
	while(node)
	{
		delete node;
		node = node->next;
	}

	delete head;
	head = NULL;
	cout << "Linklist: destructor" << endl;
}
