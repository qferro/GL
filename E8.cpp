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
}

bool E8::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT: {
			transition(automate, new Symbole(ERREUR, false));
			break;
		}
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
		case OPENPAR: {
			transition(automate, new Symbole(ERREUR, false));
			break;
		}
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

E8::~E8() {}