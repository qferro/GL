#if ! defined ( EXPRBIN_H )
#define EXPRBIN_H

#include "Expr.h"

class ExprBin : public Expr
{
	public :
		ExprBin(string anExpression){}
		virtual ~ExprBin(){}
		virtual void Affiche() { cout << anExpression }
};
		
#endif