#include <iostream>
using namespace std;
int findLargest(int arr[], int n) {
    int res = 0;
    for (int i = 1; i < n; i++) {   //TC: O(n)
        if (arr[i] > arr[res]) {
            res = i;
        }
    }
    return arr[res];
}
int main() {
    int arr[10];
    cout << "Enter the array elements : ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int ret = findLargest(arr, 10);
    cout << "Largest element in an array : " << ret << endl;
    return 0;
}
