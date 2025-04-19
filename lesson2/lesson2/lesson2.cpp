// lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Polygon.h"
using namespace std;


int main()
{
    cout << "Hello World!\n";
    try {
        int n1, n2;

        // קלט עבור המצולע הראשון
        cout << "Enter sides of first polygon: ";
        cin >> n1;
        if (n1 < 3) throw runtime_error("ERROR");

        Polygon polygon1(n1);
        cout << "Enter points of first polygon: ";
        for (int i = 0; i < n1; i++) {
            double x, y;
            cin >> x >> y;
            polygon1.addPoint(Point(x, y), i);
        }

        // קלט עבור המצולע השני
        cout << "Enter sides of second polygon: ";
        cin >> n2;
        if (n2 < 3) throw runtime_error("ERROR");

        Polygon polygon2(n2);
        cout << "Enter points of second polygon: ";
        for (int i = 0; i < n2; i++) {
            double x, y;
            cin >> x >> y;
            polygon2.addPoint(Point(x, y), i);
        }

        // חישוב היקפים עבור שני המצולעים
        double perimeter1 = round(polygon1.perimeter());
        double perimeter2 = round(polygon2.perimeter());

        // השוואת מצולעים והדפסת התוצאה
        if (polygon1.isEqual(polygon2)) {
            other.~Polygon();
            cout << "equal " << perimeter1 << endl;
        }
        else {
            other.~Polygon();
            cout << "equal not" << endl;
            cout << "Perimeter of first polygon: " << perimeter1 << endl;
            cout << "Perimeter of second polygon: " << perimeter2 << endl;
        }
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;

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
