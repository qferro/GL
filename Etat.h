#if ! defined ( ETAT_H )
#define ETAT_H

#include <string>
#include "Automate.h"
#include "Symbole.h"

class Automate;

class Etat {

public:
	
	Etat();
		
	Etat(std::string name);
	
	Etat(const Etat &unEtat);

	virtual~Etat();
	
	void print() const;
	
	virtual bool transition(Automate &automate, Symbole*s) = 0;
	
	std::string getName();

protected:
	string name;
	
};

#endif