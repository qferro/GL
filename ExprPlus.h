#if ! defined ( EXPRPLUS_H )
#define EXPRPLUS_H

#include "Expr.h"

class ExprPlus : public Expr
{

public :
	ExprPlus(Expr * s1, Expr * s2) : Expr(s1->getValue()+s2->getValue()) {}
	
	virtual ~ExprPlus() {}
	
	void affiche();
	
};

#endif