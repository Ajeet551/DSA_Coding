#include <iostream>
using namespace std;
void swap_2Num(int num1, int num2) {
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    cout << "After swap : " << num1 << " " << num2 << endl;
}
int main() {
    int num1 , num2;
    cout << "Enter num1 and num2 : ";
    cin >> num1 >> num2;
    cout << "Before swap : " << num1 << " " << num2 << endl;
    swap_2Num(num1, num2);
    return 0;
}