#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"\nIn base Class A";
    }
};
class B : public A
{
    public:
    void show()
    {
        cout<<"In Derived Class B";
    }
};

int main()
{
    B obj2;
    obj2.show();
    obj2.A::show();           
    return 0;
}