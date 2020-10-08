#include "LevelFourState.h"
#include <iostream>
using namespace std;
	LevelFourState::LevelFourState(){this->pandemicLevel = "level4";}
	void LevelFourState::handle(){cout<<"The country is at level4: There are quite a bit of cases, take all necessary precautions."<<endl;}
	LevelState* LevelFourState::changePandemicLevel(bool b){
		if(b) return new LevelFiveState();
		else return new LevelThreeState();
	}
	string LevelFourState::getPandemicState(){return this->pandemicLevel;}
