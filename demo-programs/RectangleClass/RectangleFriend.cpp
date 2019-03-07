// operator overloading with non-member friend functions
#include <iostream>

using namespace std;

// non-member function overload example
class Rectangle {
    friend Rectangle operator+(const Rectangle& r1, const Rectangle& r2);
    friend void printRectangle(const Rectangle& r);
    friend ostream& operator<<(ostream &out, Rectangle r);
    private:
        float length, width;
    public:
        // default and overloaded constructor
        Rectangle(float length=0, float width=0) { 
            if (length < 0)
                length = 0;
            if (width == 0)
                width = 0;
            this->length = length;
            this->width = width;
        }; 
    
        float getArea() const {
            return this->length*this->width;
        }
    
        float getPerimeter() const {
            return 2*(this->length + this->width);
        }
};

// overload + operator
Rectangle operator+(const Rectangle& r1, const Rectangle& r2) {
    Rectangle temp;
    temp.length = r1.length + r2.length;
    temp.width = r1.width + r2.width;
    return temp;
}

void printRectangle(const Rectangle& r) {
    cout << "length = " << r.length << " width = " << r.width << '\n';
    cout << "area = " << r.getArea() << " perimeter = " << r.getPerimeter() << '\n';
}

//overload << operator
ostream& operator<<(ostream &out, Rectangle r) {
    out << "{" << r.length << ", " << r.width << "}";
    return out;
}

int main() {
    Rectangle r1 = {10, 5};
    Rectangle r2 = {20, 10};
    Rectangle r = r1 + r2;
    printRectangle(r);
    cout << r1 << " + " << r2 << " = " << r << '\n';
    return 0;
}