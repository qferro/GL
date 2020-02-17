#if ! defined ( E6_H )
#define E6_H

#include "etat.h"

class E6 : public Etat 
{

public:
	E6(string name);

	virtual ~E6();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};

#endif