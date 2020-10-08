#if !defined(PredatorBackup_H)
#define PredatorBackup_H
#include "PredatorState.h"
using namespace std;

class PredatorBackup
{
private:
	PredatorState* state;	
public:
	PredatorBackup(PredatorState*);	
	void setState(PredatorState*);
	PredatorState* getState();
		
};
#endif
