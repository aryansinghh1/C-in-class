#include<iostream>
using namespace std;
class my_class 
{
    int num;
    public:
    void set_number(int value)
    {
        num=value;
    }
    void show_numbers()
    {
        cout<<num<<endl;
    }

};
int main()
{
    my_class object, *p;
    object.set_number(1);
    p=&object;
    p->show_number();
    return 0;
}