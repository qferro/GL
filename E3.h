#if ! defined ( E4_H )
#define E4_H

#include "etat.h"

class E3 : public Etat 
{

public:
	E3(string name);

	virtual ~E3();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};

#endif