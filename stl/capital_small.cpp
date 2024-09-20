#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string name;
    cin>>name; 
    int len = name.length();
    cout<<"size of string: ";
    cout<<len<<endl;
    int ln = (len/2)+1;
    transform(name.begin(), name.end()-ln, name.begin(), ::toupper);
    
    cout<<name<<endl;
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    cout<<name;
    return 0;
}