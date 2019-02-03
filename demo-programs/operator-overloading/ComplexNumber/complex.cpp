// Implementation of ComplexType class
#include "complex.h"

// Member functions implementations
ComplexType::ComplexType(double real, double imag)
{
	this->setComplex(real, imag);
}

void ComplexType::setComplex(double real, double imag)
{
	this->realPart = real;
	this->imaginaryPart = imag;
}

// overload >> operator
istream& operator>>(istream &is, ComplexType &c)
{
	char ch;
	// parse complex number format (real, imaginary)
	is >> ch >> c.realPart >> ch >> c.imaginaryPart >> ch;
	return is;
}

// overload << operator
ostream& operator<<(ostream &os, const ComplexType &c)
{
	// print complex number format (real, imaginary)
	os << "(" << c.realPart << ", " << c.imaginaryPart << ")";
	return os;
}

// overload + operator
ComplexType operator+(const ComplexType &left, const ComplexType &right)
{
	ComplexType temp;
	temp.realPart = left.realPart + right.realPart;
	temp.imaginaryPart = left.imaginaryPart + right.imaginaryPart;
	return temp;
}

// overload - operator
ComplexType operator-(const ComplexType &left, const ComplexType &right)
{
	ComplexType temp;
	temp.realPart = left.realPart - right.realPart;
	temp.imaginaryPart = left.imaginaryPart - right.imaginaryPart;
	return temp;
}

// overload * operator
ComplexType operator*(const ComplexType &left, const ComplexType &right)
{
	//(a, b) * (c, d) = (ac-bd, ad+bc)
	ComplexType temp;
	double ac = left.realPart * right.realPart;
	double bd = left.imaginaryPart * right.imaginaryPart;
	temp.realPart = ac - bd;
	temp.imaginaryPart = (left.realPart*right.imaginaryPart) + (left.imaginaryPart*right.realPart);
	return temp;
}

// overload == operator
bool operator==(const ComplexType &left, const ComplexType &right)
{
	return (left.realPart == right.realPart && left.imaginaryPart == right.imaginaryPart);
}



