#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> collection(n);
    for (int i = 0; i < n; i++) {
        cin >> collection[i];
    }
    
    int largest = *max_element(collection.begin(), collection.end());
    int smallest = *min_element(collection.begin(), collection.end());
    
    cout << "The largest element is: " << largest << endl;
    cout << "The smallest element is: " << smallest << endl;

    return 0;
}