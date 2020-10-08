#if !defined(INBOX_H)
#define INBOX_H
#include <string>
using namespace std;
class Inbox
{
	private:
		int numMessages;
		int maxMessages;
		string* messages;
	public:
		Inbox(int);
		~Inbox();
		void save(string);
		string load(int);
		int getNumMessages();

};

#endif
