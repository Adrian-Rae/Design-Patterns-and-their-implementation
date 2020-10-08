#include "LevelFiveState.h"
#include <iostream>
using namespace std;
	LevelFiveState::LevelFiveState(){this->pandemicLevel = "level5";}
	void LevelFiveState::handle(){cout<<"The country is at level5: Don't go outside unless you have to"<<endl;}
	LevelState* LevelFiveState::changePandemicLevel(bool b){
		if(b) return new LevelFiveState();
		else return new LevelFourState();
	}
	string LevelFiveState::getPandemicState(){return this->pandemicLevel;}
