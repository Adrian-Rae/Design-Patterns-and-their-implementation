#if !defined(IMAGEELEMENT_H)
#define IMAGEELEMENT_H
#include "Image.h"
#include <iostream>
using namespace std;

class ImageElement : public Image{
	private:
	char* pixelRow;	
	public:
	ImageElement(string);	
	void drawPoster(bool decorated=false);	
};
#endif
