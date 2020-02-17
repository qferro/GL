#include <iostream>
#include "Lexer.h"
#include "Automate.h"


int main(void) {
   string chaine("(1+34)*123");

   Lexer l(chaine);
	
	Automate* a = new Automate();
	
   Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
   }
	a->getCurrentState();
   return 0;
}

