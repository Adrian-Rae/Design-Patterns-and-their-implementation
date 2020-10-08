#include "LevelThreeState.h"
#include <iostream>
using namespace std;
	LevelThreeState::LevelThreeState(){this->pandemicLevel = "level3";}
	void LevelThreeState::handle(){cout<<"The country is at level3: Moderate amount of cases, make sure you are wearing a mask"<<endl;}
	LevelState* LevelThreeState::changePandemicLevel(bool b){
		if(b) return new LevelFourState();
		else return new LevelTwoState();
	}
	string LevelThreeState::getPandemicState(){return this->pandemicLevel;}
