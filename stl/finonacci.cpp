#include<iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    int a=0;
    int b=1;
    int c=0;
    while(i>0)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
        i--;
    } 
    return 0;
}