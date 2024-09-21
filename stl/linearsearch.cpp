#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
// void display (list<int> &lis)
// {
//     auto itr = lis.begin();
//     for ( itr = lis.begin(); itr != lis.end(); itr++)
//     {
//         cout<<*itr<<" ";
//     }
//     cout<<endl;
// }
int main()
{
   
    vector<int> vec={1,2,3,4,5};
    int key=5;
    int fag=0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i]==key)
        {
            fag=1;
            break;
        }
        
        
    }
    if (fag==1)
    {
       cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    
    

    
    

    

    return 0;
}