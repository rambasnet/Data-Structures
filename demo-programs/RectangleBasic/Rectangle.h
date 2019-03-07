#pragma once

class Rectangle {
    // member variables
private:
    int length;
    int width;
public:
    // member functions/methods
    // finds area of rectange and returns it
    Rectangle();
    Rectangle(int length, int width);
    ~Rectangle();//destructor
    int findArea(); 
    int findPrimeter();
    void setLength(int);
    void setWidth(int);
    int getLength();
};