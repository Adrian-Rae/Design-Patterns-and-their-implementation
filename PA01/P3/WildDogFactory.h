#if !defined(WildDogFactory_H)
#define WildDogFactory_H
#include "Predator.h"
#include "PredatorFactory.h"
using namespace std;

class WildDogFactory : public PredatorFactory
{
	public:
		WildDogFactory();
		~WildDogFactory();
		Predator* createPredator(string,string);
};
#endif