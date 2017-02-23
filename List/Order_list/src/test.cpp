#include "Order_list.h"

#include <iostream>
using namespace std;

int main()
{
	Order_list<int> list;

	cout << "The list is empty ?" << list.list_empty() << endl;

	list.list_print();

	for(int i = 0; i < 20; i++)
		list.list_insert(list.get_length()+1, i+1);

	cout << "The list is empty ?" << list.list_empty() << endl;

	list.clear_list();

	for(int i = 0; i < 20; i++)
		list.list_insert(list.get_length()+1, i+1);

	cout << "The list is empty ?" << list.list_empty() << endl;

	cout << "------------------" << endl;
	list.list_print();

	list.list_delete(10);
	list.list_delete(1);
	list.list_delete(4);

	cout << "------------------" << endl;
	list.list_print();

	return 0;
}
