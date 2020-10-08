#if !defined(TRAVEL_H)
#define TRAVEL_H
#include "ImageAdditions.h"
using namespace std;
class Travel : public ImageAdditions{
	public:
		Travel(Image*);
		void drawPoster(bool decorated=true);		
		void drawElement();
};	

#endif
