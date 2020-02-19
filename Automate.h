#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

using namespace std;

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

	void popSymbol();

	void popAndDestroySymbol();
	
	void accepter();
	
	Etat* getCurrentState();

	virtual ~Automate();

private :
	vector<Symbole*> symbolstack;
	vector<Etat*> statestack;
	Lexer* lexer;

};

#endif