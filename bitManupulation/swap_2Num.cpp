#include <iostream>
using namespace std;
int* swap_2Num(int num1, int num2) {
    int *arr = new int[2];
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    //cout << "After swap : " << num1 << " " << num2 << endl;
    arr[0] = num1;
    arr[1] = num2;
    return (int*)arr;
}
int main() {
    int num1 , num2;
    cout << "Enter num1 and num2 : ";
    cin >> num1 >> num2;
    cout << "Before swap : " << num1 << " " << num2 << endl;
    int *ret_ptr = swap_2Num(num1, num2);
    cout << "After swap : " << ret_ptr[0] << " " << ret_ptr[1] << endl;
    delete []ret_ptr;
    ret_ptr = nullptr;
    return 0;
}