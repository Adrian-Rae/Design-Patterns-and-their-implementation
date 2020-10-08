#if !defined(CheetahFactory_H)
#define CheetahFactory_H
#include "Predator.h"
#include "PredatorFactory.h"
using namespace std;

class CheetahFactory : public PredatorFactory
{
	public:
		CheetahFactory();
		~CheetahFactory();
		Predator* createPredator(string,string);
};
#endif