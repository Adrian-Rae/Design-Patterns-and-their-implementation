#if !defined(PRISONER_H)
#define PRISONER_H
#include <string>
#include "Human.h"
#include "Subject.h"
class Prisoner : public Human, public Subject{
	private:
		int mx;
		int my;	
	public:
		Prisoner(int,int);
		void setX(int);
		void setY(int);
		void runTowards(string);
		void move();	
};

#endif
