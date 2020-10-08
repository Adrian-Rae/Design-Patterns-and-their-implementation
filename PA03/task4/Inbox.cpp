#include "Inbox.h"

Inbox::Inbox(int m){
	messages = new string[m];
	maxMessages = m;
	numMessages = 0;

}
Inbox::~Inbox(){
	delete [] messages;
}
void Inbox::save(string s){
	if(numMessages<maxMessages)
	messages[numMessages++]=s;
}
string Inbox::load(int i){
	return (i<getNumMessages())?messages[i]:"[NO MAIL]";
}
int Inbox::getNumMessages(){return numMessages;}
