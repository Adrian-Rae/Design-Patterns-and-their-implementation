#include "DynamicArrayIterator.h"
#include <string>
template<class T>
DynamicArrayIterator<T>::DynamicArrayIterator(DynamicArray<T>* d):structure(d),currentItem(0){}

template<class T>
void DynamicArrayIterator<T>::first(){
	index = 0;
	currentItem = structure->get(index);
}
template<class T>
void DynamicArrayIterator<T>::next(){
	index++;
	currentItem = structure->get(index);	
}
template<class T>
bool DynamicArrayIterator<T>::hasNext(){
	try{
		structure->get(index+1);
		return true;
	}
	catch(...){return false;}
}
template<class T>
T DynamicArrayIterator<T>::current(){
	return currentItem;
}

