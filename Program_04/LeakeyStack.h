#include "LeakyStackInterface.h"
using namespace std;
const int MAX = 15;
template <class ItemType>
class LeakyStackArray : public LeakyStackInterface<ItemType>
{
public:
	LeakyStackArray();
	bool isEmpty() const;
	bool push(const ItemType& newEntry);
	bool pop();
	ItemType peek() const;
	~LeakyStackArray();
private:
	int numItems;
	ItemType container[MAX];
};
template <class ItemType>
LeakyStackArray<ItemType>::LeakyStackArray()
{
	numItems = 0;
}
template <class ItemType>
bool LeakyStackArray<ItemType>::isEmpty() const
{
	return numItems == 0;
}
template <class ItemType>
bool LeakyStackArray<ItemType>::push(const ItemType& newEntry)
{
	bool test = false;
	for (int i = numItems; i > 0; i--)
	{
		container[i] = container[i - 1];
	}
	if (numItems != MAX - 1)
	{
		numItems++;
		test = true;
	}
	container[0] = newEntry;
	return test;
}
template <class ItemType>
bool LeakyStackArray<ItemType>::pop()
{
	if (numItems > 0)
	{
		for (int i = 0; i < numItems; i++)
		{
			container[i] = container[i + 1];
		}
		numItems--;
		return true;

	}
	return false;
}
template <class ItemType>
ItemType LeakyStackArray<ItemType>::peek() const
{
	return container[0];
}
template <class ItemType>
LeakyStackArray<ItemType>::~LeakyStackArray()
{

}
