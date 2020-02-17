#if ! defined ( E2_H )
#define E2_H

#include "etat.h"

class E2 : public Etat 
{

public:
	E2(string name);

	virtual ~E2();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};

#endif