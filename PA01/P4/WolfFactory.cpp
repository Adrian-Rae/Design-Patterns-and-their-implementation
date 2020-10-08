#include "WolfFactory.h"
#include "Wolf.h"

using namespace std;
WolfFactory::WolfFactory():PredatorFactory(){}
WolfFactory::~WolfFactory(){}
Predator* WolfFactory::createPredator(string method, string special){
	return new Wolf(method,special);
}
