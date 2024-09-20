#include<iostream>
#include<list>
using namespace std;
void display(list<int> &it)
{
    list<int> :: iterator itr;
    cout<<"The list is: ";
    for(itr=it.begin();itr != it.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,j;
    list<int> list1;
    cout<<"Enter the size of list";
    cin>>n;
    for(int i=0;i<n;i++ )
    {
        cin>>j;
        list1.push_back(j);
    }

    display(list1);
           
    return 0;
}