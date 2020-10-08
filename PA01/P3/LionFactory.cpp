#include "LionFactory.h"
#include "Lion.h"

using namespace std;
LionFactory::LionFactory():PredatorFactory(){}
LionFactory::~LionFactory(){}
Predator* LionFactory::createPredator(string method, string special){
	return new Lion(method,special);
}
