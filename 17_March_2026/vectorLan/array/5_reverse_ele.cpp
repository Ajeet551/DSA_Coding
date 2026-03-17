#include <iostream>
using namespace std;
void reverse_ele(int *arr, int ele) {
    if (ele < 0) {
        return;
    }
    int size = ele;
    for (int i = 0; i < size; i++, size--) {
        int temp = arr[i];
        arr[i] = arr[size-1];
        arr[size-1] = temp;
    }
}
int main() {
    int size;
    int *arr;
    cout << "Enter the size of an array : ";
    cin >> size;
    arr = new int[size];
    cout << "Enter the array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse_ele(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
