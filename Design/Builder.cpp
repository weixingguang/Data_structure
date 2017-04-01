#include <iostream>
using namespace std;

class Builder
{
	public:
		virtual void BuildHead() {}
		virtual void BuildBody() {}
		virtual void BuildHand() {}
};

class ThinBuilder : public Builder
{
	public:
		virtual void BuildHead() {cout << "Thin head" << endl;}
		virtual void BuildBody() {cout << "Thin body" << endl;}
		virtual void BuildHand() {cout << "Thin hand" << endl;}
};

class FatBuilder : public Builder
{
	public:
		virtual void BuildHead() {cout << "Fat head" << endl;}
		virtual void BuildBody() {cout << "Fat body" << endl;}
		virtual void BuildHand() {cout << "Fat hand" << endl;}
};

class Director
{
	public:
		Director(Builder *b) {mp = b;}
		void Create()
		{
			mp->BuildHead();
			mp->BuildBody();
			mp->BuildHand();
		}
	private:
		Builder *mp;
};

int main()
{
	Builder *b = new FatBuilder();
	Director d(b);
	d.Create();

	delete b;
	b = NULL;

	return 0;
}
