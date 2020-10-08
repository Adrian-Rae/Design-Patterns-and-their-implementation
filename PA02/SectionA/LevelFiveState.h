#if !defined(LEVELFIVESTATE_H)
#define LEVELFIVESTATE_H
#include "LevelState.h"
#include "LevelFourState.h"

using namespace std;
class LevelFiveState : public LevelState{
	public:
		LevelFiveState();
		void handle();
		LevelState* changePandemicLevel(bool);
		string getPandemicState();
	
};

#endif
