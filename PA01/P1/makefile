main: main.o Predator.o Prey.o Cheetah.o Lion.o WildDog.o Wolf.o
	g++ main.o Predator.o Prey.o Cheetah.o Lion.o WildDog.o Wolf.o -o main

main.o: main.cpp Predator.h Prey.h Cheetah.h Lion.h WildDog.h Wolf.h
	g++ -c main.cpp

Predator.o: Predator.cpp Predator.h
	g++ -c Predator.cpp
Cheetah.o: Cheetah.cpp Cheetah.h
	g++ -c Cheetah.cpp
Lion.o: Lion.cpp Lion.h
	g++ -c Lion.cpp
WildDog.o: WildDog.cpp WildDog.h
	g++ -c WildDog.cpp
Wolf.o: Wolf.cpp Wolf.h
	g++ -c Wolf.cpp
	
Prey.o: Prey.cpp Prey.h
	g++ -c Prey.cpp
	
run:
	./main

clean:
	rm -rf *o main *.tar
	
tar:
	tar -cvz -f PA01.tar *.h *.cpp makefile
	
all:
	make clean
	make 
	make tar
	make run
