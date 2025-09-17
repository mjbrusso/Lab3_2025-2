CC=g++
FLAGS=-O2 -Wall

all: pet.o dog.o cat.o pets

pet.o:	pet.hpp pet.cpp
	${CC} ${FLAGS} -c pet.cpp

dog.o:	dog.hpp dog.cpp pet.hpp
	${CC} ${FLAGS} -c dog.cpp

cat.o:	cat.hpp cat.cpp pet.hpp
	${CC} ${FLAGS} -c cat.cpp

pets: main.cpp pet.o 
	${CC} ${FLAGS} main.cpp pet.o dog.o cat.o -o pets

clean:
	rm -f *.o pets