#include "BorderGuard.h"
#include "iostream"
BorderGuard::BorderGuard(int x,int y,Prisoner* p):Human('C',x,y){
	setX(x);
	setY(y);
	mPrisoner = p;	
}
void BorderGuard::update(){
	bool xPush = (getX()==mPrisoner->getX());
	bool yPush = (getY()==mPrisoner->getY());
	if(xPush){
		cout<<"<<WHISTLE BLOWS>>"<<endl;
		if(getX()==0) mPrisoner->setX(mPrisoner->getX()+1);
		else mPrisoner->setX(mPrisoner->getX()-1);	
	}
	else if(yPush){
		cout<<"<<WHISTLE BLOWS>>"<<endl;
		if(getY()==0) mPrisoner->setY(mPrisoner->getY()+1);
		else mPrisoner->setY(mPrisoner->getY()-1);	
	}	
}
