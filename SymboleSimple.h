#if ! defined ( SYMBOLESIMPLE_H )
#define SYMBOLESIMPLE_H

#pragma once

#include "Symbole.h"

class SymboleSimple : public Symbole 
{

   public:
      
      Symbole(int i) : ident(i), terminal(true) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      bool isTerminal() { return terminal; }
      void Affiche();

   protected:
};

#endif