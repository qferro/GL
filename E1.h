#if ! defined ( E1_H )
#define E1_H

#include "Etat.h"

class E1 : public Etat 
{

public:
	E1();

	virtual ~E1();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif