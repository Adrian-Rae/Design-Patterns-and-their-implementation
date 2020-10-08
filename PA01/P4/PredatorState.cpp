#include "PredatorState.h"
using namespace std;

PredatorState::PredatorState(int h, string t, int d, string s){
	this->HP = h;
	this->method = t;
	this->damage = d;
	this->special = s;
}

int PredatorState::getHP(){return this->HP;}
string PredatorState::getMethod(){return this->method;}
int PredatorState::getDamage(){return this->damage;}
string PredatorState::getSpecial(){return this->special;}
