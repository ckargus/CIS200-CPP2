#include<iostream>
#include "Que2.cpp"
#include "Counted.cpp"
using namespace std;

int main()
{
	Counted<int> test;
	for (int i = 0; i < 2; i++)
	{
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(13);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(40);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(31);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(15);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(11);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(10);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(20);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(96);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(55);
		cout << "The number now is: " << test.getLength() << endl;
		test.Enqueue(34);
		cout << "The number now is: " << test.getLength() << endl;
		while (!test.IsEmpty())
		{
			cout << test.Dequeue() << " ";
			cout << "The number now is: " << test.getLength() << endl;
		}
		cout << endl;
	}
	
	return 0;
}