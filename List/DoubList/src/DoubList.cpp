#include "DoubList.h"
#include <iostream>
using namespace std;

DoubList::DoubList(): length(0) 
{
	head = new Node(0);
}

DoubList::~DoubList()
{
	Node *pnode = head;
	Node *pcur  = head;

	while(pcur->next)
	{
		pcur = pcur->next;
		delete pnode;
		pnode = pcur;
	}

	delete pnode;

}

int DoubList::insert_node(int position, int value)
{
	Node *pnode = head;
	if(position < 0 || position > length)
		return 0;

	for(int i = 0; i < position-1; i++)
		pnode = pnode->next;

	Node *new_node = new Node(value);

	new_node->next = pnode->next;
	new_node->prev = pnode;
	new_node->next->prev = new_node;
	pnode->next = new_node;

	return 1;
}

int DoubList::delete_node(int position)
{
	Node *pnode = head;
	Node *pcur;
	if(position < 0 || position > length)
		return 0;

	for(int i = 0; i < position-1; i++)
		pnode = pnode->next;

	pcur = pnode->next;
	pcur->next->prev = pnode;
	pnode->next = pcur->next;

	delete pcur;

	return 1;

}

void DoubList::display()
{
	Node *pnode = head;

	for(int i = 0; i < length; i++, pnode = pnode->next)
	{
		cout << pnode->data << " ";
	}

	cout << endl;
}

