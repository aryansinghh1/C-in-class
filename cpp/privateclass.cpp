#include<iostream>
using namespace std;
class aryan
{
    private:
    int rup = 100;
    void display()
    {
        cout<<"money is: "<< rup;
    }
    public:
    int paisa = 500;
    void display2() {
        display();
        
        cout<<"paisa is: "<<paisa<<"money is: "<< rup<<endl;

    }
};
class man:: aryan{
    public:
    
}
int main()
{
    aryan obj;
    obj.display2();

    return 0;
}