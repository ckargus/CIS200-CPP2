#include "MyStock.h"
#include "Stock.h"
#include<iostream>
using namespace std;
MyStock::MyStock(int shares, string name, double price) : Stock(name, price)
{
	this->shares = shares;
}