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

E1::E1() {
	name ="E1";
}
	
void E1::print() const {
}

bool E1::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
			transition(automate, new Symbole(ERREUR, false));
			break;
		case PLUS:
			automate.decalage(s, new E4);
			break;
		case MULT:
			automate.decalage(s, new E5);
			break;
		case OPENPAR:
			transition(automate, new Symbole(ERREUR, false));
			break;
		case CLOSEPAR:
			transition(automate, new Symbole(ERREUR, false));
			break;
		case FIN:
			automate.accepter();
			return true;
		case EXPR:
			transition(automate, new Symbole(ERREUR, false));
			break;
		case ERREUR:
			cout << endl;
			cout << "Erreur. Veuillez vérifier votre entrée." << endl;
			cout << endl;
			automate.dequeuAll();
			break;
	}
	return false;
}

E1::~E1() {}