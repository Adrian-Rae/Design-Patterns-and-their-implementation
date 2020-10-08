#ifndef DYNAMICARRAYITERATOR_H
#define DYNAMICARRAYITERATOR_H
#include "Iterator.h"
#include "DynamicArray.h"
template<class T>
class DynamicArrayIterator : public Iterator<T>
{
	public:
		DynamicArrayIterator(DynamicArray<T>*);
		void first();
		void next();
		bool hasNext();
		T current();		
	private:
		DynamicArray<T>* structure;
		int index;
		T currentItem;	
};
#include "DynamicArrayIterator.cpp"
#endif
