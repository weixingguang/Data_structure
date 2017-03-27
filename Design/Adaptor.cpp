class Deque
{
	public:
		void push_back(int x) {cout << "Deque push back" << endl;}
		void push_front(int x) {cout << "Deque pusch front" << endl;}
		void pop_back() {cout << "Deque pop back" << endl;}
		void pop_front() {cout << "Deque pop front" << endl;}
};

class Sequence
{
	public:
		virtual void push(int x) = 0;
		virtual void pop() = 0;
};

class Stack:public Sequence
{
	public:
		void push(int x) {qu.push_back(x);}
		void pop() {qu.pop_back();}
	private:
		Deque qu;
};

class Queue:public Sequence
{
	public:
		void push(int x) {qu.push_back(x);}
		void pop() {qu.pop_back();}
	private:
		Deque qu;
};
