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
#include "Expr.h"
#include "ExprMult.h"

E8::E8() {
	name ="E8";
}
	
void E8::print() const {
	cout << "Etat: " + name << endl;
}

bool E8::transition(Automate &automate, Symbole *s) {
	cout << "E8" << endl;
	switch(*s){
		case INT: {}
		case PLUS: {
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popAndDestroySymbol();
			Expr* s2 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.reduction(3, new ExprMult(s2,s1));
			break;
		}
		case MULT: {
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popAndDestroySymbol();
			Expr* s2 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.reduction(3, new ExprMult(s2,s1));
			break;
		}
		case OPENPAR: {}
		case CLOSEPAR: {
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popAndDestroySymbol();
			Expr* s2 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.reduction(3, new ExprMult(s2,s1));
			break;
		}
		case FIN: {
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popAndDestroySymbol();
			Expr* s2 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.reduction(3, new ExprMult(s2,s1));
			break;
		}
		case EXPR: {}
		case ERREUR: {
			return true;
			break;
		}
	}
	return false;
}

E8::~E8() {}