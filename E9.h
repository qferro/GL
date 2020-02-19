#if ! defined ( E9_H )
#define E9_H

#include "Etat.h"

class E9 : public Etat 
{

public:
	E9();

	virtual ~E9();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif