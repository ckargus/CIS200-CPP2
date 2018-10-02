#include<iostream>
#include "LeakeyStack.h"
#include "LinkedLeakyStack.h"
using namespace std;

int main()
{

	LinkedLeakyStack<int> test(15);
	cout << "Linked Leaky stack with 20 pushs" << endl;
	for (int i = 0; i < 20; i++)
	{
		test.push(i);
	}
	while(!test.isEmpty())
	{
		cout << test.peek() << endl;
		test.pop();
	}
	cout << "Linked Leaky stack with 100 pushs" << endl;
	for (int i = 0; i < 100; i++)
	{
		test.push(i);
	}
	while (!test.isEmpty())
	{
		cout << test.peek() << endl;
		test.pop();
	}
	
	LeakyStackArray<int> test1;
	cout << "Array Leaky stack with 20 pushs" << endl;
	for (int i = 0; i < 20; i++)
	{
		test1.push(i);
	}
	while (!test1.isEmpty())
	{
		cout << test1.peek() << endl;
		test1.pop();
	}
	cout << "Array Leaky stack with 100 pushs" << endl;
	for (int i = 0; i < 100; i++)
	{
		test1.push(i);
	}
	while (!test1.isEmpty())
	{
		cout << test1.peek() << endl;
		test1.pop();
	}
	
	return 0;
}