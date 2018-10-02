#include <iostream>
#include "Poly.h"
using namespace std;

int main()
{
	CPolynomial Poly1;
	CPolynomial Poly2(4, 3);
	CPolynomial Poly3(12, 3);
	Poly1 = Poly3 + Poly2;
	cout << "Poly2 is ";
	Poly2.print();
	cout << "Poly3 is ";
	Poly3.print();
	cout << "Poly2 + Poly3 is ";
	Poly1.print();
	return 0;
}