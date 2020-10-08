#include "WildDogFactory.h"
#include "WildDog.h"

using namespace std;
WildDogFactory::WildDogFactory():PredatorFactory(){}
WildDogFactory::~WildDogFactory(){}
Predator* WildDogFactory::createPredator(string method, string special){
	return new WildDog(method,special);
}
