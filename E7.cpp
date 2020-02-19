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

E7::E7() {
	name ="E7";
}
	
void E7::print() const {
	cout << "Etat: " + name << endl;
}

bool E7::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
		case PLUS:
			/*
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprPlus(s2,s1));
			*/
			break;
		case MULT:
			automate.decalage(s, new E5);
			break;
		case OPENPAR:
		case CLOSEPAR:
			/*
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprPlus(s2,s1));
			*/
			break;
		case FIN:
			/*
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprPlus(s2,s1));
			*/
			break;
		case EXPR:
		case ERREUR:
			break;
	}
	return false;
}

E7::~E7() {}