#ifndef LEAKY_STACK_INTERFACE
#define LEAKY_STACK_INTERFACE
template <class ItemType>
class LeakyStackInterface
{
public:
	//returns whether stack is empty or not
	virtual bool isEmpty() const = 0;
	//adds a new entry to the top of the stack
	//if the stack is full, the bottom item is removed
	//or "leaked" first, and then the new item is set to the top
	//---> If the stack was full when the push was attempted, return false
	//---> If the stack was not full when the push was attempted, return true
	virtual bool push(const ItemType& newEntry) = 0;
	//remove the top item
	//if the stack is empty, return false to indicate failure
	virtual bool pop() = 0;
	//return a copy of the top of the stack
	virtual ItemType peek() const = 0;
	//destroys the stack and frees up memory
	//that was allocated
	virtual ~LeakyStackInterface() {}
};
#endif