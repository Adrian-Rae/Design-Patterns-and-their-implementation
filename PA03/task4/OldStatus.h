#if !defined(OLDSTATUS_H)
#define OLDSTATUS_H
#include <string>
using namespace std;
class OldStatus
{
	private:
		int numStatus;
		int maxStatus;
		string* status;
	public:
		OldStatus(int);
		~OldStatus();
		void save(string);
		string load(int);
		int getNumStatus();

};

#endif
