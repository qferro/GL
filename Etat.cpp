#include <string>
#include <iostream>
using namespace std;

#include "Etat.h"

Etat::Etat() {
	name = "undefined";
}

Etat::Etat(string aName) {
	name = aName;
}

Etat::Etat(const Etat &unEtat) {}

void Etat::print() const {
	cout << "Etat: " + name << endl;
}

string Etat::getName() {
	return name;
}

Etat::~Etat() {}