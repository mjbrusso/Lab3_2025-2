CXX=g++
CXXFLAGS= -O2 -Wall -Wextra

all: point2D.o point3D.o main.o program

point2D.o: point2D.hpp point2D.cpp
	${CXX} ${CXXFLAGS} -c point2D.cpp

point3D.o: point3D.hpp point3D.cpp
	${CXX} ${CXXFLAGS} -c point3D.cpp

main.o: main.cpp point2D.hpp point3D.hpp
	${CXX} ${CXXFLAGS} -c main.cpp

program: point2D.o point3D.o main.o
	${CXX} point2D.o point3D.o main.o -o program

clean:
	rm -f *.o program
	