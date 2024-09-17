// write a cpp program that reads a person's
//  name and age from the user using cin, and then
//   displays the information using cout. Define a Person class 
//   with data memebers for name and age, and appropriate membr function 
//   for input and output. Demonstrate object creattion and membere access
//    in the main function.

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void display() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    Person person;
    person.input();
    cout << "Person's Information:" << endl;
    person.display();
    return 0;
}
