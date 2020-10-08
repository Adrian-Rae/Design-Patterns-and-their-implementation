#include "ImageAdditions.h"

ImageAdditions::ImageAdditions(Image* com){
	this->component = com;
}

void ImageAdditions::drawPoster(bool decorated){
	this->component->drawPoster(decorated);
}
