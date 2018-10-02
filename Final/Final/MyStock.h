#ifndef MyStock_h
#define MyStock_h
#include "Stock.h"
class MyStock : public Stock
{
public:
	MyStock(int shares, string name, double price);
private:
	int shares;
};
#endif

