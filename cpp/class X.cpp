#include <iostream>
using namespace std;

int main() {
    int arr[100], n, element, pos;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to be inserted: ";
    cin >> element;

    cout << "Enter the position (1 to " << n + 1 << ") where the element is to be inserted: ";
    cin >> pos;

    pos--;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
