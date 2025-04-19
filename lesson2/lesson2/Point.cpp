#include "Point.h"
#include <iostream>

//ctor
Point::Point() : x(0), y(0){}
Point::Point(int x, int y) : x(x), y(y){}
Point::Point(const Point& otherP) : x(otherP.x), y(otherP.y){}

//getters
int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}

void Point::setX(int newX)
{
	x = newX;
}

void Point::setY(int newY)
{
	y = newY;
}

double Point::distanceTo(const Point& otherP) const
{
	int dx = otherP.x - x; // ����� ����� ��� ��� ���� � X
	int dy = otherP.y - y;// ����� ����� ��� ��� ���� � Y
	return std::sqrt(dx * dx + dy * dy); //����� ����� ��� ������: ���� �� ����� ������� �����
}
