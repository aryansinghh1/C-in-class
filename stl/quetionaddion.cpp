#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void display (list<int> &lis)
{
    auto itr = lis.begin();
    for ( itr = lis.begin(); itr != lis.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1,list2; 
    int n,j;
    cout<<"Enter the size of list: ";
    cin>>n;
    int kk;
    for ( int i = 0 ; i < n; i++)
    {
        kk=0;
        cin>>j;
        list2.push_back(j);
        kk=j+j;
        list1.push_back(kk);
    }    
    display(list2);
    display(list1);

    
    return 0;
}