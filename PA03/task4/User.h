#if !defined(USER_H)
#define USER_H
#include <string>
using namespace std;
class SocialSiteMediator;
class User{
	protected:
		SocialSiteMediator* mediator;
		string username;
	public:
		User(SocialSiteMediator*,string);
		void changed(string);
		string getName();
		virtual void receiveMessage(string)=0;

};

#endif
