#if ! defined ( E0_H )
#define E0_H

#include "Etat.h"

class E0 : public Etat 
{

public:
	E0();

	virtual ~E0();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};

#endif