#include "ExprBin.h"

#include <iostream>

using namespace std;

ExprBin::ExprBin(string anExpression)
{
	expression = anExpression;
	Expr();
}

ExprBin::~ExprBin(){}
