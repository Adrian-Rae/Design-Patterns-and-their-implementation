#if !defined(PredatorState_H)
#define PredatorState_H
#include <string>
using namespace std;

class PredatorState
{
private:
	int HP;
	string method;
	int damage;
	string special;	
public:
	PredatorState(int,string,int,string);
	int getHP();
	string getMethod();
	int getDamage();
	string getSpecial();
		
};
#endif
