#if !defined(LionFactory_H)
#define LionFactory_H
#include "Predator.h"
#include "PredatorFactory.h"
using namespace std;

class LionFactory : public PredatorFactory
{
	public:
		LionFactory();
		~LionFactory();
		Predator* createPredator(string,string);
};
#endif