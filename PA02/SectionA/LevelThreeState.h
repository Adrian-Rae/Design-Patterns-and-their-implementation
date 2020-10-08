#if !defined(LEVELTHREESTATE_H)
#define LEVELTHREESTATE_H
#include "LevelState.h"
#include "LevelFourState.h"
#include "LevelTwoState.h"
using namespace std;
class LevelThreeState : public LevelState{
	public:
		LevelThreeState();
		void handle();
		LevelState* changePandemicLevel(bool);
		string getPandemicState();
	
};

#endif
