// write a function multiplu that multiplies two intergers
//  and returns the result. overload the function to suppoet
//   three parameters and use default argumentss so that the 
//   third parameter defaults to 1 . in the main  function , call 
//   the function with two arguments and with three arguments to demonstrate how it works

#include <iostream>
using namespace std;

int multiply(int a, int b, int c = 1) {
    return a * b * c;
}

int main() {
    cout << "Multiplying 2 and 3: " << multiply(2, 3) << endl;
    cout << "Multiplying 2, 3, and 4: " << multiply(2, 3, 4) << endl;
    return 0;
}
