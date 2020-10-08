main: BorderGuard.o Human.o Observers.o PrisonArea.o Prisoner.o Subject.o
	g++ main.cpp BorderGuard.o Human.o Observers.o PrisonArea.o Prisoner.o Subject.o -o main 
	
Pandemic.o: Pandemic.cpp Pandemic.h
	g++ -c Pandemic.cpp
	
BorderGuard.o: BorderGuard.cpp BorderGuard.h
	g++ -c BorderGuard.cpp

Human.o: Human.cpp Human.h
	g++ -c Human.cpp

Observers.o: Observers.cpp Observers.h
	g++ -c Observers.cpp

PrisonArea.o: PrisonArea.cpp PrisonArea.h
	g++ -c PrisonArea.cpp

Prisoner.o: Prisoner.cpp Prisoner.h
	g++ -c Prisoner.cpp

Subject.o: Subject.cpp Subject.h
	g++ -c Subject.cpp
	
run:
	./main

clean:
	rm -rf *o main *.tar
	
tar:
	tar -cvz -f PA03.tar *.h *.cpp makefile
	
all:
	
	make tar
	make clean
	make 
	make tar
	make run
