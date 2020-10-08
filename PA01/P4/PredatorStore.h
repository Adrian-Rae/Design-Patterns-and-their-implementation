#if !defined(PredatorStore_H)
#define PredatorStore_H
#include "PredatorBackup.h"
using namespace std;

class PredatorStore
{
private:
	PredatorBackup* backup;	
public:
	PredatorStore(PredatorBackup*);
	void setBackup(PredatorBackup*);
	PredatorBackup* getBackup();
		
};
#endif
