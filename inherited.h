

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Shape
{
protected:
	float width, height;
public:
	virtual ~Shape(){}

	void set_data (float a, float b)
	{
		width = a;
		height = b;
	}

	virtual string getType() {
		return "Shapes";
	}
};

class Polygon: public Shape
{
public:
	virtual ~Polygon(){};

	virtual string getType() {
		return "Polygon";
	}
};

class Triangle: public Polygon
{
public:
	virtual ~Triangle(){};

	virtual string getType() {
		return "Triangle";
	}
};






