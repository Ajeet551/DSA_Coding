#include <iostream>
using namespace std;
void print_nonRepeate_ele(int *arr, int ele) {
    for (int i = 0; i < ele; i++) {
        int flag = 0;
        for (int j = 0; j < ele; j++) {
            if ((arr[i] == arr[j]) && (i != j)) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "Non-repeated value : " << arr[i] << endl;
        }
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
    print_nonRepeate_ele(arr, size);
    return 0;
}
