#include "User.h"
#include "SocialSiteMediator.h"

User::User(SocialSiteMediator* m, string name){
	mediator = m;
	username = name;
}
void User::changed(string message){mediator->notify(this,message);}
string User::getName(){return username;}
