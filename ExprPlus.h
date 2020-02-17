#if ! defined ( EXPRPLUS_H )
#define EXPRPLUS_H

#include "ExprBin.h"

class ExprPlus : public ExprBin
{

public :
	ExprPlus(Expr * s1, Expr * s2);
	~ExprPlus()
	void affiche() const;
};

#endif