#include "E0.h"
#include <iostream>

using namespace std;

E0::E0() {
	name = "E0";
};
	
void E0::print() const {
	cout << "Etat: " + name << endl;
};

bool E0::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
			automate.decalage(s, new E3);
			break;
		case PLUS:
		case MULT:
		case OPENPAR:
			automate.decalage(s, new E2);
			break;
		case CLOSEPAR:
		case FIN:
		case EXPR:
			automate.decalage(s, new E1);
			break;
		case ERREUR:
	}
	return false;
}
};

virtual E0::~E0();
