#include "E6.h"
#include <iostream>

using namespace std;

E6::E6(string aName) {
	if(aName != nullptr) {
		name = eName;
	} else {
		cout << "erreur dans la construction" << endl;
	}
};
	
void E6::print() const {
	cout << "Etat: " + name << endl;
};

bool E6::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
		case PLUS:
			automate.decalage(s, new E4);
			break;
		case MULT:
			automate.decalage(s, new E5);
			break;
		case OPENPAR:
		case CLOSEPAR:
			automate.decalage(s, new E9);
			break;
		case FIN:
		case EXPR:
		case ERREUR:
	}
	return false;
}
};

virtual E6::~E6();
