main: main.o Pandemic.o LevelState.o  NoLevelState.o LevelOneState.o LevelTwoState.o LevelThreeState.o LevelFourState.o LevelFiveState.o PandemicStrategy.o LevelOneStrategy.o LevelTwoStrategy.o LevelThreeStrategy.o LevelFourStrategy.o LevelFiveStrategy.o
	g++ main.cpp Pandemic.o NoLevelState.o  LevelState.o LevelOneState.o LevelTwoState.o LevelThreeState.o LevelFourState.o LevelFiveState.o PandemicStrategy.o LevelOneStrategy.o LevelTwoStrategy.o LevelThreeStrategy.o LevelFourStrategy.o LevelFiveStrategy.o -o main
	
Pandemic.o: Pandemic.cpp Pandemic.h
	g++ -c Pandemic.cpp
	
LevelState.o: LevelState.cpp LevelState.h
	g++ -c LevelState.cpp 
	
LevelOneState.o: LevelOneState.cpp LevelOneState.h 
	g++ -c LevelOneState.cpp
	
LevelTwoState.o: LevelTwoState.cpp LevelTwoState.h 
	g++ -c LevelTwoState.cpp
	
LevelThreeState.o: LevelThreeState.cpp LevelThreeState.h 
	g++ -c LevelThreeState.cpp
	
LevelFourState.o: LevelFourState.cpp LevelFourState.h 
	g++ -c LevelFourState.cpp
	
LevelFiveState.o: LevelFiveState.cpp LevelFiveState.h 
	g++ -c LevelFiveState.cpp
	
NoLevelState.o: NoLevelState.cpp NoLevelState.h
	g++ -c NoLevelState.cpp
	
PandemicStrategy.o: PandemicStrategy.cpp PandemicStrategy.h
	g++ -c PandemicStrategy.cpp 
	
LevelOneStrategy.o: LevelOneStrategy.cpp LevelOneStrategy.h 
	g++ -c LevelOneStrategy.cpp
	
LevelTwoStrategy.o: LevelTwoStrategy.cpp LevelTwoStrategy.h 
	g++ -c LevelTwoStrategy.cpp
	
LevelThreeStrategy.o: LevelThreeStrategy.cpp LevelThreeStrategy.h 
	g++ -c LevelThreeStrategy.cpp
	
LevelFourStrategy.o: LevelFourStrategy.cpp LevelFourStrategy.h 
	g++ -c LevelFourStrategy.cpp
	
LevelFiveStrategy.o: LevelFiveStrategy.cpp LevelFiveStrategy.h 
	g++ -c LevelFiveStrategy.cpp
	
	
run:
	./main

clean:
	rm -rf *o main *.tar
	
tar:
	tar -cvz -f PA02.tar *.h *.cpp makefile
	
all:
	
	make tar
	make clean
	make 
	make tar
	make run
