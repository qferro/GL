ECHO = echo
RM = rm
COMP = g++
EDL = g++
INT = Main.h lexer.h Symbole.h Automate.h Etat.h E0.h
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