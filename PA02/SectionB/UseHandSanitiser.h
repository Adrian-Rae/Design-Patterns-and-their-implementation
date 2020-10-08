#if !defined(USEHANDSANITISER_H)
#define USEHANDSANITISER_H
#include "ImageAdditions.h"
using namespace std;
class UseHandSanitiser : public ImageAdditions{
	public:
		UseHandSanitiser(Image*);
		void drawPoster(bool decorated);		
		void drawElement();
};		

#endif
