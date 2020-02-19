#if ! defined ( EXPRMULT_H )
#define EXPRMULT_H

#include "Expr.h"

class ExprMult : public Expr 
{
	public :
		
		ExprMult(Expr* e1, Expr* e2) : Expr(e1->getValue()*e2->getValue()) {}
		
		virtual ~ExprMult() {}
		
		//virtual double eval(const map<string,double>& valeurs);
		
};

#endif