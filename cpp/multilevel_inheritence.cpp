#include<iostream>
using namespace std;
class student
{
    protected:
    int rollno;
    public:
    void getno(int a)
    {
        rollno = a;
    }
    void putno()
    {
        cout<<"Roll No: "<<rollno<<endl;
    }
};
class test : public student
{
    protected:
    float sub1,sub2;
    public:
    void getmarks(float x,float y)
    {
        sub1 = x;
        sub2 = y;
    }
    void putmarks()
    {
        cout<<"Marks in sub1: "<<sub1<<endl;
        cout<<"Marks in sub2: "<<sub2<<endl;

    }
};
class result : public test
{
    float total;
    public:
    void display()
    {
        total = sub1 + sub2;
        putno();
        putmarks();
        cout<<"Total: "<<total;
    }
};
int main()
{
    result student1;
    student1.getno(105);
    student1.getmarks(80.4,98.5);
    student1.display();
    return 0;
}