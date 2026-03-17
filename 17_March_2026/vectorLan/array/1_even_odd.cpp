#include <iostream>
using namespace std;
void even_odd(int *arr, int ele) {
    if (ele < 0) {
        return;
    }
    int add = 0;
    int prod = 1;
    for (int i = 0; i < ele; i++) {
        if (arr[i]%2 == 0) {
            add += arr[i];
        }
        else {
            prod *= arr[i];
        }
    }
    cout << "Addition of even elements : " << add << endl;
    cout << "Product of odd elements : " << prod << endl;
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
    even_odd(arr, size);
    return 0;
}
