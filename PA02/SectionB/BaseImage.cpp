#include "BaseImage.h"
void BaseImage::drawPoster(bool decorated){
	if(!decorated) for(int i=0; i<32; i++){this->canvas[i]->drawPoster();}
	else if(!this->polarity){
		for(int i=0; i<2; i++){this->canvas[i]->drawPoster();} //first two lines
		this->polarity = true;
	}
	else{
		for(int i=30; i<32; i++){this->canvas[i]->drawPoster();} //last two lines
		this->polarity = false;
	}
}

BaseImage::BaseImage(){
	this->canvas = new Image*[32];
	this->canvas[0] = new ImageElement("top");
	for(int i=1; i<31; i++) this->canvas[i] = new ImageElement("middle");
	this->canvas[31] = new ImageElement("bottom");
	this->polarity = false;
}
