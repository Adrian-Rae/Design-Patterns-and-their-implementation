#include "PredatorBackup.h"
using namespace std;

PredatorBackup::PredatorBackup(PredatorState* s){this->state = s;}

void PredatorBackup::setState(PredatorState* p){
	this->state = p;
}

PredatorState* PredatorBackup::getState(){
	return this->state;
}
