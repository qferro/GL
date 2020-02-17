#include "Automate.h"
#include <iostream>

using namespace std;

Automate::Automate() {
	statestack.push_back(new E0());
};

void Automate::decalage(Symbole *s, Etat *e) {
	symbolstack.push_back(s);
	statestack.push_back(e);
	if(s->isTerminal()) {
		lexer->Avancer();
	}
}

void Automate::reduction(int n, Symbole *s) {
	for(int i=0 ; i<n ; i++) {
		delete(statestack.back());
		statestack.pop_back();
	}
	statestack.back()->transition(*this,s);
}

void Automate::popSymbol() {
	symbolstack.pop_back();
}

void Automate::popSymbolAndDestroy() {
	delete(statestack.back());
	symbolstack.pop_back();
}

void Automate::accepter() {
	cout << "Analyse terminée" << endl;
}

Etat* Automate::getCurrentState() {
	return statestack.back();
}


