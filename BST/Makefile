OBJ=main.o
GCC=g++ -std=c++1y

BST: main.o
	${GCC} -o BST ${OBJ}
main.o: main.cpp BST.h
	${GCC} -c main.cpp
