/*********************                                                        */
/*! \file helloworld.cpp
 ** \verbatim
 ** Original author: Tim King
 ** Major contributors: Kshitij Bansal
 ** Minor contributors (to current version): Morgan Deters
 ** This file is part of the CVC4 project.
 ** Copyright (c) 2009-2014  New York University and The University of Iowa
 ** See the file COPYING in the top-level source directory for licensing
 ** information.\endverbatim
 **
 ** \brief A very simple CVC4 example
 **
 ** A very simple CVC4 tutorial example.
 **/

#include <iostream>

#include "inherited.h" 

using namespace std;

int main ()
{
	Polygon rect;
	Triangle tri;
	rect.set_data(5,3);
	tri.set_data(2,5);
	std::cout << rect.area() << std::endl;
	std::cout << tri.area() << std::endl;
	Shape shape = tri;
	std::cout << shape.area() << std::endl;
	std::cout << "YOU ARE STUPID"<< std::endl;
	return 0;
}