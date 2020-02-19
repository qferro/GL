#if ! defined ( EXPR_H )
#define EXPR_H

#include "Symbole.h"
#include <map>

class Expr : public Symbole 
{
	public : 
		Expr(int val) : Symbole(EXPR, false), valeur(val) {}
		
		void setValue(int val);

		int getValue();
		
		void Affiche();
		
		virtual ~Expr() {}

	protected :
		int valeur;
};

#endif