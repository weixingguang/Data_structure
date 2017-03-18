#define MAXSIZE 10

class Stack
{
	public:
		Stack();
		~Stack();
		void clearStack();
		bool stackEmpty();
		bool getTop(int &value);
		bool push(int value);
		bool pop(int &value);
		int getLength();

	private:
	int data[MAXSIZE];
	int top;
};
