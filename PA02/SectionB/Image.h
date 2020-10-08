#if !defined(IMAGE_H)
#define IMAGE_H
using namespace std;

class Image{
	public:
		virtual void drawPoster(bool decorated=false)=0;	
};
#endif
