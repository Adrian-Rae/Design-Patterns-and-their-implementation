#if !defined(LEVELTHREESTRATEGY_H)
#define LEVELTHREESTRATEGY_H
#include "PandemicStrategy.h"
using namespace std;
class LevelThreeStrategy : public PandemicStrategy{
	public:
		string takeAction();
};
#endif
