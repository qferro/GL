#include "Automate.h"
#include <iostream>

#include "E0.h"

using namespace std;

Automate::Automate(Lexer* lexer2) {
	lexer = lexer2;
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

void Automate::popAndDestroySymbol() {
	delete(statestack.back());
	symbolstack.pop_back();
}

void Automate::accepter() {
	cout << "Analyse terminée" << endl;
}

Etat* Automate::getCurrentState() {
	return statestack.back();
}

Automate::~Automate() {}