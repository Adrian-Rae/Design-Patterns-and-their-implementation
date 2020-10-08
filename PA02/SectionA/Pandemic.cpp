#include "Pandemic.h"
#include <iostream>

using namespace std;

Pandemic::Pandemic(){name = "Covid-19";}
Pandemic::Pandemic(string s){name = s;}
void Pandemic::setConditions(LevelState* s , PandemicStrategy* t){state = s; strategy = t;}

void Pandemic::increaseLevel(){
	if(!state) state = new LevelOneState();
	else{
		if(state->getPandemicState()=="level5") cout<<"Maintain Maximum state."<<endl;
		else{ state = state->changePandemicLevel(true);
			string s = state->getPandemicState();
			switch(s.at(5)){
			case '5': this->strategy = new LevelFiveStrategy(); break;
			case '4': this->strategy = new LevelFourStrategy(); break;	
			case '3': this->strategy = new LevelThreeStrategy(); break;
			case '2': this->strategy = new LevelTwoStrategy(); break;
			case '1': this->strategy = new LevelOneStrategy(); break;
			}

		}
		state->handle();
	} 
}
void Pandemic::decreaseLevel(){
	if(!state) state = 0;
	else{
		if(state->getPandemicState()=="none") cout<<"Maintain no state."<<endl;
		else{
			state = state->changePandemicLevel(false);
			string s = state->getPandemicState();
			if(s=="none") this->strategy = NULL;			
			else switch(s.at(5)){
			case '4': this->strategy = new LevelFourStrategy(); break;	
			case '3': this->strategy = new LevelThreeStrategy(); break;
			case '2': this->strategy = new LevelTwoStrategy(); break;
			case '1': this->strategy = new LevelOneStrategy(); break;
			}
		}
		state->handle();
	} 
}

void Pandemic::takeAction(){
	cout<<this->name<<((this->strategy)?this->strategy->takeAction():" is of no concern")<<endl;
}
