#include "Wolf.h"
#include <iostream>
using namespace std;

Wolf::Wolf(string method, string speciality):Predator(method, speciality, 8, 2){}

bool Wolf::catchPrey(Prey* p){
	cout<<
		"The wolf sneaks up to the "
		<<p->getType()
		<<"."<<endl;
	p->run();
}

bool Wolf::getAttacked(Prey* p){
	bool killed = false;
	if(p->fight() > 0){
		int predHealth = this->getHP();
		int damage = p->getDamage(); 		
		predHealth -= damage;
		this->setHP(predHealth);
		cout<<"The "<<p->getType()<<" spots the wolf, jumps onto it's back imposing "<<damage<<" damage."<<endl;
		killed = (predHealth<=0)?true:false;
	}
	return killed;	
}

bool Wolf::attack(Prey* p){
	int remHP = p->takeDamage(this->getDamage());
	cout<<"The wolf's "<<this->getMethod()<<" caused "<<this->getDamage()
	<<" damage to the "<<p->getType()<<"."<<endl;	
	return (remHP<=0)?true:false;	
}

void Wolf::die(){
	cout<<"Why so afraid of the big bad wolf?"<<endl;	
}

void Wolf::speciality(){
	this->setDamage(int(1.1*this->getDamage()));
	cout<<"The wolf cunningly uses "
	<<this->getSpeciality()<<"."<<endl;	
}


