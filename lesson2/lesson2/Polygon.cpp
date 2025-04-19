#include "Polygon.h"
#include <iostream>

//ctors
Polygon::Polygon()
{
	Point* vertices = nullptr; 
	int numVertices = 0;
	std::cout << "in empty consturctor" << std::endl;
}

Polygon::Polygon(int numV) : numVertices(numV)
{
	if (numVertices > 0) {
		vertices = new Point[numVertices];
	}
	else {
		vertices = nullptr;
	}
	std::cout << "in one parameter constructor" << std::endl;
}

Polygon::Polygon(const Polygon& other) : numVertices(other.numVertices)
{
	vertices = new Point[numVertices];
	for (int i = 0; i < numVertices; i++) {
		vertices[i] = other.vertices[i];
	}
	std::cout << "in copy constructor" << std::endl;
}

Polygon::~Polygon()
{
	delete[] vertices;
	std::cout << "destructor in" << std::endl;
}

//getters
int Polygon::getNumVertices() const{
	return numVertices;
}

const Point* Polygon::getVertices() const{
	Point* copy = new Point[numVertices];
	for (int i = 0; i < numVertices; i++) {
		copy[i] = vertices[i];
	}
	return copy;
}

void Polygon::addPoint(const Point& p, int index) {
	if (index >= 0 && index < numVertices) {
		vertices[index] = p;
	}
}

double Polygon::perimeter() const {
	if (numVertices < 2) return 0;
	double sum = 0;
	for (int i = 0; i < numVertices - 1; i++) {
		sum += vertices[i].distanceTo(vertices[i + 1]);
	}
	sum += vertices[numVertices - 1].distanceTo(vertices[0]); // Closing the polygon
	return sum;
}

bool Polygon::isEqual(const Polygon& other) const {
	if (numVertices != other.numVertices || vertices == nullptr || other.vertices == nullptr)
		return false;

	bool* matched = new bool[numVertices] {false};
	for (int i = 0; i < numVertices; i++) {
		bool found = false;
		for (int j = 0; j < numVertices; j++) {
			if (!matched[j] && vertices[i].getX() == other.vertices[j].getX() && vertices[i].getY() == other.vertices[j].getY()) {
				matched[j] = true;
				found = true;
				break;
			}
		}
		if (!found) {
			delete[] matched;
			return false;
		}
	}
	delete[] matched;
	return true;
}
