#if !defined(WolfFactory_H)
#define WolfFactory_H
#include "Predator.h"
#include "PredatorFactory.h"
using namespace std;

class WolfFactory : public PredatorFactory
{
	public:
		WolfFactory();
		~WolfFactory();
		Predator* createPredator(string,string);
};
#endif