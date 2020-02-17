#pragma once

#include <string>
using namespace std;

#include "SymboleSimple.h"

virtual SymboleSimple::~SymboleSimmple() { }
void SymboleSimple::Affiche(){
	switch(ident){
		case 0:
			cout << "(";
			break;
		case 1:
			cout << ")";
			break;
		case 2:
			cout << "+";
			break;
		case 3: 
			cout << "*";
			break;
		case 4:
			cout << valeur;
			break;
		case 5:
			cout << "$";
			break;
		case 6:
			cout << "Erreur";
			break;
		}
}

   protected:
};

