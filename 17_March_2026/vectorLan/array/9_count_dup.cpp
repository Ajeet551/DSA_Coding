#include <iostream>
using namespace std;
void count_dup(int *arr, int ele) {
    for (int i = 0; i < ele; i++) {
        int count = 1;
        int alreadyCount = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyCount = 1;
                break;
            }
        }
        if (alreadyCount) {
            continue;
        }
        for (int j = i+1; j < ele; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > 1) {
            cout << arr[i] << " : " << count << " time(s)." << endl;
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
    count_dup(arr, size);
    return 0;
}
