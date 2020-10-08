#if !defined(SOCIALSITEUSER_H)
#define SOCIALSITEUSER_H
#include <string>
#include "Inbox.h"
#include "OldStatus.h"
#include "User.h"
using namespace std;
class SocialSiteMediator;
class SocialSiteUser : public User
{
	private:
		string status;
		Inbox* myInbox;
		OldStatus* old;
		
		int statusNum;
	public:
		SocialSiteUser(SocialSiteMediator*,string);
		void changeStatus(string);
		string viewStatus();
		virtual void receiveMessage(string);
		void postMessage(string);
		void saveMessage(string);
		void viewInbox();
		void saveStatus();
		void loadStatus();
};

#endif
