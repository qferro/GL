#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

#include <iostream>
#include <vector>
#include <string>
#include "Etat.h"
#include "Symbole.h"
#include "Lexer.h"

class Automate {

public :
	Automate();
	
	void decalage(Symbole *s, Etat *e);
	
	void reduction(int n, Symbole *s);

	void popSymbol();

	void popAndDestroySymbol();
	
	void accepter();
	
	Etat* getCurrentState();

	virtual ~Automate();

private :
	vector<Symbole*> symbolstack;
	vector<Etat*> statestack;

};

#endif