#if ! defined ( E0_H )
#define E0_H

#include "Etat.h"
#include "Symbole.h"

class E0 : public Etat
{

public:
	E0();

	virtual ~E0();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif