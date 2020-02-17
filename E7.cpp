#include "E7.h"
#include <iostream>

using namespace std;

E7::E7(string aName) {
	if(aName != nullptr) {
		name = eName;
	} else {
		cout << "erreur dans la construction" << endl;
	}
};
	
void E7::print() const {
	cout << "Etat: " + name << endl;
};

bool E7::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
		case PLUS:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprPlus(s2,s1));
			break;
		case MULT:
			automate.decalage(s, new E5);
			break;
		case OPENPAR:
		case CLOSEPAR:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprPlus(s2,s1));
			break;
		case FIN:
			Expr* s1 = (Expr*) automate.popSymbol();
			automate.popAndDestroySymbol();
			Expr*s2 = (Expr*) automate.popSymbol();
			automate.reduction(3, new ExprPlus(s2,s1));
			break;
		case EXPR:
		case ERREUR:
	}
	return false;
}
};

virtual E7::~E7();
