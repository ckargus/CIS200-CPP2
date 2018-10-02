#ifndef Counted_cpp
#define Counted_cpp
#include "Que2.cpp"

template <class Itemtype>
class Counted : public QueType<Itemtype>
{
public:
	Counted();
	int getLength();
	void Enqueue(Itemtype item);
	Itemtype Dequeue();
private:
	int length;
};

template <class Itemtype>
Counted<Itemtype>::Counted()
{
	length = 0;
}

template <class Itemtype>
int Counted<Itemtype>::getLength()
{
	return length;
}

template <class Itemtype>
void Counted<Itemtype>::Enqueue(Itemtype item)
{
	if (!IsFull())
	{
		QueType<Itemtype>::Enqueue(item);
		length++;
	}
}

template <class Itemtype>
Itemtype Counted<Itemtype>::Dequeue()
{
	if (!IsEmpty())
	{
		length--;
		return QueType<Itemtype>::Dequeue();	
	}
}
#endif 
