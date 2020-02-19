#if ! defined ( E8_H )
#define E8_H

#include "Etat.h"

class E8 : public Etat 
{

public:
	E8();

	virtual ~E8();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s);

protected:
};

#endif