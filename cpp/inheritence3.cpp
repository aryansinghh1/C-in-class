// You are using GCC
#include<iostream>
using namespace std;
class B{
    protected:
    int x;
    public:
    void get_dataB()
    {
        cin>>x;
    }
};
class DB1 : public virtual B
{
    protected:
    int y;
    public:
    void get_dataDB1()
    {
        cin>>y;
    }
};
class DB2 : public virtual B 
{
    protected:
    int z;
    public:
    void get_dataDB2()
    {
        cin>>z;
    }
};
class D : public DB1, public DB2
{
    public:
    void sum()
    {
        int result;
        result=x+y+z;
        cout<<"Result is:"<<result;
    }
};
int main()
{
    D obj1;
    obj1.get_dataB();
    obj1.get_dataDB1();
    obj1.get_dataDB2();
    obj1.sum();
    return 0;
}