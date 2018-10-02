#include <iostream>
#include "Savings.h"
using namespace std;

Savings::Savings(double initBal, double intRate) : Account(initBal)
{
		interestRate = intRate / 100;
}

void Savings::yearlyUpdate()
{
	credit(calcInterest());
}

double Savings::calcInterest()
{
	return getBalance() * interestRate;
}