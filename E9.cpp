#include "E9.h"
#include <iostream>

using namespace std;

E9::E9(string aName) {
	if(aName != nullptr) {
		name = eName;
	} else {
		cout << "erreur dans la construction" << endl;
	}
};
	
void E9::print() const {
	cout << "Etat: " + name << endl;
};

bool E9::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
		case PLUS:
			automate.popAndDestroySymbol();
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			automate.reduction(3, s1);
			break;
		case MULT:
			automate.popAndDestroySymbol();
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			automate.reduction(3, s1);
			break;
		case OPENPAR:
		case CLOSEPAR:
			automate.popAndDestroySymbol();
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			automate.reduction(3, s1);
			break;
		case FIN:
			automate.popAndDestroySymbol();
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			automate.reduction(3, s1);
			break;
		case EXPR:
		case ERREUR:
	}
	return false;
}
};

virtual E9::~E9();
