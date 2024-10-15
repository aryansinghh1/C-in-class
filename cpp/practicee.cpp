#include<iostream>
using namespace std;

int main()
{
    int *p = new int (29) ;
    cout<<"Value of p: "<<*p<<endl;

    float *r = new float(75.65);
    cout<<"Value of r: "<<*r<<endl;

int n = 5;
int *q = new int[n]{1,2,3,4,5};
cout<<"Value in Array";
for(int i = 0;i<n;++i)
{
    cout<<q[i]<<" ";
    delete p;
    delete r;
    delete[]q;
    
}   
    return 0;
}