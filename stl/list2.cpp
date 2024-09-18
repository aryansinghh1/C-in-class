#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst,int s)
{
    list<int> :: iterator iter=lst.begin();
    for(int i = 0; i<s;i++)
    {
        iter++;
    }
    cout<<*iter;
    iter=lst.begin();
    cout<<endl;
}


int main ()
{
    list<int> list1; //list of 0 length
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(9);

    display(list1,3);

}
