#include <iostream>
#include "Lexer.h"
#include "Automate.h"


int main(int argc, char *argv[]) {
	string chaine(argv[1]);

  	Lexer l(chaine);
	
	Automate* a = new Automate(&l);
	
	a->exec();
	
   	return 0;
}