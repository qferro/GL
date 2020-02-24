#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

#include <iostream>
#include <vector>
#include <string>

#include "Symbole.h"
#include "Lexer.h"
#include "Etat.h"

class Etat;

class Automate {

public :

	Automate(Lexer* lexer);
	
	void decalage(Symbole *s, Etat *e);
	
	void reduction(int n, Symbole *s);
	
	void exec();
	
	void pushSymbol(Symbole* s);

	Symbole* popSymbol();

	void popAndDestroySymbol();
	
	void accepter();
	
	Etat* getCurrentState();
	
	void dequeuAll();
	
	void print_deque_symbole();
		
	void print_deque_state();

	virtual ~Automate();

private :
	vector<Symbole*> symbolstack;
	vector<Etat*> statestack;
	Lexer* lexer;
	bool achieved;

};

#endif