#if !defined(LEVELFIVESTRATEGY_H)
#define LEVELFIVESTRATEGY_H
#include "PandemicStrategy.h"
using namespace std;
class LevelFiveStrategy : public PandemicStrategy{
	public:
		string takeAction();
};
#endif
