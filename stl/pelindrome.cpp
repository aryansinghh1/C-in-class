#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string &s) {
    string name = s;
    reverse(name.begin(), name.end());
    return s == name;
}

int main() {
    string str;
    cin >> str;

    if (isPalindrome(str)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}
