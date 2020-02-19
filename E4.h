#if ! defined ( E4_H )
#define E4_H

#include "Etat.h"

class E4 : public Etat 
{

public:
	E4();

	virtual ~E4();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif