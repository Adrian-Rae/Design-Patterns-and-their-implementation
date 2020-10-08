#include "OldStatus.h"

OldStatus::OldStatus(int m){
	status = new string[m];
	maxStatus = m;
	numStatus = 0;

}
OldStatus::~OldStatus(){
	delete [] status;
}
void OldStatus::save(string s){
	if(numStatus<maxStatus)
	status[numStatus++]=s;
}
string OldStatus::load(int i){
	return ((i>=getNumStatus())?"No Message":status[i]);
}
int OldStatus::getNumStatus(){return numStatus;}
