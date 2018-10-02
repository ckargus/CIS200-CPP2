#ifndef Que2_cpp
#define Que2_cpp
#include<exception>
using namespace std;

const int MAX = 15;
template <class Itemtype>
class QueType
{
public:
	QueType();                    // easiest one 
	void MakeEmpty();             // just as easy 
	bool IsEmpty() const;         // simple 
	bool IsFull() const;          // also simple 
	virtual void Enqueue(Itemtype item); // push 
	virtual Itemtype Dequeue();            // pops it off AND 
								   // returns the front 
private:
	Itemtype que[MAX];
	int rear;
	int front;
};
template<class Itemtype>
QueType<Itemtype>::QueType()
{
	front = 0;
	rear = 0;
}

template<class Itemtype>
void QueType<Itemtype>::MakeEmpty()
{
	front = 0;
	rear = 0;
}

template<class Itemtype>
bool QueType<Itemtype>::IsEmpty() const
{
	return (front == rear);
}

template<class Itemtype>
bool QueType<Itemtype>::IsFull() const
{
	return (front == (rear + 1) % MAX );
}

template<class Itemtype>
void QueType<Itemtype>::Enqueue(Itemtype item)
{
	if (IsFull())	
	{
		cout << "Que is full";
	}
	else {
		que[rear] = item;
		rear = (rear + 1) % MAX;
	}
}

template<class Itemtype>
Itemtype QueType<Itemtype>::Dequeue()
{
	if (IsEmpty())
	{
		cout << "Queue is empty";
		Itemtype tempe;
		return tempe;
	}
	else
	{
		Itemtype temp = que[front];
		front = (front + 1) % MAX;
		return temp;
	}
}
#endif;