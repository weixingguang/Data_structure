#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
	cout << "Stack constructor" << endl;
	top = 0;
};

Stack::~Stack()
{
	cout << "Stack deconstructor" << endl;
}

void Stack::clearStack()
{
	top = 0;
}

bool Stack::stackEmpty()
{
	if(top == 0)
		return true;
	else
		return false;
}

bool Stack::getTop(int &value)
{
	if(top == 0)
		return false;
	else
	{
		value = data[top-1];
		return true;
	}
}

bool Stack::push(int value)
{
	if(top == MAXSIZE)
		return false;
	else
	{
		data[top] = value;
		top++;
		return true;
	}
}

bool Stack::pop(int &value)
{
	if(top == 0)
		return false;
	else
	{
		value = data[top-1];
		top--;
		return true;
	}

}

int Stack::getLength()
{
	return top;
}
