// overloading with member functions example

#include <iostream>
#include <string>

using namespace std;

class Rectangle {
    friend ostream& operator<<(ostream &out, const Rectangle& r);
    friend istream& operator>>(istream &out, Rectangle& r);
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
    
        // overload + operator
        Rectangle operator+(const Rectangle& rhs) {
            Rectangle temp;
            temp.length = this->length + rhs.length;
            temp.width = this->width + rhs.width;
            return temp;
        }
        
        // overload [] operator
        float operator[](size_t index) {
            if (index == 0)
                return this->length;
            else
                return this->width;
        }
};

// overload << operator (only by non-member function)
ostream& operator<<(ostream &out, const Rectangle& r) {
    out << '[' << r.length << ", " << r.width << ']';
    return out;
}

// overload >> operator (only by non-member function)
istream& operator>>(istream &in, Rectangle& r) {
    in >> r.length >> r.width;
    return in;
}

int main() {
    Rectangle r1 = {10, 5};
    Rectangle r2 = {20, 10};
    Rectangle r = r1 + r2;
    // same as
    // Rectangle r = operator+(r1, r2);
    cout << r1 << " + " << r2 << " = " << r << '\n';
    cout << "length = " << r[0] << " width = " << r[1] << endl;
    // same as operator[](0) or operator[](1)
    cout << "Enter length and width of a rectangle separated by space: ";
    Rectangle r3;
    cin >> r3;
    cout << "Your rectangle's info: ";
    cout << r3 << endl;
    return 0;
}

/* Exercise
1. Overload subtraction (-) operator to subtract rhs (right hand side) rectangle from the lhs.

*/