#include <iostream>
using namespace std;

class Resume
{
	protected:
		//virtual void SetPersonalInfo() {}
		//virtual void SetEducation() {}
		//virtual void SetWorkExp() {}

		//virtual void SetPersonalInfo() {cout << "old" << endl;}
		//virtual void SetEducation() {cout << "old" << endl;}
		//virtual void SetWorkExp() {cout << "old" << endl;}

		virtual void SetPersonalInfo() = 0;
		virtual void SetEducation() = 0;
		virtual void SetWorkExp() = 0;

	public:
		void FillResume()
		{
			SetPersonalInfo();
			SetEducation();
			SetWorkExp();
		}

};

class ResumeA : public Resume
{
	protected:
		virtual void SetPersonalInfo() {cout << "A1" << endl;}
		virtual void SetEducation() {cout  << "A2" << endl;}
		virtual void SetWorkExp() {cout << "A3" << endl;}
};

class ResumeB : public Resume
{
	protected:
		virtual void SetPersonalInfo() {cout << "B1" << endl;}
		virtual void SetEducation() {cout  << "B2" << endl;}
		virtual void SetWorkExp() {cout << "B3" << endl;}
};

int main()
{
	Resume *r1 = new ResumeA();
	r1->FillResume();
	delete r1;

	r1 = new ResumeB();
	r1->FillResume();
	delete r1;

	r1 = NULL;

	return 0;
}
