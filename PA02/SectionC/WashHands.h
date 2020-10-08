#if !defined(WASHHANDS_H)
#define WASHHANDS_H
#include "ImageAdditions.h"
using namespace std;
class WashHands : public ImageAdditions{
	public:
		WashHands(Image*);		
		void drawPoster(bool decorated=true);		
		void drawElement();
};

#endif
