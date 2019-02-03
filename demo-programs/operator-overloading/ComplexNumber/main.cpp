// driver program to test CompleNumber class
#include <iostream>
#include "complex.h"

using namespace std;

int main(int argc, char* argv[]) {
    ComplexType c1(2, 3);
    ComplexType c2(5, 4);
    ComplexType c = c1 + c2;
    cout << c1 << " + " << c2 << " = " << c << endl;
    ComplexType c4;
    ComplexType c5;
    cout << "Enter complex number in the form (real, imaginary): ";
    cin >> c4;
    cout << "Enter another complex number in the form (real, imaginary): ";
    cin >> c5;
    cout << c4 << " + " << c5 << " = " << c4+c5 << endl;
    cout << c4 << " * " << c5 << " = " << c4*c5 << endl;
    
    return 0;
}