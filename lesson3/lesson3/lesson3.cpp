// lesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "MyDate.h"

int main()
{
	cout << "Enter a date:" << endl;
	int d, m, y;
	cin >> d >> m >> y;
	MyDate myDate = MyDate(y, m, y);
	myDate.printDate();
	int code = 0;
	MyDate date;
	while (code != -1)
	{
		cout << "Enter an action code:" << endl;
		cin >> code;
		switch (code)
		{
		case 1:
			cout << "Enter a date:" << endl;
			cin >> d >> m >> y;
			myDate.setDate(d, m, y);
			myDate.printDate();
			break;
		case 2:
			myDate.operator++(1).printDate();
			break;
		case 3:
			myDate++.printDate();
			break;
		case 4:
			cout << "Enter # days:" << endl;
			int num;
			cin >> num;
			myDate.operator+=(num).printDate();
			break;
		case 5:
			cout << "Enter a date:" << endl;
			cin >> d >> m >> y;
			date = MyDate(d, m, y);
			cout << (myDate > date) << endl;
			break;
		case 6:
			cout << "Enter a date:" << endl;
			cin >> d >> m >> y;
			date = MyDate(d, m, y);
			cout << (myDate < date) << endl;
			break;
		case 7:cout << "Enter a date:" << endl;
			cin >> d >> m >> y;
			date = MyDate(d, m, y);
			cout << (myDate == date) << endl;
			break;
		default:
			break;
		}

	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
