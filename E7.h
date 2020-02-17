#if ! defined ( E7_H )
#define E7_H

#include "etat.h"

class E7 : public Etat 
{

public:
	E7(string name);

	virtual ~E7();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};
