

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
};

class Rectangle: public Shape
{
public:
	float area ()
	{
		return (width * height);
	}
};

class Triangle: public Shape
{
public:
	float area ()
	{
		return (width * height / 2);
	}
};






