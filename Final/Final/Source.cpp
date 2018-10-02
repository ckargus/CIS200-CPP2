//#include<iostream>
//using namespace std;
//struct node
//{
//	int item;
//	node * next;
//};
//
//void insertith(node*& head, int position, int item)
//{
//	node * newnode = new node;
//	node * temp = head;
//	node * tempprev = head;
//	newnode->item = item;
//	if (position == 0)
//	{
//		head = newnode;
//		newnode->next = temp;
//		return;
//	}
//	for (int i = 1; i <= position; i++)
//	{
//		if (temp->next == nullptr)
//		{
//			temp->next = newnode;
//			newnode->next = nullptr;
//			return;
//		}
//		tempprev = temp;
//		temp = temp->next;
//
//	}
//	tempprev->next = newnode;
//	newnode->next = temp;
//}
//
//int main()
//{
//	node * list = new node;
//	list->item = 1;
//	list->next = new node;
//	list->next->item = 2; 
//	list->next->next = new node;
//	list->next->next->item = 3;
//	list->next->next->next = nullptr;
//	insertith(list, 20, 10);
//	//insertith(list, 3, 
//	while (list != nullptr)
//	{
//		cout << list->item << endl;
//		list = list->next;
//	}
//	return 0;
//}