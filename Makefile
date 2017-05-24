all: programa

programa: main.o point.o
	g++ main.o point.o -o programa

main.o: main.cpp
	g++ -c main.cpp

point.o: point.cpp
	g++ -c point.cpp 

clean: 
	rm -rf *o programa