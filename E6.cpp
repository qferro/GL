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

E6::E6() {
	name ="E6";
}
	
void E6::print() const {
	cout << "Etat: " + name << endl;
}

bool E6::transition(Automate &automate, Symbole *s) {
	cout << "E6" << endl;
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
			break;
	}
	return false;
}

E6::~E6() {}