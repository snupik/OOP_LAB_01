#include <iostream>
#include <cmath>
//ÂÀĞ²ÀÍÒ 3
using namespace std;

class Ñalendar
{
private:
	int day;
	int mounth;
	int year;

public:
	Ñalendar(int a, int b, int c);
	Ñalendar();
	~Ñalendar();
	void Setday(int a);
	void Setmounth(int b);
	void Setyear(int c);
	int Getday();
	int Getmounth();
	int Getyear();
	void Print(void);
	void check();
};

Ñalendar::Ñalendar(int a, int b, int c)
{
	day = a;
	mounth = b;
	year = c;
}
Ñalendar::Ñalendar()
{
	day = mounth = year = 0;
}


Ñalendar::~Ñalendar() {}

void Ñalendar::Print(void)
{
	cout << day << "." << mounth << "." << year << endl;

}
int Ñalendar::Getday()
{
	return day;
}
int Ñalendar::Getmounth()
{
	return mounth;
}
int Ñalendar::Getyear()
{
	return year;
}
void Ñalendar::Setmounth(int b)
{
	if (b < 1 && b >= 13)
	{
		throw "Incorrect value";
	}
	this->mounth = b;
}
void Ñalendar::Setday(int a)
{
	if (a < 1 && a >= 32)
	{
		throw "Incorrect value";
	}
	this->day = a;
}
void Ñalendar::Setyear(int c)
{
	if (c < 0)
	{
		throw "Incorrect value";
	}
	this->year = c;
}
void Ñalendar::check()
{
	switch (mounth)
	{
	case 1:
	{
		cout << day << " ñ³÷íÿ" << year << "ğ" << endl;
		break;
	}
	case 2:
	{
		cout << day << " ëşòîãî " << year << "ğ" << endl;
		break;
	}
	case 3:
	{
		cout << day << " áåğåçíÿ " << year << "ğ" << endl;
		break;
	}
	case 4:
	{
		cout << day << " êâ³òíÿ " << year << "ğ" << endl;
		break;
	}
	case 5:
	{
		cout << day << " òğàâåíü " << year << "ğ" << endl;
		break;
	}
	case 6:
	{
		cout << day << " ÷åğâåíü " << year << "ğ" << endl;
		break;
	}
	case 7:
	{
		cout << day << " ëèïåíü " << year << "ğ" << endl;
		break;
	}
	case 8:
	{
		cout << day << " ñåğïåíü " << year << "ğ" << endl;
		break;
	}
	case 9:
	{
		cout << day << " âåğåñåíü " << year << "ğ" << endl;
		break;
	}
	case 10:
	{
		cout << day << " æîâòåíü " << year << "ğ" << endl;
	}
	case 11:
	{
		cout << day << " ëèñòîïàä " << year << "ğ" << endl;
		break;
	}
	case 12:
	{
		cout << day << " ãğóäíÿ " << year << "ğ" << endl;
		break;
	}

	}
}



int main()
{
	system("chcp 1251");
	Ñalendar obj1(1, 2, 2004);
	Ñalendar obj2;
	obj1.Print();
	obj1.check();
	obj2.Setday(2);
	obj2.Setmounth(3);
	obj2.Setyear(2005);
	obj2.Print();
	obj2.check();
	getchar(); getchar();
	return 0;
}