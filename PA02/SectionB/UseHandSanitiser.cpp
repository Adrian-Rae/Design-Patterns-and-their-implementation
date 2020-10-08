#include "UseHandSanitiser.h"
UseHandSanitiser::UseHandSanitiser(Image* I):ImageAdditions(I){}
void UseHandSanitiser::drawElement(){
		string p[28] = {
	"|                              |",
	"|                *             |",
	"|                              |",
	"|                              |",
	"|    *                         |",
	"|                              |",
	"|                      *       |",
	"|     *                        |",
	"|           _____              |",
	"|          |=====O <======     |",
	"|         _|_____|_            |",
	"|        |_________|           |",
	"|        |_________|           |",
	"|        |_________|           |",
	"|        |_________|           |",
	"|        |_________|           |",
	"|        |_________|           |",
	"|                              |",
	"|                              |",
	"|     Remember to Sanitise     |",
	"|      your surroundings!      |",
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
			if(i==0) cout<<"\u001b[31m "<<s[i]<<"\u001b[33;1m ";
			else if(i==31) cout<<"\u001b[31m "<<s[i]<<endl;
			else cout<<s[i];
		}
	}	
}

void UseHandSanitiser::drawPoster(bool decorated){
	ImageAdditions::drawPoster(decorated);
	this->drawElement();
	ImageAdditions::drawPoster(decorated);		
}
