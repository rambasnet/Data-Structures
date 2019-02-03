/*
A number of the form a + bi, in which i^2 = -1 and a and b are real numbers, 
is called a complex number. We call a the real part and b the imaginary part of a + bi.
Complex numbers can also be represented as ordered pairs (a, b).
Some mathematical operations on complex numbers are defined by the following rules:
(a, b) + (c, d) = (a+c, b+d)
(a, b) - (c, d) = (a-c, b-d)
(a, b) * (c, d) = (ac-bd, ad+bc)

As C++ doesn't have a built-in type to manipulate complex numbers, let's define complex type 
using class to work with complex numbers.
By overloading operators +, *, >>, <<, etc., we can provide aggregate operations on complex numbers
such as x + y and x*y where x and y are complex numbers.
*/
#pragma once

#include <iostream>
using namespace std;

class ComplexType
{
	// overload >> operator
	friend istream& operator>>(istream &, ComplexType &);
	// overload << operator
	friend ostream& operator<<(ostream &, const ComplexType &);
	// overload + operator
	friend ComplexType operator+(const ComplexType &, const ComplexType &);
	// overload - operator
	friend ComplexType operator-(const ComplexType &, const ComplexType &);
	// overload * operator
	friend ComplexType operator*(const ComplexType &, const ComplexType &);
	// overload = operator
	friend bool operator==(const ComplexType &, const ComplexType &);
private:
	double realPart;
	double imaginaryPart;
public:
	ComplexType(double real=0, double imag=0);
	// Constructor
	// Initializes the complex number according to the parameters
	// Postcondition: realPart = real; imaginaryPart = imag;

	void setComplex(double real, double imag);
	// Method to set the complex numbers according to the parameters
	// Postcondition: realPart =real; imaginaryPart = imag

};