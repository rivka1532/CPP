#include "MyDate.h"
#include <iostream>
using namespace std;

int MyDate::getDay()
{
	return day;
}

int MyDate::getMonth()
{
	return month;
}

int MyDate::getYear()
{
	return year;
}

MyDate::MyDate(int _day, int _month, int _year)
{
	if (_day < 1 || _day >30)
	{
		cout << "Error day" << endl;
		day = 1;
	}
	else
	{
		day = _day;
	}
	if (_month < 1 || _month >12)
	{
		cout << "Error month" << endl;
		month = 1;
	}
	else
	{
		month = _month;
	}
	if (_year < 1920 || _year > 2099)
	{
		cout << "Error year" << endl;
		year = 1920;
	}
	else
	{
		year = _year;
	}
}

void MyDate::setDate(int _day, int _month, int _year)
{
	if (_day < 1 || _day >30 || _month < 1 || _month >12 || _year < 1920 || _year > 2099)
	{
		return;
	}
	else
	{
		day = _day;
		month = _month;
		year = _year;
	}
}

void MyDate::addDay(int num)
{
	if (day + num < 30)
	{
		day+=num;
	}
	else
	{
		if (month < 12)
		{
			month++;
			day = num;
		}
		else
		{
			if (year < 2099)
			{
				year++;
				month = 1;
				day = num;
			}
			else
			{
				year = 1920;
				month = 1;
				day = num;
			}
		}
	}
}

MyDate& MyDate::operator++()
{
	addDay(1);
	return *this;
}

MyDate MyDate::operator++(int stam)
{
	MyDate temp = *this;
	addDay(1);
	return temp;
}

MyDate& MyDate::operator+=(int num)
{
	addDay(num);
	return *this;
}

bool MyDate::operator>(const MyDate& date) const
{
	if ((year > date.year) ||
		(year == date.year && month > date.year) ||
		(year == date.year && month == date.month && day > date.day))
	{
		return true;
	}
	return false;
}

bool MyDate::operator<(const MyDate& date) const
{
	if ((year > date.year) ||
		(year == date.year && month >= date.year) ||
		(year == date.year && month == date.month && day > date.day))
	{
		return true;
	}
	return false;
}

bool MyDate::operator==(const MyDate& date) const
{
	if (day == date.day && month == date.month && year == date.year)
	{
		return true;
	}
	return false;
}

void MyDate::printDate() const
{
	cout << day << "/" << month << "/" << year << endl;
}








