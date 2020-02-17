#if ! defined ( E5_H )
#define E5_H

#include "etat.h"

class E5 : public Etat 
{

public:
	E5(string name);

	virtual ~E5();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};

#endif