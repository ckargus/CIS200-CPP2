#ifndef Que_h
#define Que_h
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
	void Enqueue(Itemtype item); // push 
	Itemtype Dequeue();            // pops it off AND 
								   // returns the front 
private:
	Itemtype que[MAX];
	int rear;
	int front;
};
template<class Itemtype>
QueType::QueType()
{
	front = 0;
	rear = 0;
}

template<class Itemtype>
void QueType::MakeEmpty()
{
	front = 0;
	rear = 0;
}

template<class Itemtype>
bool QueType::IsEmpty() const
{
	return (front == rear);
}

template<class Itemtype>
bool QueType::IsFull() const
{
	return (front == (rear + 1) % MAX)
}

template<class Itemtype>
void QueType::Enqueue(Itemtype item)
{
	if (!(front == (rear + 1) / MAX))
	{
		que[rear] = item;
		rear = (rear + 1) / MAX;
	}
}

template<class Itemtype>
Itemtype QueType::Dequeue()
{
	Itemtype temp = que[front];
	front = (front + 1) / MAX;
	return temp;
}
#endif Que_h;