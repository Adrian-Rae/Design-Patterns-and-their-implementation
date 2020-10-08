#if !defined(SOCIALSITEMEDIATOR_H)
#define SOCIALSITEMEDIATOR_H
#include <string>
using namespace std;
class User;
class SocialSiteMediator{
	public:
		virtual void notify(User*, string)=0;
		virtual bool addUser(string)=0;		
};

#endif
