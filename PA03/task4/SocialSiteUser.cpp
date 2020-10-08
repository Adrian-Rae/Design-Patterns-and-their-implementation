#include "SocialSiteUser.h"
#include "SocialSiteMediator.h"
#include <iostream>
using namespace std;

SocialSiteUser::SocialSiteUser(SocialSiteMediator* m,string s):User(m,s){
	status = "I am using SocialSite.";
	myInbox = new Inbox(100);
	old = new OldStatus(100);
	saveStatus();
	
	statusNum = -1;
	
}
void SocialSiteUser::changeStatus(string s){
	status = s;
}
string SocialSiteUser::viewStatus(){
	return status;
}
void SocialSiteUser::receiveMessage(string s){
	cout<<"<<MESSAGE RECIEVED BY: "<<username<<">>"<<endl;
	saveMessage(s);
}
void SocialSiteUser::postMessage(string s){
	mediator->notify(this,s);
}
void SocialSiteUser::saveMessage(string s){
	myInbox->save(s);
}
void SocialSiteUser::viewInbox(){
	cout<<"INBOX:"<<username<<endl;
	for(int i=0; i<myInbox->getNumMessages(); i++){
		cout<<i<<": "<<myInbox->load(i)<<endl;
	}
	cout<<endl;
}

void SocialSiteUser::saveStatus(){
	old->save(status);
}
void SocialSiteUser::loadStatus(){
	statusNum = (statusNum+1)%old->getNumStatus();
	status = old->load(statusNum);
}
