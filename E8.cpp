#include "E8.h"
#include <iostream>

using namespace std;

E8::E8(string aName) {
	if(aName != nullptr) {
		name = eName;
	} else {
		cout << "erreur dans la construction" << endl;
	}
};
	
void E8::print() const {
	cout << "Etat: " + name << endl;
};

bool E8::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
		case PLUS:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprMult(s2,s1));
			break;
		case MULT:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprMult(s2,s1));
			break;
		case OPENPAR:
		case CLOSEPAR:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprMult(s2,s1));
			break;
		case FIN:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprMult(s2,s1));
			break;
		case EXPR:
		case ERREUR:
	}
	return false;
}
};

virtual E8::~E8();
