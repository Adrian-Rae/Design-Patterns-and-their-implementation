#include "CheetahFactory.h"
#include "Cheetah.h"

using namespace std;
CheetahFactory::CheetahFactory():PredatorFactory(){}
CheetahFactory::~CheetahFactory(){}
Predator* CheetahFactory::createPredator(string method, string special){
	return new Cheetah(method,special);
}