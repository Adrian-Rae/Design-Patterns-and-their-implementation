#if !defined(LEVELONESTATE_H)
#define LEVELONESTATE_H
#include "LevelState.h"
#include "NoLevelState.h"
#include "LevelTwoState.h"
using namespace std;
class LevelOneState : public LevelState{
	public:
		LevelOneState();
		void handle();
		LevelState* changePandemicLevel(bool);
		string getPandemicState();
	
};

#endif
