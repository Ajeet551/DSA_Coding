#include <iostream>
using namespace std;
void second_smallest(int* arr, int size) {
    if (size <= 0) {
        return;
    }
    int small = arr[0];
    int small_2 = arr[1];
    for (int i = 2; i < size; i++) {
        if (small > arr[i]) {
            small_2 = small;
            small = arr[i];
        }
    }
    cout << "1st smallest : " << small << " 2nd smallest : " << small_2 << endl;
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
    second_smallest(arr, size);
    delete []arr;
    return 0;
}