#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    vector<int> :: iterator iter;
    cout<<"Inventory List: ";
    for(iter = v.begin(); iter != v.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1;
    int n,j,ele,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>j;
        vec1.push_back(j);
    }

    display(vec1);
    cout<<"Enter inserting size: ";
    cin>>k;
    for(int l = 0;l<k;l++)
    {
        cin>>ele;
        vec1.push_back(ele);
    }
    display(vec1);

    return 0;
}