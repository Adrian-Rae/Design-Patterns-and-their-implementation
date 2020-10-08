#if !defined(BORDERGUARD_H)
#define BORDERGUARD_H
#include "Prisoner.h"
using namespace std;

class BorderGuard : public Human, public Observers{
	private:	
	Prisoner* mPrisoner;
	public:
	BorderGuard(int,int,Prisoner*);
	void update();
};

#endif
