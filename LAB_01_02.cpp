#include <iostream>
#include <cmath>
//��в��� 3
using namespace std;

class �alendar
{
private:
	int day;
	int mounth;
	int year;

public:
	�alendar(int a, int b, int c);
	�alendar();
	~�alendar();
	void Setday(int a);
	void Setmounth(int b);
	void Setyear(int c);
	int Getday();
	int Getmounth();
	int Getyear();
	void Print(void);
	void check();
};

�alendar::�alendar(int a, int b, int c)
{
	day = a;
	mounth = b;
	year = c;
}
�alendar::�alendar()
{
	day = mounth = year = 0;
}


�alendar::~�alendar() {}

void �alendar::Print(void)
{
	cout << day << "." << mounth << "." << year << endl;

}
int �alendar::Getday()
{
	return day;
}
int �alendar::Getmounth()
{
	return mounth;
}
int �alendar::Getyear()
{
	return year;
}
void �alendar::Setmounth(int b)
{
	if (b < 1 && b >= 13)
	{
		throw "Incorrect value";
	}
	this->mounth = b;
}
void �alendar::Setday(int a)
{
	if (a < 1 && a >= 32)
	{
		throw "Incorrect value";
	}
	this->day = a;
}
void �alendar::Setyear(int c)
{
	if (c < 0)
	{
		throw "Incorrect value";
	}
	this->year = c;
}
void �alendar::check()
{
	switch (mounth)
	{
	case 1:
	{
		cout << day << " ����" << year << "�" << endl;
		break;
	}
	case 2:
	{
		cout << day << " ������ " << year << "�" << endl;
		break;
	}
	case 3:
	{
		cout << day << " ������� " << year << "�" << endl;
		break;
	}
	case 4:
	{
		cout << day << " ����� " << year << "�" << endl;
		break;
	}
	case 5:
	{
		cout << day << " ������� " << year << "�" << endl;
		break;
	}
	case 6:
	{
		cout << day << " ������� " << year << "�" << endl;
		break;
	}
	case 7:
	{
		cout << day << " ������ " << year << "�" << endl;
		break;
	}
	case 8:
	{
		cout << day << " ������� " << year << "�" << endl;
		break;
	}
	case 9:
	{
		cout << day << " �������� " << year << "�" << endl;
		break;
	}
	case 10:
	{
		cout << day << " ������� " << year << "�" << endl;
	}
	case 11:
	{
		cout << day << " �������� " << year << "�" << endl;
		break;
	}
	case 12:
	{
		cout << day << " ������ " << year << "�" << endl;
		break;
	}

	}
}



int main()
{
	system("chcp 1251");
	�alendar obj1(1, 2, 2004);
	�alendar obj2;
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