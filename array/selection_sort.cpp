#include <iostream>
using namespace std;
void selection_sort(int *arr, int size) {
    if (size <= 0) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size - 1; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    selection_sort(arr, size);
    cout << "After selection sorting ... " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete []arr;
    return 0;
}