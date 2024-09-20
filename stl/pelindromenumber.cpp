#include<iostream>
using namespace std;
int main()
{
    int n;
    int a;
    cin>>n;
    int k = n;
    int rev=0;
    while(n>0)
    {
        a = n%10;
        rev = rev * 10 + a;
        n= n/10;
    }     
    if(rev == k)
    {
        cout<<"its pelindrome "<<endl;
    }
    else 
    {
        cout<<"not"<<endl;
    }
    cout<<"reverse of number: ";
    cout<<rev;
    return 0;
}