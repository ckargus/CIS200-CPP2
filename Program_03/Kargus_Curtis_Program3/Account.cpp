#include<iostream>
#include "Account.h"
using namespace std;

Account::Account(double initBal)
{
	if (initBal >= 0)
	{
		balance = initBal;
	}
	else if (initBal < 0)
	{
		cout << "attempt at negative balance balance amount will be set to zero" << endl;
		balance = 0;
	}
}

 bool Account::credit(double amt)
 {
	 if (amt >= 0)
	 {
		 balance += amt;
		 return true;
	 }
	 else if (amt < 0)
	 {
		 cout << "Attempt at negative deposit account balance has not been changed" << endl;
		 return false;
	 }
 }

 bool Account::debit(double amt)
{
	if (amt <= balance && amt >= 0)
	{
		balance -= amt;
		return true;
	}
	else if (amt > balance)
	{
		cout << "debit amount exceeds balance balance has not been changed" << endl;
		return false;
	}
	else if (amt < 0)
	{
		cout << "attempt at negative withdrawl balance has not been changed" << endl;
		return false;
	}
}

double Account::getBalance()
{
	return balance;
}