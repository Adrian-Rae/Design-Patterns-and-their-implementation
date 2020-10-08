#include "TemperatureCheck.h"
TemperatureCheck::TemperatureCheck(Image* I):ImageAdditions(I){}
void TemperatureCheck::drawElement(){
		string p[28] = {
	"|                              |",
	"|                *             |",
	"|                              |",
	"|                              |",
	"|    *                         |",
	"|                              |",
	"|                      *       |",
	"|     *         __             |",
	"|              |  |            |",
	"|              |  |            |",
	"|              |  |            |",
	"|              |..|            |",
	"|              |..|            |",
	"|              |..|            |",
	"|              |..|            |",
	"|              |..|            |",
	"|              ====            |",
	"|              |..|            |",
	"|                              |",
	"|        Remember to Take      |",
	"|       your temperature!      |",
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
			if(i==0) cout<<"\u001b[31m "<<s[i]<<"\u001b[31;1m ";
			else if(i==31) cout<<"\u001b[31m "<<s[i]<<endl;
			else cout<<s[i];
		}
	}	
}

void TemperatureCheck::drawPoster(bool decorated){
	ImageAdditions::drawPoster(decorated);
	this->drawElement();
	ImageAdditions::drawPoster(decorated);		
}


