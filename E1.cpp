#include "E1.h"
#include <iostream>

using namespace std;

E1::E1(string aName) {
	if(aName != nullptr) {
		name = eName;
	} else {
		cout << "erreur dans la construction" << endl;
	}
};
	
void E1::print() const {
	cout << "Etat: " + name << endl;
};

bool E1::transition(Automate &automate, Symbole *s) {
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
		case FIN:
			automate.accepter();
			break;
		case EXPR:
		case ERREUR:
	}
	return false;
}
};

virtual E1::~E1();
