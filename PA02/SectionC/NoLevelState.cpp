#include "NoLevelState.h"
#include <iostream>
using namespace std;
	NoLevelState::NoLevelState(){this->pandemicLevel = "none";}
	void NoLevelState::handle(){cout<<"The country is at no level: Normal Living"<<endl;}
	LevelState* NoLevelState::changePandemicLevel(bool b){
		if(b) return new LevelOneState();
		else return new NoLevelState();
	}
	string NoLevelState::getPandemicState(){return this->pandemicLevel;}
