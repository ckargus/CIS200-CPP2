#ifndef Poly_H
#define Poly_H
struct termNode
{
	int exp; // exponent
	int coef; // coefficient
	termNode * next;
};
class CPolynomial
{
public:
	CPolynomial(); // default constructor
	CPolynomial(int c, int e);
	// constructor makes a 1 node polynomial
	CPolynomial(const CPolynomial &other); // copy constructor
	~CPolynomial(); // destructor
	void print(); // prints out the polynomial in descending order
	CPolynomial& operator=(const CPolynomial & other); // equals
	CPolynomial& operator+ (const CPolynomial & other) const; // returns sum of the parameter + self
														//CPolynomial& operator* (const CPolynomial &) const;
	void setNext(int c, int e)
	{
		polyPtr->next = new termNode;
		polyPtr->next->coef = c;
		polyPtr->next->exp = e;
		polyPtr->next->next = nullptr;
	}
private:
	termNode * polyPtr;
};
#endif