#include <iostream>
using namespace std;
void delete_ele(int *arr, int ele) {
    if (ele < 0) {
        return;
    }
    int del_ele;
    int j = 0;
    cout << "Enter element to delete : ";
    cin >> del_ele;
    for (int i = 0; i < ele; i++) {
        if (arr[i] != del_ele) {
            arr[j] = arr[i];
            j++;
        }
    }
    cout << "After deleting the array element !!" << endl;
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    delete_ele(arr, size);
    return 0;
}
