#include "Prisoner.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

Prisoner::Prisoner(int x,int y):Human('X',x,y){
	srand((unsigned) time(0));
}
void Prisoner::setX(int x){
	Human::setX(x);
	notify();
}
void Prisoner::setY(int y){
	Human::setY(y);
	notify();
}
void Prisoner::runTowards(string s){
	if(s=="up"){this->setY(this->getY()+1);}
	else if(s=="down"){this->setY(this->getY()-1);}
	else if(s=="left"){this->setX(this->getX()-1);}
	else if(s=="right"){this->setX(this->getX()+1);}
}
void Prisoner::move(){

	int k = 1+(rand()%4);
	switch(k){
	case 1: runTowards("up"); break;
	case 2: runTowards("down"); break;
	case 3: runTowards("left"); break; 
	case 4: runTowards("right"); break;

	}		
}
