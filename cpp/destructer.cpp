#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\nCalling default base class constructor";
    }
    ~A()
    {
        cout<<"\nCalling vase class destructor";
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"\nCalling derived construtor";
    }
    ~B()
    {
        cout<<"\nCalling derived class destrutor";
    }
};
int main()
{
    B obj1;
    return 0;
}