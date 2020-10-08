#include "ConcreteSocialSiteMediator.h"
#include "User.h"
#include "SocialSiteUser.h"

ConcreteSocialSiteMediator::ConcreteSocialSiteMediator(){
	users = new User*[100];
	numUsers = 0;
}

ConcreteSocialSiteMediator::~ConcreteSocialSiteMediator(){
	delete [] users;
}
void ConcreteSocialSiteMediator::notify(User* u, string m){
	for(int i=0; i<numUsers; i++) users[i]->receiveMessage(m);	
}
bool ConcreteSocialSiteMediator::addUser(string s){
	if(inArray(s)) return false;
	users[numUsers++] = new SocialSiteUser(this,s);
	return true;
}	
User* ConcreteSocialSiteMediator::getUser(string s){
	User* result = 0;
	for(int i=0; i<numUsers; i++) if(users[i]->getName()==s){result = users[i]; break;}
	return result;	
}

bool ConcreteSocialSiteMediator::inArray(string s){
	bool result = false;
	for(int i=0; i<numUsers; i++) result = result||(users[i]->getName()==s);
	return result;
}
