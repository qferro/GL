#include <iostream>

#include "ExprPlus.h"

using namespace std;

ExprPlus::ExprPlus(Expr * s1, Expr * s2)
{
	this->valeur = s1->getValue()+s2->getValue();
}