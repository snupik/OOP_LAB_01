#include <iostream>
#include <cmath>
//¬¿–≤¿Õ“ 4
using namespace std;

class Allthetime
{
private:
	int hours;
	int seconds;
	int minutes;

public:
	Allthetime(int a, int b, int c);
	Allthetime();
	~Allthetime();
	void Sethours(int a);
	void Setseconds(int b);
	void Setminutes(int c);
	int Gethours();
	int Getseconds();
	int Getminutes();
	void Print(void);

};

Allthetime::Allthetime(int a, int b, int c)
{
	hours = a;
	seconds = b;
	minutes = c;
}
Allthetime::Allthetime()
{
	hours = seconds = minutes = 0;
}


Allthetime::~Allthetime() {}

void Allthetime::Print(void)
{
	cout << hours << "hour " << seconds << "minute " << minutes << "second" << endl;
	cout << hours << ":" << seconds << ":" << minutes << endl;
}
int Allthetime::Gethours()
{
	return hours;
}
int Allthetime::Getseconds()
{
	return seconds;
}
int Allthetime::Getminutes()
{
	return minutes;
}
void Allthetime::Setseconds(int b)
{
	if (b < 0 && b >= 60)
	{
		throw "Incorrect value";
	}
	this->seconds = b;
}
void Allthetime::Sethours(int a)
{
	if (a < 0 && a >= 24)
	{
		throw "Incorrect value";
	}
	this->hours = a;
}
void Allthetime::Setminutes(int c)
{
	if (c < 0 && c >= 60)
	{
		throw "Incorrect value";
	}
	this->minutes = c;
}


int main()
{
	Allthetime obj1(1, 2, 3);
	Allthetime obj2;
	obj1.Print();
	obj2.Sethours(2);
	obj2.Setseconds(3);
	obj2.Setminutes(3);
	obj2.Print();
	getchar(); getchar();
	return 0;
}