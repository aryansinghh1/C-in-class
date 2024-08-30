#include<bits/stdc++.h>
using namespace std;
void sum (int x, int y)
{
    cout<<"Sum of two numbers is:"<<x+y;
    
}
void sum (double x, double y)
{
    cout<<"\nSum of two big numbers is:"<<x+y;
    
}
void sum(float x,float y)
{
    cout<<"\nSum of two decimal number is:"<<x+y;
    
}
int main()
{
    int a=10 , b= 20;
    double c=23.4242,d=353.53432;
    float e=23.23,f=3.53;
    sum(a,b);
    sum(c,d);
    sum(e,f);
}