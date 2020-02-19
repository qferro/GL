#if ! defined ( E5_H )
#define E5_H

#include "Etat.h"

class E5 : public Etat 
{

public:
	E5();

	virtual ~E5();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif