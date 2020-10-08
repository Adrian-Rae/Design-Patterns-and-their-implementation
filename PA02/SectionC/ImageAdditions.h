#if !defined(IMAGEADDITIONS_H)
#define IMAGEADDITIONS_H
#include "Image.h"
#include <iostream>
using namespace std;

class ImageAdditions : public Image{
	private:
		Image* component;	
	public:
		ImageAdditions(Image*);		
		void drawPoster(bool decorated=true);	
};
#endif
