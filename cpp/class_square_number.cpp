#include<iostream>
using namespace std;
class abc
{
    public:
    void cal(int a )
    {
        cout<<"sqaure of a is: "<<a*a<<endl;
    }

};
int main()
{

    abc obj;
    int b;
    cout<<"Enter the number"<<endl;
    cin>>b;
    obj.cal(b);

}