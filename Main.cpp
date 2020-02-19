#include <iostream>
#include "Lexer.h"
#include "Automate.h"


int main(void) {
	string chaine("(1+30)*2+5*((3+2)*5)");

  	Lexer l(chaine);
	
	Automate* a = new Automate(&l);
	
	a->exec();
	
   	return 0;
}