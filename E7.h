#if ! defined ( E7_H )
#define E7_H

#include "Etat.h"

class E7 : public Etat 
{

public:
	E7();

	virtual ~E7();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif