#include "Cheetah.h"
#include <iostream>
using namespace std;

Cheetah::Cheetah(string method, string speciality):Predator(method, speciality, 11, 4){}

bool Cheetah::catchPrey(Prey* p){
	cout<<
		"The cheetah sprints forward with its eye on the "
		<<p->getType()
		<<"."<<endl;
	p->run();
}

bool Cheetah::getAttacked(Prey* p){
	bool killed = false;
	if(p->fight() > 0){
		int predHealth = this->getHP();
		int damage = p->getDamage(); 		
		predHealth -= damage;
		this->setHP(predHealth);
		cout<<"The "<<p->getType()<<" side steps the cheetah, kicks back and causes "<<damage<<" damage in the process."<<endl;
		killed = (predHealth<=0)?true:false;
	}
	return killed;	
}

bool Cheetah::attack(Prey* p){
	int remHP = p->takeDamage(this->getDamage());
	cout<<"The cheetah causes "<<this->getDamage()<<
	" damage to the "	<<p->getType()<<" by using "
	<<this->getMethod()<<"."<<endl;	
	return (remHP<=0)?true:false;	
}

void Cheetah::die(){
	cout<<"The hunter becomes the hunted."<<endl;	
}

void Cheetah::speciality(){
	this->setDamage(int(1.1*this->getDamage()));
	cout<<"The tired cheetah uses "
	<<this->getSpeciality()<<"."<<endl;	
}


