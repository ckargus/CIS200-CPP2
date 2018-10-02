#include <iostream>
#include "Account.h"
#include "Checking.h"
#include "Savings.h"
using namespace std;

int main()
{
	Account * check = new Checking(500, 3);
	Account * save = new Savings(100, 10);
	Account * a = new Account(200);
	cout << "There have been three acounts made a checking, savings, and a plain account" << endl;
	cout << "The Savings has " << save->getBalance() << " dollars and an intrest rate of 10%" << endl;
	((Savings*)save)->yearlyUpdate();
	cout << "After the account has had it's intrest calculated and added, it now has " << save->getBalance() << endl << endl;
	cout << "The checking account has " << check->getBalance() << " dollars and a transaction fee of 3 dollars" << endl;
	check->credit(100);
	cout << "When a credit of 100 is done the checking account now has " << check->getBalance() << " dollars" << endl;
	check->debit(100);
	cout << "When a debit of 100 is doen the checking account now has " << check->getBalance() << " dollars" << endl;
	cout << "However if i try to credit an amount smaller than what than the transaction fee you will get an error saying" << endl;
	check->credit(2);
	cout << "Also if i try to enter a negative amount of a debit or credit i will get a message like" << endl;
	check->credit(-100);
	cout << "OR" << endl;
	check->debit(-100);
	cout << "If i try to take out more than what the checking account has i will get a message like this" << endl;
	check->debit(10000);
	cout << endl;
	cout << "The plain account has " << a->getBalance() << " dollars in it" << endl;
	a->credit(10000);
	cout << "When a credit of 10000 is done the plain account now has " << a->getBalance() << " dollars" << endl;
	a->debit(10000);
	cout << "When a debit of 10000 is done the plain account now has " << a->getBalance() << " dollars" << endl;
	cout << "However if you try to enter a negative of amount in for a credit of debit you will get a message like this" << endl;
	a->debit(-1);
	cout << "OR" << endl;
	a->credit(-1);
	cout << "Also if i try to take out more than what the plain account has I will get an error messaage like this" << endl;
	a->debit(10000000);
	return 0;
}