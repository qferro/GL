#include "Expr.h"
#include <iostream>

using namespace std;

void Expr::setValue(int val) {
	valeur = val;
}

int Expr::getValue() {
	return valeur;
}

void Expr::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}