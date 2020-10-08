#include "WashHands.h"
WashHands::WashHands(Image* I):ImageAdditions(I){}
void WashHands::drawElement(){
		string p[28] = {
	"|                              |",
	"|                *             |",
	"|                              |",
	"|                              |",
	"|    *                         |",
	"|                _             |",
	"|               |O|_  *        |",
	"|              _| |O|_         |",
	"|             |O| | |O|        |",
	"|             |-|-|-|-|        |",
	"|            _|-|-|-|-|        |",
	"|           |O|-|-|-|-|        |",
	"|           |-|       |        |",
	"|           |-|       |        |",
	"|           |_        |        |",
	"|             |_______|        |",
	"|                              |",
	"|                              |",
	"|                              |",
	"|        Remember to wash      |",
	"|           your hands!        |",
	"|                              |",
	"|                              |",
	"|         *               *    |",
	"|                              |",
	"|                *             |",
	"|                              |",
	"|                              |"};
	for(int y=0; y<28; y++){
		string s=p[y];	
		for(int i=0; i<32; i++){
			if(i==0) cout<<"\u001b[31m "<<s[i]<<"\u001b[32;1m ";
			else if(i==31) cout<<"\u001b[31m "<<s[i]<<endl;
			else cout<<s[i];
		}
	}	
}

void WashHands::drawPoster(bool decorated){
	ImageAdditions::drawPoster(decorated);
	this->drawElement();
	ImageAdditions::drawPoster(decorated);		
}
