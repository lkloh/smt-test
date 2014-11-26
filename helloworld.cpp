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
	//method 1
	Polygon p = Polygon();
	Shape* testing = &p;
	std::cout << testing->getType() << std::endl;

	//method 2
	std::unique_ptr<Shape> poly(new Polygon());
	std::cout << poly->getType() << std::endl;
	return 0;
}