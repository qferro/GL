#if ! defined ( E9_H )
#define E9_H

#include "etat.h"

class E9 : public Etat 
{

public:
	E9(string name);

	virtual ~E9();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};
