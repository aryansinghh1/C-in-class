// Explain the diffrences between structures,
//  unions, and classes in cpp. wap to demostrate
//   the differences between them with an example where 
//   eavh type is used to store a person's data (name,age, and salary)

#include <iostream>
#include <string>
using namespace std;

// Structure to store person's data
struct PersonStruct {
    string name;
    int age;
    double salary;
};

// Union to store person's data
union PersonUnion {
    char name[50]; // Array to store name
    int age;
    double salary;
};

// Class to store person's data
class PersonClass {
private:
    string name;
    int age;
    double salary;

public:
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore(); // Ignore newline after input
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nSalary: " << salary << endl;
    }
};

int main() {
    // Using struct
    PersonStruct personStruct;
    personStruct.name = "Alice";
    personStruct.age = 30;
    personStruct.salary = 50000.0;

    cout << "Using struct:" << endl;
    cout << "Name: " << personStruct.name << "\nAge: " << personStruct.age << "\nSalary: " << personStruct.salary << endl;

    // Using union
    PersonUnion personUnion;
    cout << "\nUsing union:" << endl;
    strcpy(personUnion.name, "Bob");
    cout << "Name: " << personUnion.name << endl;
    personUnion.age = 25;
    cout << "Age: " << personUnion.age << endl;
    personUnion.salary = 60000.0;
    cout << "Salary: " << personUnion.salary << endl;

    // Using class
    cout << "\nUsing class:" << endl;
    PersonClass personClass;
    personClass.input();
    personClass.display();

    return 0;
}

