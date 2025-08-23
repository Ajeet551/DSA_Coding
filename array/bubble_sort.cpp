#include <iostream>
using namespace std;
void bubble_sort(int *arr, int size) {
    if (size <= 0) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size;
    cout << "Enter a size of an array : ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, size);
    cout << "After sorting ... " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete []arr;
    return 0;
}