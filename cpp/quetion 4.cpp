// static members belong to the class ,not objects .
//  create a class student that has a static data members 
//  to keep track of the total number of students created .
//   also , implement a static members in the main function.


#include <iostream>
using namespace std;

class Student {
    static int totalStudents;

public:
    Student() {
        totalStudents++;
    }

    static int getTotalStudents() {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1, s2, s3;
    cout << "Total students: " << Student::getTotalStudents() << endl;
    return 0;
}
