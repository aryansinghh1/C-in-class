// explain the concept of friend functions and friend
// classes in cpp. create two classes circle and calculator.
// make a friend function inside calculator to access
// the radius of circle and compute its area. demonstrate 
// this with a simple main function

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    
    friend class Calculator;  // Declaring Calculator as a friend class
};

class Calculator {
public:
    double computeArea(Circle& c) {
        return 3.14159 * c.radius * c.radius;  // Accessing private member radius
    }
};

int main() {
    Circle circle(5);
    Calculator calc;
    cout << "Area of the circle: " << calc.computeArea(circle) << endl;
    return 0;
}
