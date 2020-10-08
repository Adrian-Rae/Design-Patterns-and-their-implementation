#if !defined(MASK_H)
#define MASK_H
#include "ImageAdditions.h"
using namespace std;
class Mask : public ImageAdditions{
	public:
		Mask(Image*);
		void drawPoster(bool decorated=true);		
		void drawElement();
};	

#endif
