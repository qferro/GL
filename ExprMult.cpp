#include "ExprMult.h"
#include <iostream>

using namespace std;

ExprMult::ExprMult(Expr* e1, Expr* e2) {
	this->valeur = e1->getValue()*e2->getValue();
}