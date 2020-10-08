#include "Subject.h"

void Subject::attach(Observers* o){
	mObserver.push_back(o);
}

void Subject::notify(){
	vector<Observers*>::iterator it = mObserver.begin();
	for (it = mObserver.begin(); it != mObserver.end(); ++it)
		(*it)->update();
}


