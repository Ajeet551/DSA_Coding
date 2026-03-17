#include <iostream>
using namespace std;
void biggest_smallest(int *arr, int ele) {
    if (ele < 0) {
        return;
    }
    int big = arr[0];
    int small = arr[0];
    for (int i = 1; i < ele; i++) {
        if (arr[i] > big) {
            big = arr[i];
        } else if (arr[i] < small) {
            small = arr[i];
        }
    }
    cout << "Biggest element : " << big << endl;
    cout << "Smallest element : " << small << endl;
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
    biggest_smallest(arr, size);
    return 0;
}
