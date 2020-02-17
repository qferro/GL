#if ! defined ( ETAT_H )
#define ETAT_H

#include <string>
#include "Automate.h"
using namespace std;

class Etat {

public:
	Etat(string name);

	virtual~Etat();
	
	void print()const;
	
	virtual bool transition(Automate & automate,Symbole*s) = 0;
	
	string getName();

protected:
	string name;

};
