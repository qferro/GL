#include "E3.h"
#include <iostream>

using namespace std;

E3::E3(string aName) {
	if(aName != nullptr) {
		name = eName;
	} else {
		cout << "erreur dans la construction" << endl;
	}
};
	
void E3::print() const {
	cout << "Etat: " + name << endl;
};

bool E3::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
		case PLUS:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.reduction(1, s1);
			break;
		case MULT:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.reduction(1, s1);
			break;
		case OPENPAR:
		case CLOSEPAR:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.reduction(1, s1);
			break;
		case FIN:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.reduction(1, s1);
			break;
		case EXPR:
		case ERREUR:
	}
	return false;
}
};

virtual E3::~E3();
