#include <iostream>
#include "Lexer.h"
#include "Automate.h"


int main(void) {
	string chaine("2+2");

  	Lexer l(chaine);
	
	Automate* a = new Automate(&l);
	
	a->exec();
	
   	return 0;
}