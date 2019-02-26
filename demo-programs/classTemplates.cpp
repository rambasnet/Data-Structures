// Class Template Example
#include <iostream>
#include <string>

using namespace std;

template<class T>
class Rectangle {
    private:
        T length, width;
    public:
        // default and overloaded constructor
        Rectangle(T length=0, T width=0) { 
            if (length < 0)
                length = 0;
            if (width < 0)
                width = 0;
            this->length = length;
            this->width = width;
        }; 
    
        T getArea() const {
            return this->length*this->width;
        }
    
        T getPerimeter() const {
            return 2*(this->length + this->width);
        }
    
        // overload + operator
        Rectangle<T> operator+(const Rectangle<T>& other) {
            Rectangle<T> temp;
            temp.length = this->length + other.length;
            temp.width = this->width + other.width;
            return temp;
        }
        
        // overload [] operator
        T operator[](size_t index) {
            if (index == 0)
                return this->length;
            else
                return this->width;
        }
};

int main() {
    Rectangle<float> r1(10.5, 5.6);
    Rectangle<float> r2(10, 5);
    Rectangle<float> R = r1 + r2;
    cout << "length = " << R[0] << " width = " << R[1] << endl;
    return 0;
}