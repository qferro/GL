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
}

bool E3::transition(Automate &automate, Symbole *s) {
	switch(*s) {
		case INT: {
			transition(automate, new Symbole(ERREUR, false));
			break;
		}
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
		case OPENPAR: {
			transition(automate, new Symbole(ERREUR, false));
			break;
		}
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
		case EXPR: {
			transition(automate, new Symbole(ERREUR, false));
			break;
		}
		case ERREUR: {
			cout << endl;
			cout << "Erreur. Veuillez vérifier votre entrée." << endl;
			cout << endl;
			automate.dequeuAll();
			break;
		}
	}
	return false;
}

E3::~E3() {}
