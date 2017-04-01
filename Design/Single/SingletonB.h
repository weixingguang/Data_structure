#ifndef TON_B_H
#define TON_B_H
#include "Singleton.h"

class SingletonB: public Singleton
{
	public:
		void show() {cout << "SingletonB" << endl;}
	private:
		SingletonB() {}

	friend class Singleton;
};

#endif
