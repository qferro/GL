#include "Symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
   	/*switch(ident){
		case 0:
			cout << "(";
			break;
		case 1:
			cout << ")";
			break;
		case 2:
			cout << "+";
			break;
		case 3: 
			cout << "*";
			break;
		case 4:
			cout << valeur;
			break;
		case 5:
			cout << "$";
			break;
		case 6:
			cout << "Erreur";
			break;
	}*/
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

