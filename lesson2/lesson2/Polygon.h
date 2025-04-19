#pragma once
#include "Point.h"

class Polygon
{
	
	private:
		Point* vertices;
		int numVertices;

	public:
		//ctors
		Polygon();
		Polygon(int numV);
		Polygon(const Polygon& other);
		~Polygon();

		//getters
		const Point* getVertices() const;
		int getNumVertices()const;

		void addPoint(const Point& p, int index);
		double perimeter() const;
		bool isEqual(const Polygon& other) const;



};

