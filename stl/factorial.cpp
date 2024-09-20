#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int fact,j=1;

    cin>>fact;
    if(fact==0)
    {
        cout<<"no factorial.";
    }
    else if(fact==1)
    {
        cout<<"the factorial of 1 is 1.";
    }
    else{
        for(int i =1 ; i<=fact; i++)
        {
            j = j * i;
        }
        cout<<j;
        
    }
           
    return 0;
}