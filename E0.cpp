#include <iostream>

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


using namespace std;

E0::E0() {
	name = "E0";
}
	
void E0::print() const {
	cout << "Etat: " + name << endl;
}

bool E0::transition(Automate &automate, Symbole *s) {
	switch(*s) {
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
			break;
	}
	return false;
}

E0::~E0() {}