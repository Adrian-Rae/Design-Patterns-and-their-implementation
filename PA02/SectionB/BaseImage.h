#if !defined(BASEIMAGE_H)
#define BASEIMAGE_H
#include "Image.h"
#include "ImageElement.h"
#include <string>
using namespace std;

class BaseImage : public Image{
	private:
	Image** canvas;
	bool polarity;
	public:
	BaseImage();
	void drawPoster(bool decorated=false);		
};
#endif
