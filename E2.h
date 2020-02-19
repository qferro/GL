#if ! defined ( E2_H )
#define E2_H

#include "Etat.h"

class E2 : public Etat 
{

public:
	E2();

	virtual ~E2();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif