#include "Pandemic.h"
#include "PandemicStrategy.h"
#include "LevelState.h"
#include <iostream>
#include <math.h>
using namespace std;

	int main(){
		LevelState* STARTSTATE = new NoLevelState();
		PandemicStrategy* STARTSTRATEGY = NULL;	
		Pandemic* P = new Pandemic("COIVD-19");
		P->setConditions(STARTSTATE, STARTSTRATEGY);
		int threshold = 0;
		int numDays = 80;
		for(int i=1; i<=numDays; i++){
			int p = ceil(40*exp(-0.005*(i-0.5*numDays)*(i-0.5*numDays))); //distribution for current infections
			
			int nT = (p/5);
			cout<<"day "<<i<<" with "<<p<<"% Proportion of infections "<<endl;
			if(nT<threshold){P->decreaseLevel(); /*P->takeAction();*/}
			if(nT>threshold){P->increaseLevel(); P->takeAction();}	
			threshold = nT;
			cout<<endl;
		}
		
		return 0;
	}
