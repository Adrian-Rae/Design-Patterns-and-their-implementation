#include "Lion.h"
#include <iostream>
using namespace std;

Lion::Lion(string method, string speciality):Predator(method, speciality, 13, 5){}

bool Lion::catchPrey(Prey* p){
	cout<<
		"The lion pounces into action to catch the "
		<<p->getType()
		<<"."<<endl;
	p->run();
}

bool Lion::getAttacked(Prey* p){
	bool killed = false;
	if(p->fight() > 0){
		int predHealth = this->getHP();
		int damage = p->getDamage(); 		
		predHealth -= damage;
		this->setHP(predHealth);
		cout<<"The "<<p->getType()<<" stands on the lions tail inflicting "<<damage<<" damage!"<<endl;
		killed = (predHealth<=0)?true:false;
	}
	return killed;	
}

bool Lion::attack(Prey* p){
	int remHP = p->takeDamage(this->getDamage());
	cout<<"The lion uses "<<this->getMethod()<<" to inflict "
	<<this->getDamage()<<" damage on the "
	<<p->getType()<<"."<<endl;	
	return (remHP<=0)?true:false;	
}

void Lion::die(){
	cout<<"Long lived the King."<<endl;	
}

void Lion::speciality(){
	this->setDamage(int(1.1*this->getDamage()));
	cout<<"The injured lion uses "
	<<this->getSpeciality()<<"."<<endl;	
}


