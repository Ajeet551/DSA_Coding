#include <iostream>
using namespace std;
void remove_dup(int* arr, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
        }
    }
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    remove_dup(arr, size);
    delete []arr;
    return 0;
}