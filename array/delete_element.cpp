#include <iostream>
using namespace std;
void delete_num(int* arr, int size, int num) {
    if (size <= 0) {
        return;
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            for (int j = i; j < size; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
        }
    }
    cout << "After deleting array elements which is repeating ..." << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int num;
    int size;
    cout << "Enter a size for an array : ";
    cin >> size;
    cout << "Enter a number to delete : ";
    cin >> num;

    int* arr = new int[size];
    cout << "Enter the array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    delete_num(arr, size, num);
    delete []arr;
    return 0;
}