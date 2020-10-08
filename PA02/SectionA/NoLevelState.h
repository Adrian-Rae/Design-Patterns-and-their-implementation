#if !defined(NOLEVELSTATE_H)
#define NOLEVELSTATE_H
#include "LevelState.h"
#include "LevelOneState.h"
using namespace std;
class NoLevelState : public LevelState{
	public:
		NoLevelState();
		void handle();
		LevelState* changePandemicLevel(bool);
		string getPandemicState();
	
};

#endif
