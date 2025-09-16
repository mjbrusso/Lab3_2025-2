CC=g++
FLAGS=-O2

all: pet.o pets

pet.o:	pet.hpp pet.cpp
	${CC} ${FLAGS} -c pet.cpp

pets: main.cpp pet.o 
	${CC} ${FLAGS} main.cpp pet.o -o pets

clean:
	rm -f *.o pets