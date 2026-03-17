#include <iostream>
using namespace std;
void insert_ele(int *arr, int ele) {
    if (ele < 0) {
        return;
    }
    int pos;
    int push_ele;
    int j = 0;
    cout << "Enter element pos to insert new element : ";
    cin >> pos;
    cout << "Enter 1 element at the above pos : ";
    cin >> push_ele;
    for (int i = ele+1; pos < i; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = push_ele;
    cout << "After inserting an element in array!!" << endl;
    for (int i = 0; i < ele+1; i++) {
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
    insert_ele(arr, size);
    return 0;
}
