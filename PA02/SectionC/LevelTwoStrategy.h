#if !defined(LEVELTWOSTRATEGY_H)
#define LEVELTWOSTRATEGY_H
#include "PandemicStrategy.h"
using namespace std;
class LevelTwoStrategy : public PandemicStrategy{
	public:
		string takeAction();
};
#endif
