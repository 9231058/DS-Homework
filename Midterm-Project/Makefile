OBJ=Service.o Agency.o Request.o main.o
CCFLAGS=-Wall

Midterm-Project:  $(OBJ)
	g++ $(CCFLAGS) -o Midterm-Project $(OBJ)
main.o:	main.cpp Service.h Agency.h List.h MaxHeap.h Request.h
	g++ $(CCFLAGS) -c main.cpp
Service.o: Service.cpp Service.h
	g++ $(CCFLAGS) -c Service.cpp
Agency.o: Agency.cpp Agency.h
	g++ $(CCFLAGS) -c Agency.cpp
Request.o: Request.h Request.cpp
	g++ $(CCFLAGS) -c Request.cpp
