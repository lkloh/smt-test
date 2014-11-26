

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

/*
 * Term
 */
class Term
{
public:
	Term(){}

	virtual ~Term(){}

	virtual string getClass() {
		return "Term";
	}
};

class Variable: public Term
{
public:
	Variable(){}

	virtual ~Variable(){}

	virtual string getClass() {
		return "Variable";
	}
};

class IntVal: public Variable
{
public:
	IntVal(){}

	virtual ~IntVal(){}

	virtual string getClass() {
		return "Integer";
	}
};