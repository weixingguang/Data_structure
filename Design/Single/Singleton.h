#ifndef TON_H
#define TON_H

#include <iostream>
using namespace std;

class Singleton
{
	public:
		static Singleton* GetInstance(const char *name);

		virtual void show() {cout << "Singleton" << endl;}
	protected:
		Singleton() {}
	private:
		static Singleton* singleton;
};

#endif
