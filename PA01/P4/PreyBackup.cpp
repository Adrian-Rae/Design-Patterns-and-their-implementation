#include "PreyBackup.h"
using namespace std;


PreyBackup::PreyBackup(PreyState* s){this->state = s;}
void PreyBackup::setState(PreyState* p){
	this->state = p;
}

PreyState* PreyBackup::getState(){
	return this->state;
}
