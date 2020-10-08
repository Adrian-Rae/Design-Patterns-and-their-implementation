#include "LevelOneState.h"
#include <iostream>
using namespace std;
	LevelOneState::LevelOneState(){this->pandemicLevel = "level1";}
	void LevelOneState::handle(){cout<<"The country is at level1: Very few cases"<<endl;}
	LevelState* LevelOneState::changePandemicLevel(bool b){
		if(b) return new LevelTwoState();
		else return new NoLevelState();
	}
	string LevelOneState::getPandemicState(){return this->pandemicLevel;}
