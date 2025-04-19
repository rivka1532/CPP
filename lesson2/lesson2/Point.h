#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
	private:
		int x;
		int y;

	public:
		//ctors
		Point();
		Point(int _x, int _y);
		Point(const Point &otherP);

		//getters
		int getX() const;
		int getY() const;

		//setters
		void setX(int newX);
		void setY(int newY);

		//distance between two points
		double distanceTo(const Point& otherP) const;

};
#endif

