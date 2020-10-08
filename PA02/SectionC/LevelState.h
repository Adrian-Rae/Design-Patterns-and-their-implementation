#if !defined(LEVELSTATE_H)
#define LEVELSTATE_H
#include <string>
using namespace std;
class LevelState{
	protected:
		string pandemicLevel;
	public:
		virtual void handle()=0;
		virtual LevelState* changePandemicLevel(bool)=0;
		string getPandemicState();
		

};

#endif
