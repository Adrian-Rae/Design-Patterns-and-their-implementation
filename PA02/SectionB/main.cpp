#include "Image.h"
#include "BaseImage.h"
#include "Mask.h"
#include "WashHands.h"
#include "UseHandSanitiser.h"
#include "TemperatureCheck.h"

using namespace std;

int main(){
	Image* poster = new BaseImage();
	poster->drawPoster();
	ImageAdditions* a = new Mask(poster);
	ImageAdditions* b = new WashHands(poster);
	ImageAdditions* c = new UseHandSanitiser(poster);
	ImageAdditions* d = new TemperatureCheck(poster);
	a->drawPoster();
	b->drawPoster();
	c->drawPoster();
	d->drawPoster();
	
	return 0;
}
