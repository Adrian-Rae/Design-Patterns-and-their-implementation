#if !defined(LEVELONESTRATEGY_H)
#define LEVELONESTRATEGY_H
#include "PandemicStrategy.h"
using namespace std;
class LevelOneStrategy : public PandemicStrategy{
	public:
		string takeAction();
};
#endif
