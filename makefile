ECHO = echo
RM = rm
COMP = g++
EDL = g++
INT = Main.h Lexer.h Symbole.h Automate.h Etat.h E0.h E1.h E2.h E3.h E4.h E5.h E6.h E7.h E8.h E9.h Expr.h ExprPlus.h ExprMult.h
REAL = $(INT:.h=.cpp)
OBJ = $(REAL:.cpp=.o)
EXE = prog
LIBS = -lm
CPPFLAGS = -g -Wall -ansi -pedantic -std=c++11
CDFLAGS =
RMFLAGS = 
EFFACE = clean
LIBPATH =
INCPATH = 

$(EXE) : $(OBJ)
	$(ECHO) "Edl de <prog>"
	$(EDL) -o $(EXE) $(LDFLAGS) $(OBJ) $(LIBS)

%.o : %.cpp
	$(ECHO) "Compil de <$<>"
	$(COMP) $(CPPFLAGS) -c $<

Main.o : Main.cpp Main.h

Lexer.o : Lexer.cpp Lexer.h

Symbole.o : Symbole.cpp Symbole.h

Automate.o : Automate.cpp Automate.h

Etat.o : Etat.cpp Etat.h

E0.o : E0.cpp E0.h Etat.h

E1.o : E1.cpp E1.h Etat.h

E2.o : E2.cpp E2.h Etat.h

E3.o : E3.cpp E3.h Etat.h

E4.o : E4.cpp E4.h Etat.h

E5.o : E5.cpp E5.h Etat.h

E6.o : E6.cpp E6.h Etat.h

E7.o : E7.cpp E7.h Etat.h

E8.o : E8.cpp E8.h Etat.h

E9.o : E9.cpp E9.h Etat.h

Expr.o : Expr.cpp Expr.h Symbole.h

ExprPlus.o : ExprPlus.cpp ExprPlus.h Expr.h

ExprMult.o : ExprMult.cpp ExprMult.h Expr.h

clean:
	rm -rf *.o
	
mrproper: clean
	rm -rf prog