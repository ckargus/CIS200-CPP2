#include<iostream>
#include<memory>
using namespace std;
struct ListRecSmart
{
	char value;
	shared_ptr<ListRecSmart> next;
};

void Print(shared_ptr<ListRecSmart> String)
{
	while (String != nullptr)
	{
		cout << String->value;
		String = String->next;
	}
	cout << endl;
}

void deepCopy(shared_ptr<ListRecSmart> oldListHead, shared_ptr<ListRecSmart> newListHead)
{

	while (oldListHead != nullptr)
	{


		newListHead->value = oldListHead->value;
		oldListHead = oldListHead->next;
		if (oldListHead != nullptr)
		{
			newListHead->next = make_shared<ListRecSmart>();
			newListHead = newListHead->next;
		}
	}
	newListHead->next = nullptr;


}


int main()
{
	shared_ptr<ListRecSmart>head(new ListRecSmart);
	shared_ptr<ListRecSmart>newHead(new ListRecSmart);
	head->value = 'A';
	head->next = make_shared<ListRecSmart>();
	head->next->value = 'C';
	head->next->next = make_shared<ListRecSmart>();
	head->next->next->value = 'M';
	head->next->next->next = nullptr;
	Print(head);
	deepCopy(head, newHead);
	Print(newHead);
	return 0;
}