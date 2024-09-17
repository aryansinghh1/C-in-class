// define  a class rectangel that has member functions 
// to calculate and return the area and perimeter of
//  the rectangle. implement the area function as an 
//  inline fuction and the perimeter function as non 
//  inline function. provide a suitabe main fuction 
//  to demostrate these concepts


#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    inline int area() {
        return length * width;
    }

    int perimeter();
};

int Rectangle::perimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle rect(5, 3);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    return 0;
}
