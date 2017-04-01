#include "Singleton.h"
#include "SingletonA.h"
#include "SingletonB.h"
#include <cstring>

Singleton* Singleton::singleton = NULL;

Singleton* Singleton :: GetInstance(const char *name)
{
	if(singleton == NULL)
	{
		if(strcmp(name, "singletonA") == 0)
			singleton = new SingletonA();
		else if(strcmp(name, "singletonB") == 0)
			singleton = new SingletonB();
		else
			singleton = new Singleton();
	}

	return singleton;
}
