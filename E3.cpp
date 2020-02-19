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

E3::E3() {
	name ="E3";
}
	
void E3::print() const {
	cout << "Etat: " + name << endl;
}

bool E3::transition(Automate &automate, Symbole *s) {
	switch(*s){
		case INT:
		case PLUS:
			/*Expr* s1 = (Expr*) automate.popSymbol();
			automate.reduction(1, s1); */
			break;
		case MULT:
			//Expr* s1 = (Expr*) automate.popSymbol();
			//automate.reduction(1, s1);
			break;
		case OPENPAR:
		case CLOSEPAR:
			//Expr* s1 = (Expr*) automate.popSymbol();
			//automate.reduction(1, s1);
			break;
		case FIN:
			//Expr* s1 = (Expr*) automate.popSymbol();
			//automate.reduction(1, s1);
			break;
		case EXPR:
		case ERREUR:
			break;
	}
	return false;
}

E3::~E3() {}
