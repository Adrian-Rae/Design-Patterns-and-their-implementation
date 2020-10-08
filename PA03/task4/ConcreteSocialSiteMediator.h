#if !defined(CONCRETESOCIALSITEMEDIATOR_H)
#define CONCRETESOCIALSITEMEDIATOR_H
#include <string>
#include "SocialSiteMediator.h"
using namespace std;
//class User;
class ConcreteSocialSiteMediator : public SocialSiteMediator
{
	private:
		User** users;
		int numUsers;
	public:
		ConcreteSocialSiteMediator();
		~ConcreteSocialSiteMediator();
		virtual void notify(User*, string);
		virtual bool addUser(string);	
		User* getUser(string);	
		bool inArray(string);
};

#endif
