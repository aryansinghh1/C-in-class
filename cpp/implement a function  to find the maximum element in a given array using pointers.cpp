#include <iostream>
using namespace std;

int findMax(int* arr, int size) {
    if (size <= 0) return -1; 

    int max = *arr;
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int max = findMax(arr, size);
    cout << "The maximum element is: " << max << endl;

    delete[] arr;
    return 0;
}
