#if ! defined ( EXPR_H )
#define EXPR_H

#include "Symbole.h"

class Expr : public Symbole 
{
	public : 
		Expr() : Symbole(EXPR,false) {}
		virtual~Expr() {}
		virtual double eval(constmap<string,double>& valeurs) = 0;

	protected :
		string expression;
		
};
