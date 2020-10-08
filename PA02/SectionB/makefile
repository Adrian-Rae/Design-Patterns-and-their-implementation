main: main.o Image.o BaseImage.o ImageAdditions.o ImageElement.o Mask.o TemperatureCheck.o UseHandSanitiser.o WashHands.o
	g++ main.cpp Image.o BaseImage.o ImageAdditions.o ImageElement.o Mask.o TemperatureCheck.o UseHandSanitiser.o WashHands.o -o main
	
Image.o: Image.cpp Image.h
	g++ -c Image.cpp

BaseImage.o: BaseImage.cpp BaseImage.h
	g++ -c BaseImage.cpp	
	
ImageAdditions.o: ImageAdditions.cpp ImageAdditions.h
	g++ -c ImageAdditions.cpp
	
ImageElement.o: ImageElement.cpp ImageElement.h
	g++ -c ImageElement.cpp
	
Mask.o: Mask.cpp Mask.h
	g++ -c Mask.cpp
	
TemperatureCheck.o: TemperatureCheck.cpp TemperatureCheck.h
	g++ -c TemperatureCheck.cpp
	
UseHandSanitiser.o: UseHandSanitiser.cpp UseHandSanitiser.h
	g++ -c UseHandSanitiser.cpp
	
WashHands.o: WashHands.cpp WashHands.h
	g++ -c WashHands.cpp
	
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
