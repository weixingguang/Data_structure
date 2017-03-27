/*Simple Factory Mode*/

enum CTYPE{COREA, COREB};

class SingleCore
{
	public:
		virtual void show() = 0;
};

class SingleCoreA:public SingleCore
{
	public:
		virtual void show() {cout << "This is in SingleCoreA" << endl;}
};

class SignleCoreB:public SingleCore
{
	public:
		virtual void show() {cout << "This is in SingleCoreB" << endl;}
};

class Factory
{
	public:
		SingleCore* Factory(CTYPE *type)
		{
			if(type == COREA)
			{
				return new SingleCoreA();
			}
			else if(type == COREB)
			{
				return new SingleCoreB();
			}
			else
				return NULL;
		}
};


/*Factory Method*/

class SingleCore
{
	public:
		virtual void show() = 0;
};

class SingleCoreA:public SingleCore
{
	public:
		virtual void show () {cout << "This is in SingleCoreA" << endl;}
};

class SingleCoreB:public SingleCore
{
	public:
		virtual void show () {cout << "This is in SingleCoreB" << endl;}
};

class Factory
{
	public:
		SingleCore* createCore () = 0;
};

class FactoryCoreA: public Factory
{
	SingleCore* createCore() {return new SingleCoreA;}
};

class FactoryCoreB: public Factory
{
	SingleCore* createCore() {return new SingleCoreB}
};


/*Virtual Factory*/
class SingleCore
{
	public:
		virtual void show() = 0;
};

class SingleCoreA:public SingleCore
{
	public:
		virtual void show() {cout << "This is in SingleCoreA" << endl;}
};

class SingleCoreB:public SingleCore
{
	public:
		virtual void show() {cout << "This is in SingleCoreB" << endl;}
};

class MultiCore
{
	public:
		virtual void show() = 0;
};

class MultiCoreA: public MultiCore
{
	public:
		virtual void show() {cout << "This is in MultiCoreA" << endl;}
};

class MultiCoreB: public MultiCore
{
	public:
		virtual void show() {cout << "This is in MultiCoreB" << endl;}
};

class Factory
{
	public:
		virtual SingleCore* createSingle() = 0;
		virtual MultiCore* createMulti() = 0;
};

class FactoryA:public Factory
{
	public:
		virtual SingleCore* createSingle() {return new SingleCoreA;}
		virtual MultiCore* createMulti() {return new MultiCoreA;}
};

class FactoryB:public Factory
{
	public:
		virtual SingleCore* createSingle() {return new SingleCoreB;}
		virtual MultiCore* createMulti() {return new MultiCoreB;}
};
