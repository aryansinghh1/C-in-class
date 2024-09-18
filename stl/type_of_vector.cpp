#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    for ( int i = 0 ; i < v.size(); i++)
    {
        cout<<v[i]<< " ";

    }
    cout<<endl;
}

int main () 
{

    int element, size = 5;

    vector<int> vec1(4,5);
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> vec4(6,3);
    vec2.push_back('5');
    vec1.push_back(45);
    display(vec1);


    



    // cout<<"Enter the size of vector"<<endl;
    // cin>>size;
    
    // for ( int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the vector elements"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,4, 566);
    // display(vec1);
 
}
