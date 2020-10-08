#include "iostream"
#include "PrisonArea.h"

using namespace std;
PrisonArea::PrisonArea(int w, int h){
	mWidth = w;
	mHeight = h;
	mPrisoner = new Prisoner(w/2, h/2);
	BorderGuard* A = new BorderGuard(0,0,mPrisoner);
	BorderGuard* B = new BorderGuard(w-1,0,mPrisoner);
	BorderGuard* C = new BorderGuard(0,h-1,mPrisoner);
	BorderGuard* D = new BorderGuard(w-1,h-1,mPrisoner);
	mBorderGuard.push_back(A);
	mBorderGuard.push_back(B);
	mBorderGuard.push_back(C);
	mBorderGuard.push_back(D);
	mPrisoner->attach(A);
	mPrisoner->attach(B);
	mPrisoner->attach(C);
	mPrisoner->attach(D);
}
PrisonArea::~PrisonArea(){
	for(int i=0; i<4; i++) mBorderGuard.pop_back();	
	delete mPrisoner;
}
int PrisonArea::getWidth(){
	return mWidth;
}
int PrisonArea::getHeight(){
	return mHeight;
}
Prisoner* PrisonArea::getPrisoner(){
	return mPrisoner;
}
void PrisonArea::print(){

	for(int y = 0;  y<mHeight ; ++y)
	{for(int x = 0;  x<mWidth ; ++x)
	{
	char value = ' ' ;
	if(x == mPrisoner->getX () && y == mPrisoner->getY ( ) )
	{value = mPrisoner->getValue ( ) ;}
	else{for(int i = 0;  i<mBorderGuard.size( ) ; ++i )
	{if(x == mBorderGuard[i]->getX()&& y == mBorderGuard[i]->getY( ) )
	{value = mBorderGuard[i]->getValue( ) ;
	break;}
	else if(x == mBorderGuard[i]->getX()||y == mBorderGuard[i]->getY( ) )
	{value = '*' ;}}
	}
	cout<<value ;
	}
	cout<<endl ;
	}
				
}
