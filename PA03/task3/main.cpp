#include "DynamicArray.h"
#include "DynamicArrayIterator.h"
#include <iostream>
using namespace std;

int main(){
	int l = 6;
	DynamicArray<int>* d = new DynamicArray<int>(l);
	DynamicArrayIterator<int>* i = new DynamicArrayIterator<int>(d);
	
	for(int h=0; h<l; h++){
		d->insert(h,h*h);
	}
	
	i->first();
	while(true){
		cout<<i->current()<<endl;
		if (!i->hasNext()) break;
		else i->next();
	}
	
	return 0;
}
