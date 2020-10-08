#if !defined(PreyStore_H)
#define PreyStore_H
#include "PreyBackup.h"
using namespace std;

class PreyStore
{
private:
	PreyBackup* backup;	
public:
	PreyStore(PreyBackup*);
	void setBackup(PreyBackup*);
	PreyBackup* getBackup();
		
};
#endif
