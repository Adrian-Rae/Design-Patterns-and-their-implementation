#if !defined(PreyBackup_H)
#define PreyBackup_H
#include "PreyState.h"
using namespace std;

class PreyBackup
{
private:
	PreyState* state;	
public:
	PreyBackup(PreyState*);	
	void setState(PreyState*);
	PreyState* getState();
		
};
#endif
