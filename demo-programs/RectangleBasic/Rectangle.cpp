#include <iostream>
#include <assert.h>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() { // default constructor
    length = 0;
    width = 0;
}
//constructor with arguments
Rectangle::Rectangle(int length, int width) {
    //this->length = length;
    //this->width = width;
    this->setLength(length);
    this->setWidth(width);
}
//destructor
Rectangle::~Rectangle() {
    cout << "destructor called...!" << endl;
}

// member functions/methods
int Rectangle::findArea() {
    int area = length * width;
    return area;
}

int Rectangle::findPrimeter() {
    return 2*(length + width);
}

void Rectangle::setLength(int length) {
    if (length < 0) 
        length = 0;
    this->length = length;
}

void Rectangle::setWidth(int w) {
    //if (width <0 )  
    //    w = 0;
    assert(w >= 0);
    width = w;
}

int Rectangle::getLength() {
    return length;
}
