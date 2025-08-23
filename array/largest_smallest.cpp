#include <iostream>
using namespace std;
void largest_smallest(int* arr, int size) {
    int large = arr[0];
    int small = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }
    for (int i = 1; i < size; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
    }
    cout << "Largest : " << large << " smallest : " << small << endl;
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
    largest_smallest(arr, size);
    delete []arr;
    return 0;
}