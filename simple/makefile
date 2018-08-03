# http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
# http://www.cs.uleth.ca/~bomhof/cs1620A/tutorials/MakefileNotes.html

IDIR =../include
CC=g++
CFLAGS=-O3 -Wall -std=c++17 -I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS=birthday.h person.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

OBJ=main.o birthday.o person.o
# OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o *~ 