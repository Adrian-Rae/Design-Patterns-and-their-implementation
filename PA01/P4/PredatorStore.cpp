#include "PredatorStore.h"
using namespace std;

PredatorStore::PredatorStore(PredatorBackup* b){
	this->backup = b;
}
void PredatorStore::setBackup(PredatorBackup* b){
	this->backup = b;
}
PredatorBackup* PredatorStore::getBackup(){
	return this->backup;
}

