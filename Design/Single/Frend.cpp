#include <iostream>
using namespace std;

/*
class Interface
{
	friend void Print(const Interface &obj);
	public:
	Interface(int tmp): num(tmp) {}
	private:
		int num;
};

void Print(const Interface &obj)
{
	cout << obj.num << endl;
}

int main()
{
	Interface obj(1);
	Print(obj);

	return 0;
}
*/

class boy;

class girl
{
	public:
		girl(int a) : age(a) {}

	private:
		int age;

	friend boy;
};

class boy
{
	public:
		void disp(girl&);
};

void boy::disp(girl &x)
{
	cout << "Girl's age: " << x.age << endl;
}


int main()
{
	girl g(10);
	boy b;
	b.disp(g);
	return 0;
}
