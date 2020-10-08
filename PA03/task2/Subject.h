#if !defined(SUBJECT_H)
#define SUBJECT_H
#include <vector>
#include "Observers.h"
using namespace std;
class Subject{
	private:
		vector<Observers*> mObserver;
	public:		
		void attach(Observers*);
		void notify();
	
};
#endif
