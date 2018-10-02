#ifndef Stock_h
#define Stock_h
using namespace std;
#include <iostream>
class Stock
{
public:
	Stock(string name, double price);
private:
	double price;
	string name;
};
#endif 

