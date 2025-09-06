#include <iostream>
using namespace std;
bool powerof_4(int num) {
    return num > 0 && (num & (num - 1)) == 0 && !(num & 0xAAAAAAAA);   
}
int main() {
    int num;
    int flag;
    int pow;
    cout << "Enter a number to check power of 4 : ";
    cin >> num;
    cout << "Want to check power of given number ?\n1) Yes :\n2) No : ";
    cin >> flag;
    if (flag == 1) {
        cout << "Provide the power : ";
        cin >> pow;
        int mul = 1;
        for (int i = 1; i <= pow; i++) {
            mul = mul * num;
        }
        num = mul;
    }
    cout << "Number is " << num << endl;
    if (powerof_4(num)) {
        cout << "Power of 4 !!" << endl;
    } else {
        cout << "Not power of 4 !!" << endl;
    }
    return 0;
}