#include "PreyState.h"
using namespace std;

PreyState::PreyState(int h, string t, int d){
	this->HP = h;
	this->type = t;
	this->damage = d;
}

int PreyState::getHP(){return this->HP;}
string PreyState::getType(){return this->type;}
int PreyState::getDamage(){return this->damage;}
