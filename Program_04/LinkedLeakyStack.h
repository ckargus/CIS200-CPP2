#include "LeakyStackInterface.h"
using namespace std;
template <class ItemType>
class LinkedLeakyStack : public LeakyStackInterface<ItemType>
{
public:
	LinkedLeakyStack(int max);
	bool isEmpty() const;
	bool push(const ItemType& newEntry);
	bool pop();
	ItemType peek() const;
	~LinkedLeakyStack();
private:
	struct Node
	{
		ItemType item;
		Node * next;
	};
	int numItems;
	int maxItems;
	Node * head;
};
template <class ItemType>
LinkedLeakyStack<ItemType>::LinkedLeakyStack(int max)
{
	head = nullptr;
	maxItems = max;
	numItems = 0;
}
template<class ItemType>
bool LinkedLeakyStack<ItemType>::isEmpty() const
{
	return numItems == 0;
}
template<class ItemType>
bool LinkedLeakyStack<ItemType>::push(const ItemType& newEntry)
{
	Node * newNode = new Node;
	newNode->item = newEntry;
	newNode->next = head;
	head = newNode;
	if (numItems != maxItems)
	{
		numItems++;
		return true;
	}
	return false;
}
template <class ItemType>
bool LinkedLeakyStack<ItemType>::pop()
{
	if (!isEmpty())
	{
		Node * NodeToDelete = head;
		head = head->next;
		NodeToDelete->next = nullptr;
		delete NodeToDelete;
		numItems--;
		return true;
	}
	else 
	{
		return false;
	}
}
template<class ItemType>
ItemType LinkedLeakyStack<ItemType>::peek() const
{
	return head->item;
}
template<class ItemType>
LinkedLeakyStack<ItemType>::~LinkedLeakyStack()
{
	Node * NodeToDelete;
	while (head->next != nullptr)
	{
		NodeToDelete = head;
		head = head->next;
		NodeToDelete->next = nullptr;
		delete NodeToDelete;
		
	}
	delete head;
	
}