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

E9::E9() {
	name ="E9";
}
	
void E9::print() const {
	cout << "Etat: " + name << endl;
}

bool E9::transition(Automate &automate, Symbole *s) {
	cout << "E9" << endl;
	switch(*s){
		case INT: {}
		case PLUS: {
			automate.popSymbol();
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popSymbol();
			automate.reduction(3, s1);
			break;
		}
		case MULT: {
			automate.popSymbol();
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popSymbol();
			automate.reduction(3, s1);
			break;
		}
		case OPENPAR: {}
		case CLOSEPAR: {
			automate.popSymbol();
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popSymbol();
			automate.reduction(3, s1);
			break;
		}
		case FIN: {
			automate.popSymbol();
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popSymbol();
			automate.reduction(3, s1);
			break;
		}
		case EXPR: {}
		case ERREUR: {
			break;
		}
	}
	return false;
}

E9::~E9() {}