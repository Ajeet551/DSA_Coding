#include <iostream>
using namespace std;
void prime_count(int *arr, int ele) {
    if (ele < 0) {
        return;
    }
    int count = 0;
    int flag;
    int tempArr[ele];
    for (int i = 0; i < ele; i++) {
        flag = 0;
        for (int j = 2; j < arr[i]; j++) {
            if (arr[i]%j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && arr[i] >= 2) {
            tempArr[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        cout << tempArr[i] << " ";
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
    prime_count(arr, size);
    return 0;
}
