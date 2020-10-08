#if !defined(LEVELFOURSTATE_H)
#define LEVELFOURSTATE_H
#include "LevelState.h"
#include "LevelFiveState.h"
#include "LevelThreeState.h"
using namespace std;
class LevelFourState : public LevelState{
	public:
		LevelFourState();
		void handle();
		LevelState* changePandemicLevel(bool);
		string getPandemicState();
	
};

#endif
