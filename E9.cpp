#include <iostream>

using namespace std;

#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "E4.h"
#include "E5.h"
#include "E6.h"
#include "E7.h"
#include "E8.h"
#include "E9.h"

E9::E9() {
	name ="E9";
}
	
void E9::print() const {
	cout << "Etat: " + name << endl;
}

bool E9::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
		case PLUS:
			/*
			automate.popAndDestroySymbol();
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			automate.reduction(3, s1);
			*/
			break;
		case MULT:
			/*
			automate.popAndDestroySymbol();
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			automate.reduction(3, s1);
			*/
			break;
		case OPENPAR:
		case CLOSEPAR:
			/*automate.popAndDestroySymbol();
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			automate.reduction(3, s1);
			*/
			break;
		case FIN:
			/*
			automate.popAndDestroySymbol();
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			automate.reduction(3, s1);
			*/
			break;
		case EXPR:
		case ERREUR:
			break;
	}
	return false;
}

E9::~E9() {}