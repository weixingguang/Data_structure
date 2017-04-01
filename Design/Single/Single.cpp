#include "Singleton.h"
/*
class Singleton
{
	public:
		static Singleton* GetInstance();
	private:
		Singleton() {cout << "Singleton" << endl;}
		static Singleton* singleton;
};

Singleton* Singleton::singleton = NULL;
Singleton* Singleton::GetInstance()
{
	if(singleton == NULL)
		singleton = new Singleton();

	return singleton;
}

int main()
{
	Singleton *c1 = Singleton::GetInstance();
	Singleton *c2 = Singleton::GetInstance();

	cout << c1 << "  " << c2 << endl;
	return 0;
}
*/


int main()
{
	Singleton* st = Singleton::GetInstance("singletonA");
	st->show();

	return 0;
}
