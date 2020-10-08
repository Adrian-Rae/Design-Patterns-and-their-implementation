#if !defined(PANDEMIC_H)
#define PANDEMIC_H
#include <string>
#include "LevelState.h"
#include "LevelOneState.h"
#include "PandemicStrategy.h"
#include "LevelOneStrategy.h"
#include "LevelTwoStrategy.h"
#include "LevelThreeStrategy.h"
#include "LevelFourStrategy.h"
#include "LevelFiveStrategy.h"
#include "BaseImage.h"
#include "WashHands.h"
#include "Mask.h"
#include "UseHandSanitiser.h"
#include "TemperatureCheck.h"
#include "Travel.h"
using namespace std;
class Pandemic{
	private:
		string name;
		LevelState* state;
		PandemicStrategy* strategy;
		Image* poster;
		Image** posterDesigns;

	public:
		Pandemic();
		Pandemic(string);
		void setConditions(LevelState*,PandemicStrategy*);		
		void increaseLevel();
		void decreaseLevel();
		void takeAction();
	
};

#endif
