#if ! defined ( E3_H )
#define E3_H

#include "Etat.h"

class E3 : public Etat 
{

public:
	E3();

	virtual ~E3();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif