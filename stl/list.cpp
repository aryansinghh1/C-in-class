#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator iter;
    for(iter = lst.begin();iter != lst.end();iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}


int main ()
{
    list<int> list1; //list of 0 length
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(1);
    list1.push_back(4);
    list1.push_back(12);

    display(list1);
    // Removing elements from list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(7); //it will remove the element 7

    //sorting the list
    // list1.sort();
    // display(list1);

    //revering the list
    list1.reverse();
    display(list1);


    list<int> list2(4);
    list<int> :: iterator itr;
    itr = list2.begin();
    *itr = 45;
    itr++;
    *itr = 5;
    itr++;
    *itr = 4;
    itr++;
    *itr = 2;
    itr++;

    display(list2);
    list1.sort();
    list2.sort();

    //merging
    list1.merge(list2);
    cout<<"list 1 after merging: ";
    display(list1);


}
