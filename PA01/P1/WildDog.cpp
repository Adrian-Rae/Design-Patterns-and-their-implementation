#include "WildDog.h"
#include <iostream>
using namespace std;

WildDog::WildDog(string method, string speciality):Predator(method, speciality, 6, 3){}

bool WildDog::catchPrey(Prey* p){
	cout<<
		"The wild dog howls as it measures up the "
		<<p->getType()
		<<"."<<endl;
	p->run();
}

bool WildDog::getAttacked(Prey* p){
	bool killed = false;
	if(p->fight() > 0){
		int predHealth = this->getHP();
		int damage = p->getDamage(); 		
		predHealth -= damage;
		this->setHP(predHealth);
		cout<<"The "<<p->getType()<<" rams into the wild dog removing "<<damage<<" health points."<<endl;
		killed = (predHealth<=0)?true:false;
	}
	return killed;	
}

bool WildDog::attack(Prey* p){
	int remHP = p->takeDamage(this->getDamage());
	cout<<"The wild dog's "<<this->getMethod()<<" pays off leaving its "
	<<p->getType()<<" with "<<p->getHP()<<" health points left."<<endl;	
	return (remHP<=0)?true:false;	
}

void WildDog::die(){
	cout<<"No more hunting for this old dog."<<endl;	
}

void WildDog::speciality(){
	this->setDamage(int(1.1*this->getDamage()));
	cout<<"The wild dog plays dead before using "
	<<this->getSpeciality()<<"."<<endl;	
}


