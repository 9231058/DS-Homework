OBJ=main.o
CCFLAGS=-std=c++1y

BST: $(OBJ)
	g++ $(CCFLAGS) -o BST $(OBJ)
main.o: main.cpp BST.h
	g++ $(CCFLAGS) -c main.cpp
