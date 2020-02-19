#if ! defined ( EXPR_H )
#define EXPR_H

#include "Symbole.h"
#include <map>

class Expr : public Symbole 
{
	public : 
		Expr() : Symbole(EXPR, false) {}
		
		void setValue(int val);

		int getValue();
		
		virtual ~Expr() {}

	protected :
		int valeur;
};

#endif