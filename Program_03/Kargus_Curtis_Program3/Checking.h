#ifndef Checking_h
#define Checking_h

#include "Account.h"
using namespace std;

class Checking : public Account
{
public:
	Checking(double initBal, double fee);
	bool credit(double amt);
	bool debit(double amt);
private:
	double transFee; //fee for successful
					 //credit or debit operation
};
#endif