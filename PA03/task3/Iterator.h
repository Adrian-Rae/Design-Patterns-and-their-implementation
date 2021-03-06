#ifndef ITERATOR_H
#define ITERATOR_H
template<class T>
class Iterator
{
	public:
		virtual void first()=0;
		virtual void next()=0;
		virtual bool hasNext()=0;
		virtual T current()=0;		
	private:
		int index;
		T currentItem;	
};

#endif
