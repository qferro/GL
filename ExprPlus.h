#if ! defined ( EXPRPLUS_H )
#define EXPRPLUS_H

#include "Expr.h"

class ExprPlus : public Expr
{

public :
	ExprPlus(Expr * s1, Expr * s2);
	
	virtual ~ExprPlus() {}
	
	void affiche() const;
};

#endif