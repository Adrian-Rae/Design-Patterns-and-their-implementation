#include "PreyStore.h"
using namespace std;

PreyStore::PreyStore(PreyBackup* b){
	this->backup = b;
}
void PreyStore::setBackup(PreyBackup* b){
	this->backup = b;
}
PreyBackup* PreyStore::getBackup(){
	return this->backup;
}

