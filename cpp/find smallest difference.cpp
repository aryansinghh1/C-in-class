// You are using GCC
#include<iostream>
using namespace std;
int difference( int a[], int n)
{
    int diff = 1000;
    for (int i = 0;i<n;i++)
    {
        for (int j = i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                if (a[i]-a[j]<diff)
                {
                    diff = a[i]-a[j];
                }
            }
            else {
                if (a[j]-a[i]<diff)
                {
                    diff = a[j]-a[i];
                }
            }
        }
        
    }
    return diff;
}
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int s = difference (a,n);
    cout<<s;
}