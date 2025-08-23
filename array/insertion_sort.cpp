#include <iostream>
using namespace std;
void insertion_sort(int* arr, int size) {
    if (size <= 0) {
        return;
    }
}
int main() {
    int size;
    cout << "Enter a array size : ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter an array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    insertion_sort(arr, size);
    cout << "After insertion sorting ..." << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete []arr;
    return 0;
}