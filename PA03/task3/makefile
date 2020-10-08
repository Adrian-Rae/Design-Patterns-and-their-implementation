main: main.o 
	g++ main.cpp -o main 

main.o: main.cpp DynamicArray.h DynamicArray.cpp DynamicArrayIterator.h DynamicArrayIterator.cpp
	g++ -c -o main.o  main.cpp
	
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
