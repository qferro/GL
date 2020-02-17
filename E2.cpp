#include "E2.h"
#include <iostream>

using namespace std;

E2::E2(string aName) {
	if(aName != nullptr) {
		name = eName;
	} else {
		cout << "erreur dans la construction" << endl;
	}
};
	
void E2::print() const {
	cout << "Etat: " + name << endl;
};

bool E2::transition(Automate &automate, Symbole *s) {
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
			automate.decalage(s, new E6);
			break;
		case ERREUR:
	}
	return false;
}
};

virtual E2::~E2();
