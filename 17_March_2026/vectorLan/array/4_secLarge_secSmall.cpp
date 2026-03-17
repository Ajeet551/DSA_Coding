#include <iostream>
using namespace std;
void SecBiggest_SecSmallest(int *arr, int ele) {
    if (ele < 2) {
        cout << "Can't find in less than 2 elements !!" << endl;
        return;
    }
    int firstBig = INT32_MIN;
    int secBig = INT32_MIN;
    int firstSmall = INT32_MAX;
    int secSmall = INT32_MAX;
    for (int i = 0; i < ele; i++) {
        if (arr[i] > firstBig) {
            secBig = firstBig;
            firstBig = arr[i];
        } else if (arr[i] > secBig && arr[i] != firstBig) {
            secBig = arr[i];
        } 
        if (arr[i] < firstSmall) {
            secSmall = firstSmall;
            firstSmall = arr[i];
        } else if (arr[i] < secSmall && arr[i] != firstSmall) {
            secSmall = arr[i];
        }
    }
    cout << "First Biggest element : " << firstBig << endl;
    cout << "Sec Biggest element : " << secBig << endl;
    cout << "First Smallest element : " << firstSmall << endl;
    cout << "Sec Smallest element : " << secSmall << endl;
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
    SecBiggest_SecSmallest(arr, size);
    return 0;
}
