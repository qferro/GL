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

E2::E2() {
	name ="E2";
}
	
void E2::print() const {
}

bool E2::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
			automate.decalage(s, new E3);
			break;
		case PLUS:
			transition(automate, new Symbole(ERREUR, false));
			break;
		case MULT:
			transition(automate, new Symbole(ERREUR, false));
			break;
		case OPENPAR:
			automate.decalage(s, new E2);
			break;
		case CLOSEPAR:
			transition(automate, new Symbole(ERREUR, false));
			break;
		case FIN:
			transition(automate, new Symbole(ERREUR, false));
			break;
		case EXPR:
			automate.decalage(s, new E6);
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

E2::~E2() {}
