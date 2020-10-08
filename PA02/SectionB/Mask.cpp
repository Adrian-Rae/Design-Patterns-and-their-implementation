#include "Mask.h"
Mask::Mask(Image* I):ImageAdditions(I){}
void Mask::drawElement(){
	string p[28] = {
	"|                              |",
	"|                *             |",
	"|                              |",
	"|                              |",
	"|    *                         |",
	"|                              |",
	"|                      *       |",
	"|     *                        |",
	"|            ____              |",
	"|           /    |     ___     |",
	"|         _/_____|_   /   |    |",
	"|        /_________|--    |    |",
	"|        |_________|      |    |",
	"|        |_________|    _/     |",
	"|        |_________|   /       |",
	"|        |_________|__/        |",
	"|        |_________/           |",
	"|                              |",
	"|                              |",
	"|       Remember to wear       |",
	"|          your mask!          |",
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
			if(i==0) cout<<"\u001b[31m "<<s[i]<<"\u001b[36;1m ";
			else if(i==31) cout<<"\u001b[31m "<<s[i]<<endl;
			else cout<<s[i];
		}
	}
		
}

void Mask::drawPoster(bool decorated){	
	ImageAdditions::drawPoster(decorated);
	this->drawElement();
	ImageAdditions::drawPoster(decorated);
}
