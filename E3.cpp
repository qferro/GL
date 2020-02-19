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

E3::E3() {
	name ="E3";
}
	
void E3::print() const {
	cout << "Etat: " + name << endl;
}

bool E3::transition(Automate &automate, Symbole *s) {
	cout << "E3" << endl;
	switch(*s) {
		case INT:
		case PLUS: {
			Entier* s1 = ((Entier*) automate.popSymbol());
			automate.reduction(1, new Expr(s1->getValue()));
			break;
		}
		case MULT: {
			Entier* s1 = ((Entier*) automate.popSymbol());
			automate.reduction(1,  new Expr(s1->getValue()));
			break;
		}
		case OPENPAR: {}
		case CLOSEPAR: {
			Entier* s1 = ((Entier*) automate.popSymbol());
			automate.reduction(1,  new Expr(s1->getValue()));
			break;
		}
		case FIN: {
			Entier* s1 = ((Entier*) automate.popSymbol());
			automate.reduction(1,  new Expr(s1->getValue()));
			break;
		}
		case EXPR: {}
		case ERREUR: {
			break;
		}
	}
	return false;
}

E3::~E3() {}
