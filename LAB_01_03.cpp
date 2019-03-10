#include <iostream>
#include <cmath>
//¬¿–≤¿Õ“ 9
#define M_PI            3.14159265358979323846
using namespace std;

class Kolo
{
private:
	int x;
	int y;
	int r;

public:
	Kolo(int a, int b, int c);
	Kolo();
	~Kolo();
	void SetX(int a);
	void SetY(int b);
	void SetR(int c);
	int GetX();
	int GetY();
	int GetR();
	void Print(void);
	double Square();
	double length();
};

Kolo::Kolo(int a, int b, int c)
{
	x = a;
	y = b;
	r = c;
}
Kolo::Kolo()
{
	x = y = r = 0;
}


Kolo::~Kolo() {}

void Kolo::Print(void)
{
	cout << "x =" << x << " y =" << y << " r =" << r << endl;
}
int Kolo::GetX()
{
	return x;
}
int Kolo::GetY()
{
	return y;
}
int Kolo::GetR()
{
	return r;
}
void Kolo::SetY(int b)
{

	this->y = b;
}
void Kolo::SetX(int a)
{

	this->x = a;
}
void Kolo::SetR(int c)
{
	if (c <= 0)
	{
		throw "Incorrect value";
	}
	this->r = c;
}

double Kolo::Square()
{
	return this->r*this->r*M_PI;
}
double Kolo::length()
{
	return this->r * 2 * M_PI;
}

int main()
{
	Kolo obj1(1, 2, 3);
	Kolo obj2;
	obj1.Print();
	cout << obj1.Square() << " Square" << endl;
	cout << obj1.length() << " leangth" << endl;
	obj2.SetX(2);
	obj2.SetY(3);
	obj2.SetR(3);
	obj2.Print();
	cout << obj2.Square() << endl;
	cout << obj2.length() << endl;
	getchar(); getchar();
	return 0;
}