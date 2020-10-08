main: main.o Predator.o Cheetah.o Lion.o Wolf.o WildDog.o Prey.o PredatorFactory.o LionFactory.o WolfFactory.o WildDogFactory.o CheetahFactory.o PreyState.o PreyBackup.o PreyStore.o PredatorState.o PredatorBackup.o PredatorStore.o
	g++ main.o Predator.o Cheetah.o Lion.o Wolf.o WildDog.o Prey.o PredatorFactory.o LionFactory.o WolfFactory.o WildDogFactory.o CheetahFactory.o PreyState.o PreyBackup.o PreyStore.o PredatorState.o PredatorBackup.o PredatorStore.o -o main

main.o: main.cpp Cheetah.h Lion.h Wolf.h WildDog.h Prey.h PredatorFactory.h Predator.h LionFactory.h WolfFactory.h WildDogFactory.h CheetahFactory.h PreyState.h PreyBackup.h PreyStore.h PredatorState.h PredatorBackup.h PredatorStore.h
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

PredatorFactory.o: PredatorFactory.cpp PredatorFactory.h Predator.h
	g++ -c PredatorFactory.cpp
CheetahFactory.o: CheetahFactory.cpp CheetahFactory.h PredatorFactory.h Cheetah.h
	g++ -c CheetahFactory.cpp
LionFactory.o: LionFactory.cpp LionFactory.h PredatorFactory.h Lion.h
	g++ -c LionFactory.cpp
WildDogFactory.o: WildDogFactory.cpp WildDogFactory.h PredatorFactory.h WildDog.h
	g++ -c WildDogFactory.cpp
WolfFactory.o: WolfFactory.cpp WolfFactory.h PredatorFactory.h Wolf.h
	g++ -c WolfFactory.cpp
	
PreyState.o: PreyState.cpp PreyState.h
	g++ -c PreyState.cpp
PredatorState.o: PredatorState.cpp PredatorState.h
	g++ -c PredatorState.cpp	
PreyBackup.o: PreyBackup.cpp PreyBackup.h
	g++ -c PreyBackup.cpp
PredatorBackup.o: PredatorBackup.cpp PredatorBackup.h
	g++ -c PredatorBackup.cpp	
PreyStore.o: PreyStore.cpp PreyStore.h
	g++ -c PreyStore.cpp
PredatorStore.o: PredatorStore.cpp PredatorStore.h
	g++ -c PredatorStore.cpp		

	
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
