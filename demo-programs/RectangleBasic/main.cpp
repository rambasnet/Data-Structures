#include <iostream>
#include <cassert>
#include "Rectangle.h"

using namespace std;

void test() {
    Rectangle r(20, 5);
    cout << "test area: " << r.findArea() << endl;
    cout << "test done" << endl;

}

int main() {
    Rectangle r2;
    Rectangle *r = new Rectangle(); // default constructor
    Rectangle *rPtr = &r2;
    //r.setLength(10);
    //r.setWidth(5);
    cout << "enter length and width separated by space: ";
    int length, width;
    cin >> length >> width;
    r->setLength(length);
    r->setWidth(width);
    cout << " length = " << r->getLength() << endl;
    cout << "area = " << r->findArea() << endl;
    cout << "perimter = " << r->findPrimeter() << endl;
    delete r;
    test();
    cout << "done" << endl;

    return 0;
}