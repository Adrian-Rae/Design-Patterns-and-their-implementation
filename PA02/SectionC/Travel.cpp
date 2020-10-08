#include "Travel.h"
Travel::Travel(Image* I):ImageAdditions(I){}
void Travel::drawElement(){
	string p[28] = {
	"|                              |",
	"|                *             |",
	"|                              |",
	"|                              |",
	"|    *                         |",
	"|                              |",
	"|                      *       |",
	"|     *                        |",
	"|                              |",
	"|                              |",
	"|                              |",
	"|                              |",
	"|           ___                |",
	"|       ___/    |_ _           |",
	"|      |            |          |",
	"|  ___  --O-----O---  _______  |",
	"|                              |",
	"|                              |",
	"|                              |",
	"|      LEVEL5: Please do not   |",
	"|            Travel!           |",
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

void Travel::drawPoster(bool decorated){	
	ImageAdditions::drawPoster(decorated);
	this->drawElement();
	ImageAdditions::drawPoster(decorated);
}
