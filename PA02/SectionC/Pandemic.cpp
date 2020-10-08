#include "Pandemic.h"
#include <iostream>

using namespace std;

Pandemic::Pandemic(string s){
	name = s; 
	this->poster = new BaseImage();
	this->posterDesigns = new Image*[4];
	this->posterDesigns[0] = new WashHands(this->poster);
	this->posterDesigns[1] = new UseHandSanitiser(this->poster);
	this->posterDesigns[2] = new TemperatureCheck(this->poster);
	this->posterDesigns[3] = new Mask(this->poster);
	this->posterDesigns[4] = new Travel(this->poster);
}
void Pandemic::setConditions(LevelState* s , PandemicStrategy* t){state = s; strategy = t;}

void Pandemic::increaseLevel(){
	
	if(!state) state = new LevelOneState();
	else{
		if(state->getPandemicState()=="level5") cout<<"Maintain Maximum state."<<endl;
		else{ state = state->changePandemicLevel(true);
			string s = state->getPandemicState();
			switch(s.at(5)){
			case '5': this->strategy = new LevelFiveStrategy(); this->posterDesigns[4]->drawPoster(true); break;
			case '4': this->strategy = new LevelFourStrategy(); this->posterDesigns[3]->drawPoster(true); break;	
			case '3': this->strategy = new LevelThreeStrategy(); this->posterDesigns[2]->drawPoster(true); break;
			case '2': this->strategy = new LevelTwoStrategy(); this->posterDesigns[1]->drawPoster(true); break;
			case '1': this->strategy = new LevelOneStrategy(); this->posterDesigns[0]->drawPoster(true); break;
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
			case '4': this->strategy = new LevelFourStrategy(); this->posterDesigns[3]->drawPoster(true); break;	
			case '3': this->strategy = new LevelThreeStrategy(); this->posterDesigns[2]->drawPoster(true); break;
			case '2': this->strategy = new LevelTwoStrategy(); this->posterDesigns[1]->drawPoster(true); break;
			case '1': this->strategy = new LevelOneStrategy(); this->posterDesigns[0]->drawPoster(true); break;
			}
		}
		state->handle();
	} 
}

void Pandemic::takeAction(){
	cout<<this->name<<((this->strategy)?this->strategy->takeAction():" is of no concern")<<endl;
}
