#include<iostream>
using namespace std;
class car
{
    public:
    string brand = "Tata";
    string mode1="Safari";
    int year = 2024;

    car()
    {
        cout<<"Brand of car is: "<<brand<<endl;
        cout<<"Model of car is: "<<mode1<<endl;
        cout<<"Manufacturing year of car is: "<<year<<endl;

    }
};
int main ()
{
    car obj;
    return 0;
}