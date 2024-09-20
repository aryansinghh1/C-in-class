#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<char> &v)
{
    for ( int i = 0 ; i < v.size(); i++)
    {
        cout<<v[i]<< " ";

    }
    cout<<endl;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<s<<endl;
    int sum = 0,con = 0;
    vector<char> vec1,vec2;
    for(int i = 0;i<s.length();i++)
    {
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'o' ||s[i] ==  'e' ||s[i] == 'u'){
        sum++; 
        vec1.push_back(s[i]);
        }
        else{
            vec2.push_back(s[i]);
            con++;
        }
        
    }
    cout<<"count of vowels: "<<sum<<endl;
    cout<<"count of consonent: "<<con<<endl;
    display(vec1);
    display(vec2);
    return 0;
}