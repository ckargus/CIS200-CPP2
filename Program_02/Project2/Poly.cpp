#include <iostream>
#include "Poly.h"
using namespace std;


CPolynomial::CPolynomial()
{
	polyPtr = new termNode;
	polyPtr->coef = 0;
	polyPtr->exp = 0;
	polyPtr->next = nullptr;
}

CPolynomial::CPolynomial(int c, int e)
{
	polyPtr = new termNode;
	polyPtr->coef = c;
	polyPtr->exp = e;
	polyPtr->next = nullptr;
}
CPolynomial::~CPolynomial()
{
	termNode * numtemp = polyPtr;
	while (polyPtr != nullptr)
	{
		polyPtr = polyPtr->next;
		numtemp->next = nullptr;
		delete numtemp;
		numtemp = polyPtr;
	}

}

CPolynomial::CPolynomial(const CPolynomial &other)
{
	polyPtr = new termNode;
	termNode * ctemp = polyPtr;
	termNode * othertemp = other.polyPtr;
	while (othertemp != nullptr)
	{
		ctemp->coef = othertemp->coef;
		ctemp->exp = othertemp->exp;
		if (othertemp->next == nullptr)
		{
			break;
		}
		ctemp->next = new termNode;
		ctemp = ctemp->next;
		othertemp = othertemp->next;
	}
	ctemp->next = nullptr;
}

void CPolynomial::print()
{
	termNode * temp = polyPtr;
	while (temp != nullptr)
	{
		cout << temp->coef << "x^" << temp->exp;
		if (temp->next == nullptr)
		{
			break;
		}
		temp = temp->next;
		cout << " + ";
	}
	cout << endl;
}

CPolynomial& CPolynomial::operator=(const CPolynomial & other)
{
	termNode * cTempPtr = polyPtr;
	termNode * otherTemp = other.polyPtr;
	while (otherTemp != nullptr)
	{
		cTempPtr->coef = otherTemp->coef;
		cTempPtr->exp = otherTemp->exp;
		otherTemp = otherTemp->next;
		if (otherTemp != nullptr)
		{
			cTempPtr->next = new termNode;
			cTempPtr = cTempPtr->next;
		}
		
	}
	cTempPtr->next = nullptr;
	return *this;
}

CPolynomial& CPolynomial::operator+(const CPolynomial & other) const
{
	termNode * lhs = this->polyPtr;
	termNode * rhs = other.polyPtr;
	CPolynomial * temp = new CPolynomial;
	termNode * ctemp = temp->polyPtr;
	while (lhs != nullptr && rhs != nullptr)
	{
		if (lhs->exp == rhs->exp)
		{
			ctemp->exp = lhs->exp;
			ctemp->coef = lhs->coef + rhs->coef;
			lhs = lhs->next;
			rhs = rhs->next;
			if (lhs != nullptr && rhs != nullptr)
		{	
			ctemp->next = new termNode;
			ctemp = ctemp->next;
		}

		}
		else if (lhs->exp > rhs->exp)
		{
			ctemp->exp = lhs->exp;
			ctemp->coef = lhs->coef;
			lhs = lhs->next;
			if (lhs != nullptr && rhs != nullptr)
			{
				ctemp->next = new termNode;
				ctemp = ctemp->next;
			}
		}
		else if (rhs->exp > lhs->exp)
		{
			ctemp->exp = rhs->exp;
			ctemp->coef = rhs->coef;
			rhs = rhs->next;
			if (lhs != nullptr && rhs != nullptr)
			{
				ctemp->next = new termNode;
				ctemp = ctemp->next;
			}
		}
	}
	while (lhs != nullptr)
	{
		ctemp->next = new termNode;
		ctemp = ctemp->next;
		ctemp->exp = lhs->exp;
		ctemp->coef = lhs->coef;
		lhs = lhs->next;
			
	}
	while (rhs != nullptr)
	{
		ctemp->next = new termNode;
		ctemp = ctemp->next;
		ctemp->exp = rhs->exp;
		ctemp->coef = rhs->coef;
		rhs = rhs->next;
			
	}
	ctemp->next = nullptr;
	return *temp;
}