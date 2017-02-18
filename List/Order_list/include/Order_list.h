#ifndef _Order_list
#define _Order_list

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

#endif
