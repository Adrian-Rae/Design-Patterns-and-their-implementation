#include "LevelTwoState.h"
#include <iostream>
using namespace std;
	LevelTwoState::LevelTwoState(){this->pandemicLevel = "level2";}
	void LevelTwoState::handle(){cout<<"The country is at level2: Take caution"<<endl;}
	LevelState* LevelTwoState::changePandemicLevel(bool b){
		if(b) return new LevelThreeState();
		else return new LevelOneState();
	}
	string LevelTwoState::getPandemicState(){return this->pandemicLevel;}
