#include <iostream>
using namespace std;

struct Node
{
	int ID;
	Node * next;
};

void FindID(Node*& node)
{
	if (node->ID == 123)
	{
		node = node->next;
		cout << node->ID;
	}
	else if(node->next != nullptr && node->next->ID != 123)
		FindID(node->next);
	else if (node->next != nullptr && node->next->ID == 123)
	{
		node->next = node->next->next;
	}
}
int main()
{
	Node * ptr = new Node;
	Node * ptr2 = new Node;
	Node * ptr3 = new Node;
	Node * ptr4 = new Node;
	ptr->ID = 100;
	ptr2->ID = 200;
	ptr3->ID = 123;
	ptr4->ID = 12;
	ptr->next = ptr2;
	ptr2->next = ptr3;
	ptr3->next = ptr4;
	ptr4->next = nullptr;
	FindID(ptr);

	return 0;
}