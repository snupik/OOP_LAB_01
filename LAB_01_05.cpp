#include <iostream>
#include <cmath>
//¬¿–≤¿Õ“ 5
using namespace std;

class Prymokutnik
{
private:
	int h;
	int l;


public:
	Prymokutnik(int a, int b);
	Prymokutnik();
	~Prymokutnik();
	void SetH(int a);
	void SetL(int b);
	int GetH();
	int GetL();
	void Print(void);
	double Square();
	double Perimeter();
};

Prymokutnik::Prymokutnik(int a, int b)
{
	h = a;
	l = b;
}
Prymokutnik::Prymokutnik()
{
	h = l = 0;
}


Prymokutnik::~Prymokutnik() {}

void Prymokutnik::Print(void)
{
	cout << h << ' ' << l << ' ' << endl;
}
int Prymokutnik::GetH()
{
	return h;
}
int Prymokutnik::GetL()
{
	return l;
}
void Prymokutnik::SetL(int b)
{
	if (b <= 0)
	{
		throw "Incorrect value";
	}
	this->l = b;
}
void Prymokutnik::SetH(int a)
{
	if (a <= 0)
	{
		throw "Incorrect value";
	}
	this->h = a;
}

double Prymokutnik::Square()
{
	return this->h * this->l;
}
double Prymokutnik::Perimeter()
{
	return 2 * this->h + 2 * this->l;
}

int main()
{
	Prymokutnik obj1(1, 2);
	Prymokutnik obj2;
	obj1.Print();
	cout << obj1.Square() << endl;
	cout << obj1.Perimeter() << endl;
	obj2.SetH(2);
	obj2.SetL(3);
	obj2.Print();
	cout << obj2.Square() << endl;
	cout << obj2.Perimeter() << endl;
	getchar(); getchar();
	return 0;
}