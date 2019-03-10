#include <iostream>
#include <cmath>
//ВАРІАНТ 8
#define M_PI            3.14159265358979323846
using namespace std;

class Konus
{
private:
	int r;
	int h;


public:
	Konus(int r, int h);
	Konus();
	~Konus();
	void SetR(int a);
	void SetH(int b);

	int GetR();
	int GetH();

	void Print(void);
	double V();
	double S();
};

Konus::Konus(int a, int b)
{
	r = a;
	h = b;

}
Konus::Konus()
{
	r = h = 0;
}


Konus::~Konus() {}

void Konus::Print(void)
{
	cout << "радіус основи =" << r << "висота=" << h << endl;
}
int Konus::GetR()
{
	return r;
}
int Konus::GetH()
{
	return h;
}

void Konus::SetH(int b)
{
	if (b <= 0)
	{
		throw "Incorrect value";
	}
	this->h = b;
}
void Konus::SetR(int a)
{
	if (a <= 0)
	{
		throw "Incorrect value";
	}
	this->r = a;
}


double Konus::S()
{
	return this->r*M_PI*(r + sqrt(this->r*this->r + this->h*this->h));
}
double Konus::V()
{
	return (this->r *this->r * M_PI*this->h) / 3;
}

int main()
{
	system("chcp 1251");
	Konus obj1(1, 2);
	Konus obj2;
	obj1.Print();
	cout << obj1.S() << " Square" << endl;
	cout << obj1.V() << " V" << endl;
	obj2.SetH(2);
	obj2.SetR(3);

	obj2.Print();
	cout << obj2.S() << endl;
	cout << obj2.V() << endl;
	getchar(); getchar();
	return 0;
}