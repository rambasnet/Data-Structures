// Example 1 - Overloading as member function
#include <iostream>

using namespace std;

class Rectangle {
  // cin >> and cout << operators can be overloaded only by 
  // regular functions
  friend istream& operator>>(istream &, Rectangle &);
  friend ostream& operator<<(ostream &, Rectangle &);

  private:
    // member variables/attributes
    float length;
    float width;
    
  public:
    // member functions
    Rectangle(float length=0, float width=0) {
      this->setLength(length);
      this->setWidth(width);
    }
    
    float getArea() {
      return length*width;
    }
    
    float getPerimeter() {
      return 2*(length+width);
    }
    
    // getters
    float getLength() const {
      return length;
    }
    
    float getWidth() const {
      return width;
    }
    
    // setters
    void setLength(float length) {
      if (length < 0)
          length = 0;
      this->length = length;
    }
    
    void setWidth(float width) {
      if (width < 0)
          width = 0;
      this->width = width;
    }
    
};

// overload >> (input extraction operator)
istream& operator>>(istream &in, Rectangle &r) {
    in >> r.length >> r.width;
    return in;
}

// overload << (output insertion operator)
ostream& operator<<(ostream &out, Rectangle &r) {
    out << "length = " << r.length << " width = " << r.width << endl;
    out << "area = " << r.getArea() << " perimeter = " << 
        r.getPerimeter() << endl;
    return out;
}

int main() {
    Rectangle r;
    cout << "Enter length and width separated by space: ";
    cin >> r;
    cout << r;
}