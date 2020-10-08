#if !defined(PRISONAREA_H)
#define PRISONAREA_H
#include "BorderGuard.h"
#include "Prisoner.h"
#include <vector>
using namespace std;
class PrisonArea{
	private:
		int mWidth;
		int mHeight;
		Prisoner* mPrisoner;
		vector<BorderGuard*> mBorderGuard;
	public:
		PrisonArea(int, int);
		~PrisonArea();
		int getWidth();
		int getHeight();
		Prisoner* getPrisoner();
		void print();
		

};
#endif
