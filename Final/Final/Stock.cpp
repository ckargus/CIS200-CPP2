#include "Stock.h"
#include<iostream>
using namespace std;
Stock::Stock(string name, double price)
{
	this->price = price;
	this->name = name;
}