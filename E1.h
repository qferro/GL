#if ! defined ( E1_H )
#define E1_H

#include "etat.h"

class E1 : public Etat 
{

public:
	E1(string name);

	virtual ~E1();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};

#endif