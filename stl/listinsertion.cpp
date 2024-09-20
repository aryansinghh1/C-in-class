#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void display(list<int> &dis){
    auto it = dis.begin();
    cout<<"list is: ";
    for(it=dis.begin();it !=dis.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    }
// void insert(list<int> &lis,int s){
//     int j;
//     for(int i=0; i< s;i++)
//     {
//         cin>>j;
//         lis.push_front(j);
//     }
// }
int main()
{
list<int> list1={1,2,3,4,5,6};
    cout<<"enter the size: ";
    int size;
    cin>>size;
    // insert(list1,size);
    display(list1);

    auto itr = list1.begin();
    advance(itr,2);
    list1.insert(itr,5);
    display(list1);

    auto itr2 = list1.begin();
    advance(itr2,2);
    list1.erase(itr2);
    display(list1);

    // auto itr3 = list1.begin();
    // list1.erase(remove(list1.begin(),list1.end(),10),list1.end());
    // display(list1);
    list1.remove(4);
    display(list1);

    return 0;
}