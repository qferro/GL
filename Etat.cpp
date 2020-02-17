#include <string>
#include <iostream>
using namespace std;

#include "Etat.h"

Etat::Etat(string name) {};

Etat::Etat(const Etat &unEtat) {};

string Etat::getName() {
	return name;
}

Etat::~Etat() {};

};
