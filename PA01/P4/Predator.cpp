#include "Predator.h"
#include <iostream>
using namespace std;

//constructors and destructors
Predator::Predator(){cout<<"Predator Created."<<endl;}
Predator::Predator(string method, string speciality, int HP, int damage){
	this->HP = HP;
	this->method = method;
	this->damage = damage;
	this->specialityName = speciality;
	cout<<"Predator Created."<<endl;
}
Predator::~Predator(){cout<<"Predator Destroyed."<<endl;}

//getters and setters
int Predator::getHP(){return this->HP;}
void Predator::setHP(int HP){this->HP=HP;}

string Predator::getMethod(){return this->method; }
void Predator::setMethod(string method){this->method = method; }

int Predator::getDamage(){return this->damage; }
void Predator::setDamage(int damage){this->damage = damage; }

string Predator::getSpeciality(){return this->specialityName; }
void Predator::setSpeciality(string speciality){this->specialityName = speciality; }

//methods
void Predator::hunt(Prey* p){
	while(this->HP>0 && p->getHP()>0){
		if(this->HP<5){
			this->speciality();
		}
		if(this->catchPrey(p)){
			cout<<"Prey Caught."<<endl;
			if(this->getAttacked(p)) this->die();
			else this->attack(p);
		}
		else this->HP--;
	}
}

bool Predator::catchPrey(Prey* p){}

bool Predator::getAttacked(Prey* p){}

bool Predator::attack(Prey* p){}

void Predator::die(){}

void Predator::speciality(){}

PredatorBackup* Predator::backup(){
	PredatorState* state = new PredatorState(this->HP, this->method, this->damage, this->specialityName);
	return new PredatorBackup(state);
}
void Predator::restore(PredatorBackup* b){
	PredatorState* state = b->getState();
	setHP(state->getHP());
	setMethod(state->getMethod());
	setDamage(state->getDamage()); 
	setSpeciality(state->getSpecial());
}
