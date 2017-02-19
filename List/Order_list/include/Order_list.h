#include <iostream>
using namespace std;

#define MAXSIZE 20

template <typename T>
class Order_list {
	public:
		Order_list():length(0) {};

		bool list_empty();
		bool clear_list();
		bool get_elem(int index, T &value);
		int locate_elem(T value);
		bool list_insert(int index, T value);
		bool list_delete(int index);
		void print_list();
		int get_length();

	private:
		T data[MAXSIZE];
		int length;
};

template <typename T>
bool Order_list <T> ::list_empty ()
{
	if( length == 0)
		return true;
	else
		return false;
}

template <typename T>
bool Order_list <T> ::clear_list ()
{
	if( (length < 0) || (length > MAXSIZE) )
	{
		cout << "The length of this List is illegal." << endl;
		return false;
	}
	
	if( length == 0)
	{
		cout << "The List is empty." << endl;
		return true;
	}

	length = 0;
}

template <typename T>
bool Order_list <T> ::get_elem (int index, T &value)
{
	if( (index < 1) || (index > length) )
		return false;

	value = data[index-1];
	return true;
}

template <typename T>
int Order_list <T> ::locate_elem (T value)
{
	int index;

	for(index = 0; index < length; index++)
		if( data[index] == value)
			return index+1;

	if( index == length )
		return 0;
}

template <typename T>
bool Order_list <T> ::list_insert (int index, T value)
{
	if( (index < 1) || (index > length) )
		return false;

	if( length >= MAXSIZE)
		return false;

	for(int i = length; i > index; i--)
		data[i] = data[i-1];

	length++;

	return true;
}

template <typename T>
bool Order_list <T> ::list_delete (int index)
{
	if( (index < 1) || (index > length) )
		return false;

	for(int i = index; i < length-1; i++)
		data[i-1] = data[i];

	length--;
	
	return true;
}

template <typename T>
void Order_list <T> ::print_list()
{
	for(int index = 0; index < length; index++)
		cout << "[ " << index+1 << " ] -->  " << data[index] << endl;
}

template <typename T>
int Order_list <T> ::get_length ()
{
	return length;
}
