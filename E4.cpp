#include "E4.h"
#include <iostream>

using namespace std;

E4::E4(string aName) {
	if(aName != nullptr) {
		name = eName;
	} else {
		cout << "erreur dans la construction" << endl;
	}
};
	
void E4::print() const {
	cout << "Etat: " + name << endl;
};

bool E4::transition(Automate &automate, Symbole *s) {
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
			automate.decalage(s, new E7);
			break;
		case ERREUR:
	}
	return false;
}
};

virtual E4::~E4();
