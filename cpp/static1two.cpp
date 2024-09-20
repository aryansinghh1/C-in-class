#include <iostream>
#include <vector>
#include <algorithm>

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
int main() {
    vector<int> vec1;
    int n,j,ele,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>j;
        vec1.push_back(j);
    }
    sort(vec1.begin(),vec1.end());
    reverse(vec1.begin(),vec1.end());

    display(vec1);
    cout<<"Enter inserting size: ";
    cin>>k;
    for(int l = 0;l<k;l++)
    {
        cin>>ele;
        vec1.push_back(ele);
    }
    display(vec1);

    // Array of elements to remove
    vector<int> vec2;
    int r,w;
    cout<<"Enter deletiion elements";
    cin>>r;
    for(int i = 0;i<r;i++)
    {
        cin>>w;
        vec2.push_back(w);
    }

    // Loop to remove each element from elementsToRemove
    for (int i = 0; i < vec2.size(); i++) {
        vec1.erase(remove(vec1.begin(), vec1.end(), vec2[i]), vec1.end());
    }
    display(vec1);

    return 0;
}