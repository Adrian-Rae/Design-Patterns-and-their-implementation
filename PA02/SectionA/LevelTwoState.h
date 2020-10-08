#if !defined(LEVELTWOSTATE_H)
#define LEVELTWOSTATE_H
#include "LevelState.h"
#include "LevelOneState.h"
#include "LevelThreeState.h"
using namespace std;
class LevelTwoState : public LevelState{
	public:
		LevelTwoState();
		void handle();
		LevelState* changePandemicLevel(bool);
		string getPandemicState();
	
};

#endif
