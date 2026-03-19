#include <iostream>
using namespace std;
void copy_dup_in2Slot(int *arr, int ele) {
    int slot1_array[ele];
    int slot2_array[ele];
    int k = 0;
    int l = 0;
    for (int i = 0; i < ele; i++) {
        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                slot2_array[l++] = arr[j];
                flag = 1;
                break;
            } 
        }
        if (flag == 0) {
            slot1_array[k++] = arr[i];
        }
    }
    cout << "Store without duplicate elements in slot 1 !!" << endl;
    for (int i = 0; i < k; i++) {
        cout << slot1_array[i] << " ";
    }
    cout << endl;
    cout << "Store duplicate elements in slot 2 !!" << endl;
    for (int i = 0; i < l; i++) {
        cout << slot2_array[i] << " ";
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
    copy_dup_in2Slot(arr, size);
    return 0;
}
