#if !defined(PreyState_H)
#define PreyState_H

#include <string>
using namespace std;

class PreyState
{
private:
	int HP;
	string type;
	int damage;	
public:
	PreyState(int,string,int);
	int getHP();
	string getType();
	int getDamage();
		
};
#endif
