#include <iostream>
using namespace std;
void second_largest(int* arr, int size) {
    if (size <= 0) {
        return;
    }
    int large = arr[0];
    int large_2 = arr[1];
    for (int i = 2; i < size; i++) {
        if (large < arr[i]) {
            large_2 = large;
            large = arr[i];
        }
    }
    cout << "1st largest : " << large << " 2nd largest : " << large_2 << endl;
}
int main() {
    int size;
    cout << "Enter a size of an array : ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the array elements : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    second_largest(arr, size);
    delete []arr;
    return 0;
}