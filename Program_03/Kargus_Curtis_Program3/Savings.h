#ifndef Savings_h
#define Savings_h
#include "Account.h"

class Savings : public Account
{
public:
	Savings(double initBal, double intRate);
	void yearlyUpdate(); // update the balance
	double calcInterest();
private:
	double interestRate; // a percent 4 means 4%
};

#endif
