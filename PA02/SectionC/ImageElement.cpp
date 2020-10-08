#include "ImageElement.h"

ImageElement::ImageElement(string s){
	this->pixelRow = new char[34];
	
	if(s == "top" || s == "bottom"){
		pixelRow[0] = '+';
		for(int i=1; i<33; i++) pixelRow[i] = '=';
		pixelRow[33] = '+';
	}
	else if(s == "middle"){
		pixelRow[0] = '|';
		for(int i=1; i<33; i++) pixelRow[i] = ' ';
		pixelRow[33] = '|';
	}
	
}	
void ImageElement::drawPoster(bool decorated){
	cout<<"\u001b[31m ";	
	for(int i=0; i<34; i++) cout<<pixelRow[i];
	cout<<" \u001b[0m"<<endl;
}

