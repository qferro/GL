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
#include "ExprPlus.h"

E7::E7() {
	name ="E7";
}
	
void E7::print() const {
}

bool E7::transition(Automate &automate, Symbole *s) {
	switch(*s) {
		case INT: {
			transition(automate, new Symbole(ERREUR, false));
			break;
		}
		case PLUS: {
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popAndDestroySymbol();
			Expr* s2 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.reduction(3, new ExprPlus(s1,s2));
			break;
		}
		case MULT: {
			automate.decalage(s, new E5);
			break;
		}
		case OPENPAR: {
			transition(automate, new Symbole(ERREUR, false));
			break;
		}
		case CLOSEPAR: {
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popAndDestroySymbol();
			Expr* s2 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.reduction(3, new ExprPlus(s1,s2));
			break;
		}
		case FIN: {
			Expr* s1 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.popAndDestroySymbol();
			Expr* s2 = new Expr(((Entier*) automate.popSymbol())->getValue());
			automate.reduction(3, new ExprPlus(s1,s2));
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

E7::~E7() {}