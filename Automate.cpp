#include "Automate.h"
#include "Expr.h"
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

void Automate::exec() {
	
	Symbole* s;
	while(statestack.size() != 0) {
		s = lexer->Consulter();
		s->Affiche();
		cout << endl;
		print_deque_symbole();
		cout << endl;
		print_deque_state();
		cout << endl;
		if(this->getCurrentState()->transition(*this, s)) { break; }
		cout<<endl;
	}
	cout << endl;
	cout << symbolstack.size() << endl;
	cout << endl;
	cout << "Result : " << ((Entier*)symbolstack.back())->getValue() << endl;
}

void Automate::pushSymbol(Symbole* s) {
	symbolstack.push_back(s);
}

Symbole* Automate::popSymbol() {
	Symbole* s = symbolstack.back();
	symbolstack.pop_back();
	return s;
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

void Automate::print_deque_symbole() {
	for(vector<Symbole*>::iterator it = symbolstack.begin() ; it!=symbolstack.end(); ++it) {
		cout << ' ';
		(*it)->Affiche();
	}
}

void Automate::print_deque_state() {
	for(vector<Etat*>::iterator it = statestack.begin() ; it!=statestack.end(); ++it) {
		cout << ' ';
		(*it)->print();
	}
}

Automate::~Automate() {}