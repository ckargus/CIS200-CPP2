#include<iostream>
#include "Checking.h"
using namespace std;

Checking::Checking(double initBal, double fee) : Account(initBal)
{
	transFee = fee;
}

bool Checking::credit(double amt)
{
	if (amt > transFee)
	{
		bool test = Account::credit(amt - transFee);
		return test;
	}
	else 
	{
		cout << "Transaction fee is greater than the amount being put in balance has not changed" << endl;
		return false;
	}
}

bool Checking::debit(double amt)
{
	bool test = Account::debit(amt + transFee);
	return test;
}