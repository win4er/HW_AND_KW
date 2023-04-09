all: main.o recursive.o
	g++ -c main.o recursive.o
main.o: main.cpp
	g++ -c main.cpp
recursive.o: recursive.cpp
	g++ -c recursive.cpp
