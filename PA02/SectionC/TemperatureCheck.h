#if !defined(TEMPERATURECHECK_H)
#define TEMPERATURECHECK_H
#include "ImageAdditions.h"
using namespace std;
class TemperatureCheck : public ImageAdditions{
	public:
		TemperatureCheck(Image*);
		void drawPoster(bool decorated=true);		
		void drawElement();
};		

#endif
