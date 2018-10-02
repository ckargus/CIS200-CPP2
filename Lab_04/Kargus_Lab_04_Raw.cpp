//#include<iostream>
//#include<memory>
//using namespace std;
//
//struct ListRec
//{
//	char value;
//	ListRec *next;
//};
//void Print(ListRec* String)
//{
//	while (String != nullptr)
//	{
//		cout << String->value;
//		String = String->next;
//	}
//	cout << endl;
//}
//
//void deepCopy(ListRec* oldListHead, ListRec *newListHead )
//{
//
//	while (oldListHead != nullptr)
//	{
//		
//		
//			newListHead->value = oldListHead->value;
//			oldListHead = oldListHead->next;
//			if (oldListHead != nullptr)
//			{
//				newListHead->next = new ListRec;
//				newListHead = newListHead->next;
//			}
//	}
//	newListHead->next = nullptr;
//	
//	
//}
//
//
//int main()
//{
//	ListRec *head = new ListRec;
//	ListRec *newHead = new ListRec;
//	head->value = 'A';
//	head->next = new ListRec;
//	head->next->value = 'C';
//	head->next->next = new ListRec;
//	head->next->next->value = 'M';
//	head->next->next->next = nullptr;
//	Print(head);
//	deepCopy(head, newHead);
//	Print(newHead);
//	return 0;
//}
//
