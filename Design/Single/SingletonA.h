#ifndef TON_A_H
#define TON_A_H

#include "Singleton.h"

class SingletonA: public Singleton
{
	public:
		void show() {cout << "SingletonA" << endl;}
	private:
		SingletonA() {}

	friend class Singleton;
};

#endif
