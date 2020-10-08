#if !defined(LEVELFOURSTRATEGY_H)
#define LEVELFOURSTRATEGY_H
#include "PandemicStrategy.h"
using namespace std;
class LevelFourStrategy : public PandemicStrategy{
	public:
		string takeAction();
};
#endif
