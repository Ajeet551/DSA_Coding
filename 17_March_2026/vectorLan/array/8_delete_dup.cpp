#include <iostream>
using namespace std;
void delete_dup(int *arr, int ele) {
    if (ele < 0) {
        return;
    }
    for (int i = 0; i < ele; i++) {
        for (int j = i+1; j < ele; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < ele; k++) {
                    arr[k] = arr[k+1];
                }
                ele--;
            }
        }
    }
    cout << "After deleting duplicate elements from array !!" << endl;
    for (int i = 0; i < ele; i++) {
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
    delete_dup(arr, size);
    return 0;
}
