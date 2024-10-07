#include<iostream>
#include<cstring>
using namespace std;
class student
{
    private:
    int rollno;
    protected:
    char section[10];
    public:
    void getrno()
    {
        cin>>rollno;
    }
    void showrno()
    {
        cout<<"\nRollno: "<<rollno<<endl;
    }
};
class result: public student
{
    private:
    float fees;
    public:
    void getdata()
    {
        getrno();
        cin>>fees;
        cin>>section;
    }
    void display()
    {
        showrno();
        cout<<"Fee is: "<<fees<<endl;
        cout<<"Section is: "<<section<<endl;
    }
};
int main()
{
    result obj1;
    obj1.getdata();
    obj1.display();
    return 0;
}