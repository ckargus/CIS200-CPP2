#ifndef Account_h
#define Account_h
using namespace std;
#include <iostream>
class Account
{
public:
	Account(double initBal = 0);// balance must be non-negative
								// cout “attempt at negative balance”
								// on illegal initialization
	virtual bool credit(double amt);
							// add amt to balance
							 // amt must be non-negative
							 // cout “attempt at negative deposit”
							 // on illegal transaction
	virtual bool debit(double amt); // subtract amt from balance
							// amt must be non-negative
							// cout “attempt at negative withdrawl”
							// balance must be non-negative
							// if attempt to overdraw cout
							// “debit amount exceeds balance”
							// leave balance unchanged
							// returns false if debit rejected
	double getBalance(); // return current balance
private:
	double balance;
};
#endif