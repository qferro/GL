#if ! defined ( E8_H )
#define E8_H

#include "etat.h"

class E8 : public Etat 
{

public:
	E8(string name);

	virtual ~E8();
	
	void print() const;
	
	bool transition(Automate & automate, Symbole*s) = 0;

protected:
};
