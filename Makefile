all: main.o arraywork.o statarray.o task_2.o sorts.o testsorts.o
	g++ main.o arraywork.o statarray.o task_2.o sorts.o testsorts.o

main.o: main.cpp
	g++ -c main.cpp

arraywork.o: arraywork.cpp
	g++ -c arraywork.cpp

statarray.o : statarray.cpp
	g++ -c statarray.cpp

task_2.o: task_2.cpp
	g++ -c task_2.cpp

sorts.o: sorts.cpp
	g++ -c sorts.cpp

testsorts.o: testsorts.cpp
	g++ -c testsorts.cpp


clean:
	rm -rf *.o a.out