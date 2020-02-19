#if ! defined ( E6_H )
#define E6_H

#include "Etat.h"

class E6 : public Etat 
{

public:
	E6();

	virtual ~E6();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif