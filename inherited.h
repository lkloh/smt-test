

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
	void set_data (float a, float b)
	{
		width = a;
		height = b;
	}

	virtual float area() {
		return 0;
	}
};

class Polygon: public Shape
{
public:
	virtual float area ()
	{
		return (width * height);
	}
};

class Triangle: public Polygon
{
public:
	virtual float area ()
	{
		return (width * height / 2);
	}
};






