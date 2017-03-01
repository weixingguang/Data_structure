#include <iostream>

class Node {
	public:
	Node(int val): data(val), next(NULL), prev(NULL) {}

	int data;
	Node *next;
	Node *prev;
};

class DoubList {
	public:
		DoubList();
		~DoubList();
		int insert_node(int position, int value);
		int delete_node(int position);
		void display();
		int get_length();

	private:
		int length;
		Node *head;
};
